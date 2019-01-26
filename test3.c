//Write a C program to find all numbers which dividing it by 7 and the remainder is equal to 2 or 3 between two given integer numbers.
#include <stdio.h>
int main()
{
  int x,y,temp,i,sum=0;
  printf("inpur the first integer:");
  scanf("%d",&x);
  printf("input the scond integer:");
  scanf("%d",&y);
  if (x>y)
  {
    temp = y;
    y = x;
    x = temp;
  }
  for (i = x+1; i<y; i++)
  {
    if ((i%7)==2 || (i%7)==3)
    printf("%d",i );
  }
  return 0;
}

// OUTPUT //
/* inpur the first integer:25
input the scond integer:45
3031373844 */
