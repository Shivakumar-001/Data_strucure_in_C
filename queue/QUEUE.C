#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 5
void add(int item);
void del();
void display();
int a[max];
int front=-1,rear=-1;
int ch,i,item;
void main()
{

	while(1)
	{
		printf("\n Queue Operations");
		printf("\n___________________");
		printf("\n1.For Insertion");
		printf("\n2.For Deletion");
		printf("\n3.For Display");
		printf("\n4.For Exit");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n Enter the Elements to be insert:");
				scanf("%d",&item);
				add(item);
				break;
			case 2:del(max);break;
			case 3:display();break;
			case 4: exit(0);
			default : printf("\n Invalid choice");
		}
	}
		clrscr();
}
void add(int item)
{
	if(rear==max)
	{

			printf("\n Queue is Full");
			return;
	}
		else if(rear==-1)
		front=rear=0;
		a[rear]=item;
		printf("\n Rear=%d:Front=%d\n",rear,front);
		rear++;
}
void del()
{
	int x;
	if(front==-1)
	printf("Queue is Empty");
	else if(front==rear)
	{
		front=rear=-1;
		printf("\n Queue is Empty");
		return;
	}
	else
	{
		x=a[front];
		front=front+1;
		printf("\n Deleted element is %d",x);
		printf("\n Rear=%d:Front=%d\n",rear,front);
	}
}
void display()
{
	if(front==rear)

		printf("\n Queue is EMpty");
		else
		{
			printf("\n Queue eleements are");
			for(i=front;i<rear;i++)
			printf("\t%d",a[i]) ;
		}
}




