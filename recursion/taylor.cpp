#include <bits/stdc++.h>

using namespace std;

double p=1, f=1;

double taylor1(int n,int x)
{
    static double sum = 1;
    if(n == 0)
        return sum;
    sum = 1+x*sum/n;
    return taylor1(n-1,x);

}

double taylor(int n, int x)
{
    if(n == 0)
        return 1;
    double result = taylor(n-1,x);
    p = p*x;
    f = f*n;
    return result + p/f;

}

int main()
{
    int n,x;
    cin>>n>>x;
    cout<<taylor1(n,x)<<endl;
    return 0;
}