//
// Created by zwp18 on 2022/5/17.
//

#ifndef STACK_SQSTACK_H
#define STACK_SQSTACK_H

#define MaxSize 10
typedef int ElemType;
typedef struct {//顺序栈
    ElemType data[MaxSize];
    int top;
}SqStack;

//#define MaxSize 10
//typedef int ElemType;
//typedef struct {//共享栈
//    ElemType data[MaxSize];
//    int top0;
//    int top1;
//}ShStack;

void InitStack(SqStack &S);//初始化栈
bool StackEmpty(SqStack S);//判断栈空
bool Push(SqStack &S,ElemType x);//入栈
bool Pop(SqStack &S,ElemType &x);//出栈
bool GetTop(SqStack S,ElemType &x);//读栈顶元素

#endif //STACK_SQSTACK_H
