#ifndef QUEEN_HPP
#define QUEEN_HPP

#include <iostream>

class Queen
{
  public:
    const static int SIZE = 3;
    
    Queen()
    {
      // nothing
    }
/*
    Queen(Queen& q)
    {
      std::cout << "copy ctor" << std::endl;
    }
*/
    bool solve()
    {
      return solve(board, 0, 0);
    }

    bool solve(bool board[SIZE][SIZE], int row, int col)
    {
      // place a queen
      board[row][col] = true;
      
      // check is isValid
      // if ! isValid
      if (!isValid(board))
      {
        board[row][col] = false;
      //
      }

      if (row < SIZE && col < SIZE)
      {
        if (col >= SIZE)
        {
          row += 1;
          col = 0;
        }
        else 
        {
          col += 1;
        }

        solve (board, row, col);
      }
    }


    void setValue(int row, int col, bool value)
    {
      board[row][col] = value;
    }

    bool getValue(int row, int col)
    {
      return board[row][col];
    }

  private:
    bool isValid(bool board[SIZE][SIZE]);
    
    bool board[SIZE][SIZE];
};

std::istream& operator >> (std::istream& in, Queen& queen)
{
  bool input;
  for (int i = 0; i < Queen::SIZE; ++i)
  {
    for (int j = 0; j < Queen::SIZE; ++j)
    {
      in >> input;
      std::cout << "Read: " << input << std::endl;
      queen.setValue(i,j, input);
    }
  }
} 

std::ostream& operator << (std::ostream& out, Queen queen)
{
  for (int i = 0; i < Queen::SIZE; ++i)
  {
    for (int j = 0; j < Queen::SIZE; ++j)
    {
      out << queen.getValue(i,j) << " ";
    }
    std::cout << std::endl;
  }
}

#endif
