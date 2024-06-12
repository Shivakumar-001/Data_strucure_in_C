#include<stdio.h>
#include<conio.h>
#include<stdlib.c>
void main()
    {
        int n,*arr,i,max,min;
        printf("Enter the size of the array:");
        scanf("%d",&n);
        arr=(int*)malloc(n*sizeof(int));

        printf("Enter %d integers:\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        max=0;
        min=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        printf("The smallest element of the array is:%d",min);
        printf("The largest element of the array is: %d",max);
        free(arr);
        getch();
    }   
