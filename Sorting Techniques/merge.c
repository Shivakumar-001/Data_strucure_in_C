#include<stdio.h>
#include<conio.h>
void merge(int a[],int mid,int low,int high)
{
    int i,j,k,c[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=a[i];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        j++
        c[k]=a[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        a[i]=c[i];
    }
}
void mergeSort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeSort(a,mid,low,high);
    }
}
void main()
{
    int a[50],i,n;
    clrscr();
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    getch();
}