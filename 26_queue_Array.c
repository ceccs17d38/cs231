//Name        : Nirmal K George Mathew
//Roll no.    : 38
//Program no. : 26
//program name: Queue using Array


#include <stdio.h>
 
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}


OUTPUT:


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
