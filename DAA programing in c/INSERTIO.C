#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n);
void main()
{
   int a[1000],n,i;
   clrscr();
   printf("Enter the size of array=");
   scanf("%d",&n);
   printf("Enter%d the Element of array= ",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
insertion_sort(a,n);
   for(i=0;i<n;i++)
   printf("%d",a[i]);
   getch();
}
void insertion_sort(int a[],int n)
{
   int k,temp,j;
   for(k=0;k<n-1;k++)
   {
     temp=a[k];
     j=k-1;
     while((temp<a[j])&&(j>=0))
     {
	a[j+1]=a[j];
	j=j-1;
	a[j+1]=temp;
     }
   }
}

