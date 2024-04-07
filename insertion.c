#include<stdio.h>
int main()
{
int i,j, temp,a[5];
printf("Enter elements in array");
for(i=0;i<=4;i++)
{
   scanf("%d",&a[i]); 
}
for(i=0;i<=4;i++)
{
 j=i;
 while(j>0&&a[j-1]>a[j])
 {
    temp=a[j];
    a[j]=a[j-1];
    a[j-1]=temp;
    j--;
 }   
}

printf("sorted result is");
for(i=0;i<=4;i++)
{
printf("%d",a[i]);
}
return 0;
}