/*
Programmer: Manny Fomundam
Date: October 15, 2022
Description: Create a linked list implementation of a deque
(Main Class)
*/

#include <iostream>
#include"deque.h"

using namespace std;

//main function
int main()
{
    Deque<int> d2;
    cout << d2.isEmpty() << endl;
    d2.push(11);
    d2.inject(17);
    cout << d2.pop() << " = 11" << endl;
    cout << d2.eject() << " = 17" << endl;
    cout << d2.isEmpty() << endl;

    return 0;
}