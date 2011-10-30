#include<stdio.h>

int div_by_all(long n) {
       if (n%10>0 || n%11>0 || n%12>0 || n%13>0 || n%14>0 || n%15>0 || n%16>0 || n%17>0 || n%18>0 || n%19>0 || n%20>0) {   
         return 0;
       } else {
         return 1;
       }
}

int main() {  
  long i = 100L;
  while (!div_by_all(i)) {
    i += 30L;
  }
  is_div_all(i);
  printf("found it: %ld\n", i);
}

int is_div_all (long n) {
  if (n%10<1 && n%11<1 && n%12<1 && n%13<1 && n%14<1 && n%15<1 && n%16<1 && n%17<1 && n%18<1 && n%19<1 && n%20<1) {    
    printf("%ld works!\n", n);
  }
  else {
    printf("no way man\n");
  }
  return 1;
}
