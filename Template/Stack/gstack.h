#ifndef GSTACK_H
#define GSTACK_H
#include<iostream>
#define MAX_SIZE 10
using namespace std;

template<typename T>class MyStack {
T arr [MAX_SIZE];
int top ;
int maxlen ;
public:
MyStack();
MyStack(int maxlen);
//~MyStack();



void push(T val);
T pop();
T peek();
bool isEmpty ();
bool isFull ();
};

#endif
