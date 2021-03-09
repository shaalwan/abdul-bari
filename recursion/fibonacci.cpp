#include<bits/stdc++.h>

using namespace std;

int fib1(int n)
{

    static int F[n+1];
    memset(F ,-1, sizeof(F));
     if(n<=1)
     {
         F[n] = n;
         return n;
     }
    if(F[n-1]==-1)
        F[n-1]=fib1(n-1);
    if(F[n-2]==-1)
        F[n - 2] = fib1(n - 2);
    return F[n-2]+F[n-1];


}

int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-2)+fib(n-1);
}
int main()
{
    return 0;
}