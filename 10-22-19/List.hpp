#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

class Node
{
  public:
    Node(int data)
      : m_data(data),
        next(NULL)
    {
      // empty
    }

    int getData()
    {
      return m_data;
    }

    void setNext(Node* ptr)
    {
      next = ptr;
    }

    Node* getNext(void)
    {
      return ptr;
    }

  private:
    int m_data;
    Node* next;

};


class List
{
  public:
    List()
      : head(NULL)
    {

    }
    
    ~List()
    {
      while (head != NULL)
      {
        Node* tmp = head;
        head = head->getNext();
        delete tmp;
      }
    }

    void insert(int data)
    {
      if (head == NULL)
      {
        head = new Node(data);
      }
      else
      {
        tail->setNext(new Node(data));
        tail = tail->getNext();
      }
    }

    int remove();

    int peek();

  private:
    Node* head;
    Node* tail;

};

#endif