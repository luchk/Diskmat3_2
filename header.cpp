//
// Created by Vika on 12/11/17.
//
#include <iostream>
#include "header.h"

using namespace std;

typedef int datatype;

item *head = NULL, *first=NULL, *last=NULL, *rear=NULL , *front=NULL ;

void show_second ()
{
    int counter = 0;
    item *temp = front;
    while(temp != NULL)
    {
        counter++;

        cout << temp->data << " ";
        temp = temp->next;

        if (counter == 10)
        {
            cout << " " << endl;
        }
    }
    cout << " " << endl;
}

void  enqueue(datatype data)
{
    item *temp   = new item;
    temp -> data = data;
    temp -> next = NULL;
    if (rear == NULL)
    {
        front = temp;
    } else
    {
        rear -> next = temp;
    }
    rear = temp;
}

void dequeue()
{
    if (front == NULL)
    {
        cout << "stack is empt" << endl;
        return;
    }
    item *temp = front;
    front = temp -> next;
    delete temp;
}

void menu()
{
    cout << "1) Add one "          << endl;
    cout << "2) Delete one "       << endl;
    cout << "3) Show all "         << endl;
    cout << "4) Exit the program " << endl;
}

void Swutsh(int keych) {
    int k;
    switch (keych) {

        case (1):
            cout << "enter the number " << endl;
            cin >> k;
            cout << " " << endl;
            enqueue(k);
            break;

        case (2):
            dequeue();
            break;

        case (3):
            cout << " " << endl;
            show_second();
            break;
    }

}