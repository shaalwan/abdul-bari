#include <bits/stdc++.h>

using namespace std;

int exp(float n , int m)
{
    if(m>0)
        return exp(n,m-1)*n;
    return 1;
}

int main()
{
    int n ,m;
    cin>> n>>m;
    cout<<exp(n,m);
    return 0;
}