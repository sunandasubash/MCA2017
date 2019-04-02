#include<stdio.h>
void main()
{
 int n,i,j;
 printf("enter the limit: ");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  printf("\n");
  for(j=0;j<=i;j++)
   { 
    printf("*");
   }
  }
}
