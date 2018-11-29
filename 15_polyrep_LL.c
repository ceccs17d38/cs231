	//Name        : Nirmal K George Mathew
	//Roll no.    : 38
	//Program no. : 15
	//program name: Polynomial representation using linkedlist

	#include<stdio.h>
	#include<stdlib.h>

	struct node
	{
	    int exp,coef;
	    struct node *link;
	};

	void main()
	{
	    struct node *temp,*head,*ptr;
	    int ex,coe,c;
	    temp=(struct node*)malloc(sizeof(struct node));
	    temp->exp=0;
	    temp->coef=0;
	    temp->link=NULL;
	    ptr=head;

	    do
	    {
		printf("Enter coefficient: ");
		scanf("%d",&coe);
		printf("Enter exponent: ");
		scanf("%d",&ex);
		temp=(struct node*)malloc(sizeof(struct node));
		temp->exp=ex;
		temp->coef=coe;
		temp->link=NULL;
		ptr->link=temp;
		ptr=ptr->link;
		printf("1. Add more elements\n2. Continue\nEnter choice: ");
		scanf("%d",&c);
	    }while(c==1);
	    printf("1. Display polynomial\n2. Exit\nEnter choice: ");
	    scanf("%d",&c);
	    if(c==1)
	    {
		ptr=head->link;
		printf("F(p) = ");
		while(ptr!=NULL)
			{
				if(ptr->coef!=0)
				{
				printf("%d ", ptr->coef);
					if(ptr->exp!=0)
						printf("p^%d + ",ptr->exp);
				}
				ptr=ptr->link;
			}
	    }

	}


	OUTPUT:


	Enter coefficient: 4
	Enter exponent: 3
	1. Add more elements
	2. Continue
	Enter choice: 1
	Enter coefficient: 5
	Enter exponent: 2
	1. Add more elements
	2. Continue
	Enter choice: 1
	Enter coefficient: 2
	Enter exponent: 1
	1. Add more elements
	2. Continue
	Enter choice: 1
	Enter coefficient: 4
	Enter exponent: 0
	1. Add more elements
	2. Continue
	Enter choice: 2
	1. Display polynomial
	2. Exit
	Enter choice: 1
	F(p) = 4 p^3 + 5 p^2 + 2 p^1 + 4 
