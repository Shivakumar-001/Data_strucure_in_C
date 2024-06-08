#include<stdio.h>
#include<conio.h>
int hcf(int m,int n);
void main()
{	
		int m,n;
		clrscr();
		printf("Enter two positive numbers");
		scanf("%d%d",&m,&n);
		printf("GCD of %d and %d is %d",m,n,hcf(m,n));
		getch();
}
int hcf(int m,int n)
{
		if(n!=0)
		return hcf(n,m%n);
		else
		return m;
}

  
