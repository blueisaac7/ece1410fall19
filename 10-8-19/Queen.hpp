#ifndef QUEEN_HPP
#define QUEEN_HPP

#include <iostream>

class Queen;

std::ostream& operator << (std::ostream& out, Queen queen);

class Queen
{
  public:
    const static int SIZE = 8;
    
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
      //std::cout << "======================" << std::endl;
      //std::cout << "solve: [" << row << "][" << col << "]" << std::endl;
      // place a queen
      if (!board[row][col])
      {
        board[row][col] = true;
      }
      //std::cout << *this;

      // check is isValid
      // if ! isValid
      if (!isValid(board))
      {
        board[row][col] = false;
        //std::cout << "Failed this board" << std::endl;
        //return false;
      }

      col += 1;

      if (col >= SIZE)
      {
        row += 1;
        col = 0;

        if (row >= SIZE)
        {
          std::cout << "Done!" << std::endl;
          return true; // Done!
        }
      }

      //std::cout << "Trying next square" << std::endl;
      solve (board, row, col);
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
    bool isValid(bool board[SIZE][SIZE])
    {
      for (int row = 0; row < SIZE; ++row)
      {
        for (int col = 0; col < SIZE; ++col)
        {
          if (board[row][col]) // If true there is a queen
          {
            if (checkRow(board, row, col) || checkCol(board, row, col) || checkDiag(board, row, col))
            {
              return false;
            }
          }
        }
      }

      return true;
    }
    
    bool checkRow(bool board[SIZE][SIZE], int row, int queenCol)
    {
      for (int col = 0; col < SIZE; ++col)
      {
        if (board[row][col] && col != queenCol) // there is a queen, but don't count yourself
        {
          return true;
        }
      }

      return false;
    }

    bool checkCol(bool board[SIZE][SIZE], int queenRow, int col)
    {
      for (int row = 0; row < SIZE; ++row)
      {
        if (board[row][col] && row != queenRow) // there is a queen, but don't count yourself
        {
          return true;
        }
      }

      return false;
    }

    bool checkDiag(bool board[SIZE][SIZE], int queenRow, int queenCol)
    {
      for (int distance = 1; distance < SIZE; ++distance)
      {
        if ((queenRow + distance < SIZE ) && (queenCol + distance < SIZE) && board[queenRow + distance][queenCol + distance])
        {
          return true;
        }

        if ((queenRow - distance >= 0 ) && (queenCol + distance < SIZE) && board[queenRow - distance][queenCol + distance])
        {
          return true;
        }

        if ((queenRow + distance < SIZE ) && (queenCol - distance >= 0) && board[queenRow + distance][queenCol - distance])
        {
          return true;
        }

        if ((queenRow - distance >= 0) && (queenCol - distance >= 0) && board[queenRow - distance][queenCol - distance])
        {
          return true;
        }
      }

      return false;
    }


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
      //std::cout << "Read: " << input << std::endl;
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
