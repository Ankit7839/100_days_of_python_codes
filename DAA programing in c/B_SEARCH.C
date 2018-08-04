#include<stdio.h>
#include<conio.h>
int binary_search(int a[],int n,int item);
void main()
{
int a[1000],n,i,item,pos=0;
clrscr();
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter %d the element\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the item to searched\n");
scanf("%d",&item);
pos=binary_search(a,n,item);
if(pos==-1)
printf("item is not found");
else
printf("%d found at %d pos",item,pos);
getch();
}
int binary_search(int a[],int n,int item)
{
int beg,end,mid;
beg=0;
end=n-1;
mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]==item)
return mid;
else if(item>a[mid])
beg=mid+1;
else
beg=mid-1;
mid=(beg+end)/2;
}
return-1;
}

