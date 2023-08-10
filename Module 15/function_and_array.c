#include<stdio.h>
void fun(int *ar,int n)
{
       
       ar[3]=440; 

}
int main()
{
   int ar[5]={10,20,30,40,50};
  
   for (int i = 0; i < 5; i++)
   {
    printf("%d ",ar[i]);
    /* code */
   }
    fun(ar,5);
   
}