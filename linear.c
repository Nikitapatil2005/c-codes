#include<stdio.h>
int main()
{
 int i,n,a[5];
 printf("Enter element in array\n");
 for(i=0;i<5;i++)
 {
     scanf("%d",& a[i]);
 }
 printf("Enter element to be searched");
 scanf("%d",& n);
 for(i=0;i<5;i++)
 {
     if(n==a[i])
     {
        printf("element found ");
        break;    
     }
        }
    
    if(i==5 )
  {
      printf("element is not found ");
  }
    return 0;
    
}