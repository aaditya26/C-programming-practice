//Write a C program to check if two numbers in a pair is in ascending order or descending order.
#include <stdio.h>
int main() {
  int x,y,i,total=0;
  printf("input a pair numbers(for example 10,2:2,10):)");
  printf("\ninput first number of the pair:");
  scanf("%d",&x );
  printf("\ninput second nimbr of the pair:");
  scanf("%d",&y );
  if (x>y)
  {
    printf("the pair is in descending order!");
  }
  else
  {
    printf("the pair is in ascending order!");
  }
  printf("\n");
  return 0;
}

// OUTPUT //
/*
input a pair numbers(for example 10,2:2,1
0):)
input first number of the pair:10

input second nimbr of the pair:2
the pair is in descending order! */
