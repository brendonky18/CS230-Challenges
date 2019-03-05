#include <stdio.h>
#include <math.h>

// Write a program that will generate a multiplication
// table NxM where N and M are provided by the user. The
// multiplication table must be formatted such that all
// the numbers are aligned properly.

int printTable(int n, int m, int values[]){
  int curIndex = -1;
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      curIndex = i * n + j;
      //printf("%i", curIndex);

      values[curIndex] = i * j;

      if(i == 0 && j == 0) {
        printf("  x ");
      } else if(i == 0){
        printf("%3i ", j);
      } else if(j == 0){
        printf("%3i ", i);
      } else {
        printf("%3i ", values[curIndex]);
      }
    }
    printf("\n");
  }
  return 0;
}

int main(void) {
  int n = -1;
  int m = -1;

  int maxNum = -1;

  int curIndex = -1;

  int numLength = -1;

  printf("Enter N:");
  scanf("%i", &n);

  printf("Enter M:");
  scanf("%i", &m);

  maxNum = n * m;

  int values[maxNum];

  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      curIndex = i * n + j;
      //printf("%i", curIndex);

      values[curIndex] = i * j;
    }
  }



  int foo = printTable(n, m, values);

  printf("Get to work!\n");
  return 0;
}

