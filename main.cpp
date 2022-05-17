/*
 * Õ»
 */
#include "Header_file.h"

void testSqStack(){
    SqStack S;
    InitStack(S);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        Push(S,x);
        scanf("%d",&x);    
    }
    int y=-1;
    if(GetTop(S,y))
        printf("Õ»¶¥ÔªËØÎª%d\n",y);
}

void testLinkStack(){
    LiStack S;
    InitLiStack(S);
    int x=-1;
    scanf("%d",&x);
    while(x!=9999){
        Push(S,x);
        scanf("%d",&x);
    }
    LiStack s=S;
    int len=Length(s);
    printf("%d\n",len);
    for (int i = 0; i <len; ++i) {
        printf("%d",s->data);
        s=s->next;
    }
    printf("\n");
    int e=-1;
    GetTop(S,e);
    printf("Õ»¶¥ÔªËØÎª%d\n",e);

}

int main(){
   // testSqStack();
    testLinkStack();
    return 0;
}