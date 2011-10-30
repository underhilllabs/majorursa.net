#include<stdio.h>
int main() {
  long int i, n2, n1, n, total;
  i = 2L;
  n2 = 1L;
  n1 = 2L;
  total = 2L;
  n = n1 + n2;
  while (n <= 4000000) {
    i++;
    // let's try even n's, instead of even i's
    if((n % 2) == 0) {
      //printf("i is %ld, n-2 is %ld, n-1 is %ld, n is %ld\n", i, n2, n1, n);
      total += n;
    }
    n2 = n1;
    n1 = n;
    n = n1 + n2;
  } 
  printf("total is %ld, i is %ld, n is %ld, n1 is %ld, n2 is %ld\n", total, i, n, n1, n2);
}
