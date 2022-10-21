#include<iostream>
using namespace std;
/* int zero(int n)
{
    int res=0;
    for (int i = 5; i <=n; i=i*5)
    {
        res = res + (n/i);
    }
    return res;
} */
// time complexity 5^k <= n
// TC O(log n)
int zero(int n)
{
    int num = n/5;
    int ld = num/5;
    while (ld>0)
    {
        num = ld + num;
        ld = ld/5;
    }
    return num;
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"number of tailing zeros in its factorial is: "<<zero(n);
}