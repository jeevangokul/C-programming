#include <stdio.h>
void main ()
{
  int a;
  scanf("%d",&a);
  if (a>0)
  {
    printf("it is a positive%d",a);
  }
  else if(a<0)
  {
    printf("it is negative%d",a);
  }
  else
  {
    printf("it is zero");
  }
 }
