#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#define STACK_INIT_SIZE 30
#define STACKINCREMENT 10
typedef struct SqStack{
	 int* base;
	 int* top;
	 int stacksize;
}SqStack;

int* InitStack(SqStack & S);
int* ClearStack(SqStack & S);
int StackEmpty(SqStack & S);
int* Push(SqStack & S,int e);
int Pop(SqStack & S,int e);

#endif