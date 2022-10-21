#include<iostream>
using namespace std;
// total number of zeros in the factorial 
 int zero(int n)
{
    int fact =1;
    int store = 0;
    for (int i = 1; i <= n; i++)
    {
        fact = fact *i;
    }
    while (fact>0)
    {
        int ld = fact%10;
        if (ld == 0)
        {
            store = store + 1;
        }
        fact = fact/10;
    }
    return store;
} 
// gfg ka solution for tailing zeros 
/* int zero(int n){
    int fact =1;
    for (int i = 2; i <=n; i++)
    {
        fact*=i;
    }
    int res =0;
    while (fact%10 ==0)
    {
        res++;
        fact = fact/10;
    }
    return res;
} */
int main()
{
    int n;
    cin>>n;
    cout<<"number of zeroes in this number's factorial is: "<<zero(n);
}