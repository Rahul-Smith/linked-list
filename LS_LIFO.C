/* CREATION OF A SINGLY LINKED LIST IN LIFO(STACK) MANNER*/

#include<stdio.h>
#include<stdlib.h>

struct stu* new(int);
void addnode_LIFo();
void traverse();

struct stu
{
    int info;
    struct stu *next;
}*p,*temp,*head=NULL;

void main()
{
    int a,ch=1;
    while(ch!=0)
    {
        printf("eneter a number=");
        scanf("%d",&a);

        p=new(a);
        addnode_LIFO(p);

        printf("press 1 for continue and 0 for end ");
        scanf("%d",&ch);
    }
    printf("the list is as follow");
    traverse(head);
}

struct stu *new(int a)
{
  p=((struct stu*)malloc(sizeof(struct stu))); 
  p->info=a;
  p->next=NULL;
  return p;
}

void addnode_LIFO()
{
temp=head;
if(head==NULL)
{
    head=p;
}
else
{
    p->next=temp;
    head=p;
}
}

void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("\n%d",temp->info);
        temp=temp->next;
    }
}
