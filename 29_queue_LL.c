//Name        : Nirmal K George Mathew
//Roll no.    : 38
//Program no. : 29
//program name: Queue using linkedlist

#include<stdio.h>
#include<stdlib.h>
int c=0;
struct node
{
    int data;
    struct node *next;

}*header;

struct node *newnode()
{
    struct node* newn=malloc(sizeof(struct node));
    if(newn==NULL)
    {


        printf("\nMemory overflow");
    exit(0);
    }
     else
     {
         return (newn);
     }
}
int enqueue()
{
    int data;
  struct node *new=newnode(),*cnode=header;
  printf("enter data :");
  scanf("%d",&data);
  while(cnode->next!=NULL)
  {
    cnode=cnode->next;
  }
  new->data=data;
  new->next=NULL;
  cnode->next=new;
  c++;

  return 0;
}
int dequeue()
{
    struct node *new=header->next,*cnode=header;
   if(header->next==NULL)
   {
              printf("\n empty queue ");

   }
    else
   {
       cnode=new;
     new=new->next ;
     header->next=cnode->next;
     header->next=new;
     printf("\nenqueued elem is %d  ",cnode->data);
     free(cnode);
     c--;

    }
return 0;
}
int delete()
{
    struct node *new=header->next,*cnode=header;




    while(new!=NULL)
    {
        cnode=new;
     new=new->next;
     free(cnode);printf("\n1.enqueue\n2.dequeue\n3.display\n4.count\n5.delete_all\n6.exit\nenter choice:");
     c--;


    }
    header->next=NULL;

return 0;
}
int  display()
{

    struct node *new=header->next;
    if(header->next==NULL)
        printf("\nempty");
    else{
        while(new->next!=NULL)
        {

            printf("  ->%d",new->data);
            new=new->next;
        }
        printf("  ->%d",new->data);

    }
    return 0;
}
int main()
{

    int ch,data;
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.count\n5.delete_all\n6.exit\nenter choice:");
    scanf("%d",&ch);
    header=newnode();
    header->next=NULL;

    while(1)
    {
        switch(ch)
        {
        case 1:
           enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("no of elem in queue is %d",c);
            break;
        case 5:
            delete();
            break;
        case 6:
            exit(0);
        default:
            printf("wrong choice");
        }
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.count\n5.delete_all\n6.exit\nenter choice:");
    scanf("%d",&ch);
    }
    return 0;

}


OUTPUT:


1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:1
enter data :4

1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:1
enter data :4

1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:1
enter data :6

1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:3
  ->4  ->4  ->6
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:2

enqueued elem is 4
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:3
  ->4  ->6
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:4
no of elem in queue is 2
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:5

1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:3

empty
1.enqueue
2.dequeue
3.display
4.count
5.delete_all
6.exit
enter choice:6
