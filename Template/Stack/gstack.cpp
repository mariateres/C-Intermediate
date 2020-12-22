#define MAX_SIZE 10
#include<iostream>
#include"gstack.h"
using namespace std;

  template <class T>
  T arr[MAX_SIZE]; 


  template <class T>
  MyStack<T>::MyStack():maxlen(10),top(-1){}
  template <class T>
  MyStack<T>::MyStack(int len) : maxlen(len),top(-1){
   
  }
 
  template <class T>
  void MyStack<T>::push(T val) {
    if(top<=maxlen)
    	arr[++top] = val;
    else
    	cout<<"Stack Overflow"<<endl;
  }
  
  template <class T>
  T MyStack<T>::pop() {
    if(top<=-1)
    	return -1;
    else
    	return arr[top--];
  }
  
  template <class T>
  T MyStack<T>::peek()
  {
  	return arr[top];
  }
  
  template <class T>
  bool MyStack<T>::isEmpty (){
  	if(top==-1)
  		return true;
  	return false;
  }
  
  template <class T>
  bool MyStack<T>::isFull(){
  	if(top==maxlen)
  		return true;
  	return false;
  }


