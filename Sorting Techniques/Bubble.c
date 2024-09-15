#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    char str[100][100],temp[100];
    clrscr();
    printf("Enter number of Names:");
    scanf("%d",&n);
    printf("Enter names in any order:");
    for(i=0;i<n;i++)
    {   
        scanf("%d",str[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
            if(strcmp(str[i],str[j]>0))
            {
                strcpy(temp.str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
       } 
    }
    printf("The sorted order of names are:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    getch();

}