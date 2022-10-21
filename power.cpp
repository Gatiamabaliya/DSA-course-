#include<iostream>
using namespace std;

int power(int n, int m)
{
    int ans=1;
    if (m ==0)
    {
        cout<<'1';
    }
    else 
    {
        for (int i = 1; i <=m; i++)
    {
         ans = ans * n;   
    }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
}