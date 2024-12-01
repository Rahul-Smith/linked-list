
#include<stdio.h>
#include<stdlib.h>

struct stu *new(int);
void addnode_FIFO();
void addbefore(int);
void traverse();

struct stu
{
    int info;
    struct stu *next;
}*p,*r,*temp,*head=NULL;

void main()
{
    int a,ch=1,item;
    
    while(ch!=0)
     {
       printf("enter a number=");
       scanf("%d",&a);

        p=new(a);
        addnode_FIFO(p);

        printf("press 1 for continue and 0 for end=");
        scanf("%d",&ch);

     }

     printf("the list is as follow");
     traverse(head);

     printf("\nenter a new node which you want to insert=");
     scanf("%d",&a);

     p=new(a);
      
     printf("enter a position before you want to store=");
     scanf("%d",&item);

     addbefore(item);

     printf("After addition of new node the list is as follow");
     traverse(head);

     }

     struct stu *new(int a)
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

void addbefore(int item)
{
    
 temp=head;
 if(temp->info==item)
 {
    p->next=temp;
    head=p;
 }
 else
 {
 while(temp!=NULL)
 {
 if(temp->info==item)
 {
     r->next=p;
     p->next=temp;
 }
 r=temp;
 temp=temp->next;
}
}
}     
