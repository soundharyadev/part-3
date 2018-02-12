#include<stdio.h>
#include<conio.h>
#define SIZE 50
void main()
{
int arr[SIZE];
int i,size,max;
printf("Enter the size of an array:");
scanf("%d",&size);
printf("Enter the elements of an array:");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<size;i++)
{
if(max<arr[i])
{
max=arr[i];
}
}
printf("the maximum among the number is %d",max);
getch();
}
