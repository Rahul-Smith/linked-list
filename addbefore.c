#include<stdio.h>
#include<stdlib.h>

struct stu *new(int);
void addnode_FIFO();
void addbefore();
void traverse();

struct stu
{
    int info;
    struct stu *next;
}*p,*temp,*head=NULL;

void main()
{
    int a,ch=1,item;

     printf("enter a number=");
     scanf("%d",&a);

     while(ch!=0)
     {
        p=new(a);
        addnode_FIFO(p);

        printf("press 1 for continue and 0 for end=");
        scanf("%d",&ch);

     }

     printf("the list is as follow");
     traverse(head);

     printf("enter a new node which you want to insert");
     scanf("%d",&a);

     p=new(a);
      
     printf("enter a position before you want to store=");
     scanf("%d",&item);

     addbefore(item);

     printf("After addition of new node the list is as follow");
     traverse(head);

     }

     struct stu *new(int a);
     {
        p=((struct stu*)malloc(sizeof(struct stu)));
        p->info=a;
        p->next=NULL;
        return p;
     }

     void addnode_FIFO()
     {
        temp=head;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
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


     
