//
// Created by zwp18 on 2022/5/17.
//
/*
 * 线性栈
 */


#include "LinkStack.h"
#include <cstddef>
#include "malloc.h"

bool InitLiStack(LiStack &S){//初始化链栈
    S=NULL;
    return true;
}

bool Empty(LiStack S){//判断是否为空
    if(S==NULL)
        return true;
    else
        return false;
}
int Length(LiStack S){//求表长
    int len=0;
    Linknode *p=S;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    return  len;
}
bool Push(LiStack &S,ElemType e){//入栈
    Linknode *s=(LiStack) malloc(sizeof(Linknode));
    s->data=e;
    if(Empty(S)){
        S=s;
        S->next=NULL;
    }
    else{
        s->next=S;
        S=s;
    }

    return true;
}


bool Pop(LiStack &S,ElemType &e) {//出栈
    if (Empty(S))
        return false;
    Linknode *s = S;
    e=s->data;
    S->data=s->next->data;
    S=s->next;
    free(s);
    return true;
}

bool GetTop(LiStack S,ElemType &e){//获取栈顶元素
    if (Empty(S))
        return false;
    Linknode *s = S;
    e=S->data;
    free(s);
    return true;
}
