/* CREATION OF A SINGLY LINKED LIST IN FIFO(QUEUE) MANNER*/

#include<stdio.h>
 
 struct stu *new(int);
 void addnode_FIFO();
 void travers();

  struct stu
  {
    int info;
    struct stu *next;
 }*p,*temp,*head=NULL;


void main(){
     int a,ch=1;
    
    while(ch!=0)
    {
        printf("\n enter a number:");
        scanf("%d",&a);

      p=new(a);
      addnode_FIFO(p);

      printf("press 1 for continue and 0 for end:");
      scanf("%d",&ch);
    }

    struct stu *new(int a)
    {
        p=((struct stu*)malloc(sizeof(struct stu)));
        p->info=a;
        p->next=null;
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
          temp=temp->mext;
        }
    }
}