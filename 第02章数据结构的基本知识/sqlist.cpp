#include<iostream>
#include<fstream>
using namespace std;
typedef struct LNode{  
char data;
  struct LNode *next;
}LNode,*Sqlist;//单链表结构
int intilist(Sqlist &L){
L=new LNode;//单链表的初始化
  L->next=NULL;
  return 1;
}

