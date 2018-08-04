#include<stdio.h>   
#include<conio.h>
 void main()
{
 int a[1000],item,i,n,pos=0,counter=1;
 clrscr();
 printf("\n\tEnter the number of elements to be inserted=");
 scanf("%d",&n);
printf("\n\tEnter %d element=",n);
    for(i=0;i<n;i++)
scanf("%d",&a[]);
printf("\n\tEnter the item to be searched=");
scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            pos=1;
            break;
        }
        counter=counter+1;
    }
    if(pos==0)
    printf("\t%d is not found",item);
    else
    printf("\t\n%d is found at postion %d\n",item,i);
    printf("\n\t Number of itretion %d\n",counter);
    if(i==0)
    printf("\n\t Best case");
    else if(i==n-1)
    printf("\n\t Worst case");
    else
    printf("\n\t Average case");
    getch();
}

