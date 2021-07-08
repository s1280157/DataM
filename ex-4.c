#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(){
  int value1, value2, sum;
  char name[MAX];

  printf("What is your name?\n");
  scanf("%s", name);
  printf("Hello, %s!\n", name);
  printf("Rolling the dice...");

  srand(time(NULL));
  value1 = rand() % 6 + 1;
  value2 = rand() % 6 + 1;

  printf("Die 1: %d\n", value1);
  printf("Die 2: %d\n", value2);
  printf("Total value: %d\n", sum = value1 + value2);

  if(sum>7) printf("%s won!\n", name);
  else printf("%s lost!\n", name);

  return 0;

}
