#include <stdio.h>
void main()
{
  printf("Enter a Number:");
  int n;
  scanf("%d",&n);
  int f=1;
  if(n==0)
  printf("Factorial is 1");
  else if(n<0)
  printf("Wrong Input");
  else
  {
      int i=1;
      while(i<=n)
      {
          f*=i;
          i++;
      }
      printf("Factorial of %d is %d",n,f);
  }
}
