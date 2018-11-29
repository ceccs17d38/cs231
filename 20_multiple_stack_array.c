    //Name        : Nirmal K George Mathew
    //Roll no.    : 38
    //Program no. : 20
    //program name: Multiple Stack using Array

    #include <stdio.h>
    #include<stdlib.h>
    #define SIZE 50


    int ar[SIZE],data;
    int top1 = 0;
    int top2 = SIZE-1;


    void push_stack1 ()
    {
        printf("\nenter data :");
        scanf("%d",&data);
      if (top1 < (top2 - 1))
      {

        ar[top1] = data;
        top1++;
      }
      else
      {
        printf ("Stack Full! Cannot Push\n");
      }
    }
    void push_stack2 ()
    {
         printf("\nenter data :");
        scanf("%d",&data);
      if (top1 < top2 - 1)
      {

        ar[top2] = data;
        top2--;
      }
      else
      {
        printf ("Stack Full! Cannot Push\n");
      }
    }


    void pop_stack1 ()
    {
      if (top1 >= 0)
      {
        int popped_value = ar[top1];
        top1--;
        printf ("%d is being popped from Stack 1\n", popped_value);
      }
      else
      {
        printf ("Stack Empty! Cannot Pop\n");
      }
    }
    void pop_stack2 ()
    {
      if (top2 < SIZE)
      {
        int popped_value = ar[top2];
        top2++;
        printf ("%d is being popped from Stack 2\n", popped_value);
      }
      else
      {
        printf ("Stack Empty! Cannot Pop\n");
      }
    }


    void display()
    {
      int i,j;
      printf("stack 1:\n");
      for (i = 0; i<top1; i++)
      {
        printf ("%d ", ar[i]);
      }
      printf ("\n");


      printf("stack 2:\n");
      for (j = SIZE-1; j>top2 ; j--)
      {
        printf ("%d ", ar[j]);
      }
      printf ("\n");
    }

    int main()
    {
      int ar[SIZE];
      int i,ch;
      int num_of_ele;

      printf ("We can push a total of 50 values\n");

      while(1)
      {
          printf("1. push in stack 1\n2. push in stack 2\n3. pop from stack 1\n4. pop from stack 2\n5.display\n6. exit\nenter choice :");
          scanf("%d",&ch);
          switch(ch)
          {
          case 1:
            push_stack1 ();
            break;
          case 2:
            push_stack2 ();
            break;
          case 3:
            pop_stack1 ();
            break;
            case 4:
            pop_stack2 ();
            break;
            case 5:
                display();
                break;
            case 6:
                exit (0);
            default:
                printf("wrong choice");
                break;
          }
      }
      return 0;
    }


    OUTPUT:


    We can push a total of 50 values
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :1

    enter data :4
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :1

    enter data :4
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :2

    enter data :5
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :2

    enter data :6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :5
    stack 1:
    4 4
    stack 2:
    5 6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :3
    0 is being popped from Stack 1
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :5
    stack 1:
    4
    stack 2:
    5 6
    1. push in stack 1
    2. push in stack 2
    3. pop from stack 1
    4. pop from stack 2
    5.display
    6. exit
    enter choice :6
