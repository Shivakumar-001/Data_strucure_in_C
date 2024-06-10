#include<stdio.h>
#include<conio.h>
void toh(int n,char rodA,char rodC,char rodB);
void main()
{
	int n;
	clrscr();
	printf("Enter number of disks");
	scanf("%d",&n);
	toh(n,'A','C','B');
}
void toh(int n,char rodA,char rodC,char rodB)
{
	if(n==1)
	{
		printf("\nMove disk from %d from rod %c to rod %c",n,rodA,rodC);
		return;
	}
	toh(n-1,rodA,rodB,rodC);
	printf("\nMove disk %d from rod %c to rod %c ",rodA,rodC)
	toh(n-1,rodB,rodC,rodA);
}
