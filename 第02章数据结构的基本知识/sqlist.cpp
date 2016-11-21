#include<iostream>
#include<fstream>
using namespace std;
#define max 100
#define ok 1
#define error -1;
typedef char status;
typedef char elemtype;
typedef struct LNode{  
char data;
  struct LNode *next;
}LNode,*Sqlist;//单链表结构
int intilist(Sqlist &L){
L=new LNode;//单链表的初始化
  L->next=NULL;
  return ok;
}
status getelem(Sqlist L,int i,elemtype &e){//取出链表中第i个元素
Sqlist p;int j;
  p=new LNode;
  p=L->next;j=1;
  while(p&&j<i){
   p=p->next;
    j++;
  }
  if(!p||j>i) return error;
  e=p->data;
  return ok;
}
status inselem(Sqlist &L,int i,elemtype e){//在链表第i处插入e
 Sqlist p;int j;
  p=new LNode;
  p=L;j=0;
  while(p&&(j<i-1)){
   p=p->next;j++;  }
  if(!p||j>i-1) return error;
  s=new LNode;
  s->data=e;
  s->next=p->next;
  p->next=s';
    return ok;
}
status dellist(Sqlist &L,int i){//删除第i个位置的元素
 Sqlist p,q;int j;
  p=new LNode;
  p=L;j=0;
  while((p->next)&&(j<i-1)){
   p=p->next;j++; 
  }
  if(!(p->next)||(j>i-1)) return error;
  q=p->next;
  p->next=q->next;
  delete q;
  return ok;
}
LNode *loclist(Sqlist L,elemtype e){//按值查找
  Sqlist p;
  p=new LNode;
  p=L->next;
  while(p&&p->data!=e)
    p=p->next;
  return p;
}
