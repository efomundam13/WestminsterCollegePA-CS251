/*
Programmer: Manny Fomundam
Date: October 15, 2022
Description: Create a linked list implementation of a deque
(Interface and Implementation)
*/

#ifndef DEQUE_H
#define DEQUE_H



//Node class
template<class T>
class Node
{
    public:
    T data;
    Node *next;
    Node *prev;

    Node(T data)
    {
        this->data = data;
        next = prev = nullptr;
    }
};

template<class T> class Deque {
    private:
    Node<T> *front;
    Node<T> *back;
    int size;

    public:
    //Constructor
    Deque();

    //insert at the front of the Deque
    void push(T data);

    //removes and returns the value at the front of the Deque
    T pop();

    //insert at the back of the Deque
    void inject(T data);

    //removes and returns the value at the back of the Deque
    T eject();

    //Returns true if the Deque is empty and returns false otherwise
    bool isEmpty();
};

//Constructor
template<class T> Deque<T>::Deque() 
{
    front = back = nullptr;
    size = 0;
}

//insert at the front of the Deque
template<class T> void Deque<T>::push(T data)
{
    //Creates a new node in the front, increments the size by 1
    Node<T> *newnode = new Node<T>(data);
    size++;
    if(front == nullptr)
    {
        front = back = newnode;
        return;
    }
    newnode->next = front;
    front->prev = newnode;

    front = newnode;
}

//insert at the back of the Deque
template<class T> void Deque<T>::inject(T data)
{
    //Creates a new node in the back
    Node<T> *newnode = new Node<T>(data);
    //Increment size by 1
    size++;
    //If back is equal to nullptr
    if(back==nullptr)
    {
        front = back = newnode;
        return;
    }
    //Set new node to back
    newnode->prev = back;
    back->next = newnode;

    back = newnode;
}

//removes and returns the value at the front of the Deque
template<class T>
T Deque<T>::pop()
{
    //Checks if deque is empty
    if(isEmpty()) {
        cout << "Deque is empty";
    }

    //Starts deletion of node
    Node<T> *old = front;
    T item = old->data;
    front = front->next;
    if(front!=nullptr) {
        front->prev = nullptr;
    }
    else {
        back = nullptr;
    }
    //Deletes node and decrements size by 1
    delete old;
    size--;
    return item;
}

//removes and returns the value at the back of the Deque
template<class T>
T Deque<T>::eject()
{
    //Checks if deque is empty
    if(isEmpty()) {
        cout << "Deque is empty";
    }

    //Starts deletion of node
    Node<T> *old = back;
    T data = old->data;
    back = back->prev;
    if(back!=nullptr)
        back->next = nullptr;
    else
        front = nullptr;
    //Deletes node and decrement size by 1
    delete old;
    size--;
    return data;
}

//Returns true if the Deque is empty and returns false otherwise
template<class T>
bool Deque<T>::isEmpty()
{
    if(front == nullptr || back == nullptr) {
        return true;
    }
    else {
        return false;
    }
}
#endif