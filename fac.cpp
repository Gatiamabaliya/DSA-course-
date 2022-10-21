#include<iostream>
using namespace std;
int fac(int n)
{
    int fact = 1;
    for (int i = 1; i <=n; i++)
    {
        fact = fact *i;
    }
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<"factorial of this number is: "<<fac(n);
}
// the loop will run n times 
// TC theta(n)