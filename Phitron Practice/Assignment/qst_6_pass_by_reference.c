#include<stdio.h>
void pass_by_ref(int *p)
{
   *p=199;
  printf("Inside the function call = %d\n", *p);
}
int main()
{
     int x=5;
     printf("Before the function call = %d\n", x);
     pass_by_ref(&x);
     printf("After the function call = %d\n", x);

    return 0;
}