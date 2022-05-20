//
// Created by zwp18 on 2022/5/17.
//
/*
 * 顺序栈
 */
#include "SqStack.h"

void InitStack(SqStack &S){//初始化栈
    S.top=-1;
}

bool StackEmpty(SqStack S){//判断栈空
    if(S.top==-1)
        return true;
    else
        return false;
}

bool Push(SqStack &S,ElemType x){//入栈
    if(S.top==MaxSize-1)
        return false;
//    S.top=S.top+1;
//    S.data[S.top]=x;
    S.data[++S.top]=x;
    return true;
}

bool Pop(SqStack &S,ElemType &x){//出栈
    if(S.top==-1)
        return false;
//    x=S.data[S.top];
//    S.top=S.top-1;
    x=S.data[S.top--];
    return true;
}

bool GetTop(SqStack S,ElemType &x){//读栈顶元素
    if(S.top==-1)
        return false;
    x=S.data[S.top];
    return true;
}

