#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int div=n/10;
    int mod=n%10;
    if ( mod % div == 0 || div % mod ==0)
    {
        printf("YES");
        /* code */
    }

    else
    {
        printf("NO");
    }
    
    
    return 0;
}


// #include <stdio.h>

// int main()
//  {
//     int n=99;
//     scanf("%d", &n);
//     int div = n / 10;
//     int mod = n % 10;
//     if (n>8)
//     {
    
//   if (div == 1 || mod == 1)
//    {
//         printf("YES"); 
//     }
//   else if (div % mod == 0 || mod % div == 0) 
//     {
//         printf("YES");  
//     } 


//       else
//       {
//         printf("NO");
//       }
      
//         /* code */
//     }
//   else
//   {
//     printf("NO");
//   }
  

//     return 0;
// }
