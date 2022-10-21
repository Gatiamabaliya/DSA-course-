#include<iostream>
using namespace std;

int power(int n, int m)
{
    if (m ==0)
    {
        return 1;
    }
    int temp = power(n,m/2);
    temp = temp*temp;
    if (m%2==0)
    {
        return temp;
    }
    else
    {
        return temp*n;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
}

// time and space complexity is theta(logn)