#include<stdio.h>
int sum(int S,int A,int B,int C)
{
    int D=S-A-B-C;
    return D;
}
int main()
{
    int T;
    scanf("%d",&T);
    long long int S,A,B,C;
    for (int i = 0; i < T; i++)
    {
        scanf("%lld %lld %lld %lld",&S,&A,&B,&C);
     
    long long int cnt=sum(S,A,B,C);
    printf("%lld\n",cnt);
        /* code */
    }

    
    return 0;
}