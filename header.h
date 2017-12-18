//
// Created by Vika on 12/9/17.
//

#ifndef DISKMAT3_2_HEADER_H
#define DISKMAT3_2_HEADER_H

#endif //DISKMAT3_2_HEADER_H

#include <iostream>

using namespace std;

typedef int datatype;

struct item
{
    datatype data;
    item* next;
    item* previous;
};


void show_second ();

void  enqueue(datatype data);

void dequeue();

void menu();

void Swutsh(int keych);