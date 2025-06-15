#include <stdio.h>
int main() {

  int i, n;
  int a= 0, b = 1;

  int nextTerm = a+b;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", a,b);
  
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    a = b;
    b= nextTerm;
    nextTerm = a+b;
  }

  return 0;
}
