#include<iostream>
using namespace std;
int power(int x, int n)
{
    int res =1;
    while(n>0)
    {
        if (n%2 !=0) // (n&1) will check if the number is odd
        {
            res = res*x;
        }
        x = x *x;
        n = n/2;
    }
    return res;
}

int main()
{
    int n,x;
    cin>>x>>n;
    cout<<power(x,n);
}
 // time complexcity is O(log n)
 // axe space O(1)