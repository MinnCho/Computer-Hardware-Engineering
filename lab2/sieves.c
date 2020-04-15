#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define COLUMNS 6
int counter;

void print_number(int n){
  // Should print out all prime numbers less than 'n'
  // with the following formatting. Note that
  // the number of columns is stated in the define
  // COLUMNS

    if(counter > 5 && counter % COLUMNS == 0)
      printf("\n");

    printf("%10d ", n);
    counter++;
}

void print_sieves(int n){
  char a[n];

  for(int i = 0; i < n; i++){
    a[i] = 1;
  }

  for(int i = 2; i <= (int) sqrt(n); i++){
    if(a[i]){
      for(int j = i * i; j < n; j += i){
        a[j] = 0;
      }
    }
  }

  for(int i = 2; i < n; i++){
    if(a[i]){
      print_number(i);
    }
  }
}


int main(int argc, char *argv[]){
  if(argc == 2)
    print_sieves(atoi(argv[1]));
  else
    printf("Please state an interger number.\n");
  return 0;
}
