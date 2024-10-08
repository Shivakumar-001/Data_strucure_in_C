#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,item,n;
    clrscr();
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        item=a[i];
        j=i-1;
        while(item<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    printf("\n Sorted elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}