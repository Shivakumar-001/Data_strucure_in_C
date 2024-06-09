#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
	int i,n,j;
	clrscr();
	printf("Enter number of rows:n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			for(j=0;j<=(n-i-2);j++)    
			{
				printf(" ");
			}
			for(j=0;j<=i;j++)
			{
				printf("%d",factorial(i)/(factorial(j)*factorial(i-j)));
			}
			printf("/n");
	}
	getch();
}
int factoral(int n)
{
	int c;
	int result = 1;
	for(c=1;c<=n;c++)
	{
		result=result*c;
	}
	return result;
}
