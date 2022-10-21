#include<iostream>
using namespace std;
int count(int n)
{
    int res =0;
    while(n>0)
    {
        n = n/10;
        res++;
    }
    return res;
} 
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}
// time complexity 
// the loop will run according to the no of digits in the number lets say it 'd'
// so TC will be theta(d)