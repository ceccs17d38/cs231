	//Name        : Nirmal K George Mathew
	//Roll no.    : 38
	//Program no. : 18
	//program name: Stack using Array

	#include<stdio.h>
	int stack[50],c,n,top,x,i;
	int main()
	{
		top=-1;
		printf("Enter the size of stack:");
		scanf("%d",&n);
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
		do
		{
			printf("\n Enter the Choice:");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
				{
					if(top>=n-1)
					{
						printf("\nStack overflow");

					}
					else
					{
						printf("Enter a value to be pushed:");
						scanf("%d",&x);
						top++;
						stack[top]=x;
					}
					break;
				}
				case 2:
				{
					if(top<=-1)
					{
						printf("\nStack underflow");
					}
					else
					{
						printf("\nThe popped element is %d",stack[top]);
						top--;
					}
					break;
				}
				case 3:
				{
					if(top>=0)
					{
						printf("\nThe elements in stack \n");
						for(i=top; i>=0; i--)
							printf("\n%d",stack[i]);
						printf("\nEnter Choice");
					}
					else
					{
						printf("\nThe stack is empty");
					}
					break;
				}
				case 4:
				{
					printf("\n\EXIT  ");
					break;
				}
				default:
				{
					printf ("\nPlease Enter a Valid Choice");
				}

			}
		}while(c==1 || c==2 || c==3 || c==4);
	}


	OUTPUT:
	Enter the size of stack:3

	1.PUSH
	2.POP
	3.DISPLAY
	4.EXIT
	 Enter the Choice:1
	Enter a value to be pushed:4

	 Enter the Choice:1
	Enter a value to be pushed:5

	 Enter the Choice:1
	Enter a value to be pushed:6

	 Enter the Choice:2

	The popped element is 6
	 Enter the Choice:3

	The elements in stack

	5
	4
	 Enter the Choice:
	5
