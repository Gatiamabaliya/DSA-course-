#include<iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while (n>0)
    {
        rev = (rev*10) + (n%10);
        n= n/10;
    }
    return rev; 
}
int main()
{
    cout<<"enter a number: ";
    int m;
    cin>>m;
    if (m == reverse(m))
    {
        cout<<"its a palindorm number";
    }
    
}
// the loop will run d times the number of digits in the number.
// so time complexity is theta(d)