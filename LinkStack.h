//
// Created by zwp18 on 2022/5/17.
//

#ifndef STACK_LINKSTACK_H
#define STACK_LINKSTACK_H


typedef int ElemType;
typedef struct Linknode{//单链表结构体
    ElemType data;
    struct Linknode *next;
}*LiStack;

bool InitLiStack(LiStack &S);//初始化链栈
bool Empty(LiStack S);//判断是否为空
int Length(LiStack S);//求栈长
bool Push(LiStack &S,ElemType e);//入栈
bool Pop(LiStack &s,ElemType &e);//出栈
bool GetTop(LiStack S,ElemType &e);//获取栈顶元素
#endif //STACK_LINKSTACK_H
