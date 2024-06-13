#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],pos,n,temp;
    clrscr();
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                 pos=j;
            }
        } 
       temp=a[pos];
       a[pos]=a[i]; 
       a[i]=temp;
    }  
    printf("Sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d"\t,a[i]);
    }
    getch();
   
}
