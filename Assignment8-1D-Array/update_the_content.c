// program to update the content of an array when element value is given
#include<stdio.h>
int main()
{
  int i,t,a[10],n,m,s,j=0,b[10];
  printf("\nEnter the Limit:");
  scanf("%d",&n);
  printf("\nEnter the Values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nGiven values are:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d\n",i,a[i]);
  }

  for(i=0;i<n;i++)
  {
    //if(i==t)
    printf("\nEnter the position to be update:");
    scanf("%d",&t);
    printf("\nEnter the value to be update:");
    scanf("%d",&s);
    {
       a[i]=s;
    }
  }
  printf("\nUpdated value is:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d",i,a[i]);
  }
  return 0;
}
