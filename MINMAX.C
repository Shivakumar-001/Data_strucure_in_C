#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,*arr,i,max,min;
	clrscr();
	printf("Enter the size of the array");
	scanf("%d",&n);

	arr = (int *)malloc(n*sizeof(int));
	printf("Enter %d Elments:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("The largest element of the array: %d",max);
	printf("The smallest element of the array: %d",min);
		free(arr);

		getch();
}

/* OUTPUT :

Enter the size of the array
5
Enter 5 Elements: 
10
5
9
45
-3
The largest element of the array:45
The smallest element of the array:-3
*/