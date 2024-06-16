#include<stdio.h>
#inlcude<conio.h>
void main()
{
    int n,ch,key,pos,i,a[];
    clrscr();
    printf("1.linear search\n 2.Binary search");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch(ch);
    {
        case 1: printf("Enter the number of elements to insert\n");
                scanf("%d",&n);
                printf("enter the elements\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);
                }
                printf("Enter the element t search in the array\n");
                scanf("%d",&key);
                for(0;i<n;i++)
                {
                    if(a[i]==key)
                    {
                        printf("element foud at the position=%d",i);
                        exit(0);
                    }
                }
                printf("element not found");
                break;
                case 2: printf("enter the number of elements to insert\n");
                scanf("%d",&n);
                printf("enter the elements in sorted order\n");
                for(i=0;i<n;i++)
                {
                    scanf("%d",&a[i]);

                }
                printf("enter the element to search in the array\n");
                scanf("%d",&key);
                pos=search(a,key,0,n-1);
                if(pos==-1);
                printf("tem not found at position %d",pos);
                else
                printf("item found at position %d",pos);
            
    }
    getch();

}
int search(int a[],int key,int low,int high)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
    mid=(low+high)/2;
    if(key==a[mid])
    {
        return mid;
    }
    if(key<a[mid])
    {
        return search(a,key,low,mid-1)
    }
    else
    return search(a,key,mid+1,high);
}