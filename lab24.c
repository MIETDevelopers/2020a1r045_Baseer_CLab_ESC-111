#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int main()
 {
  char a[20];
  int length,k;
  printf("enter the name: \n");
  scanf("%s", a);
  length = strlen(a);
  length = length - 1;
  k=0;
  while( length > k)
  {
    if(a[length]!= a[k])
    {
      printf("%s is not palindrome", a );
      exit(0);

    }
     length--;
     k++;

  printf("%s is the palindrome\n", a);
 }
  return 0;
}