#include <iostream>
using namespace std;
int main()
{
    long long n,k=0;
    cin>>n;
    while(n>0)
    {
        n-=n%10+(n%100/10)+(n%1000/100)+(n%10000/1000)+(n%100000/10000)+(n%1000000/100000)+(n%10000000/1000000)+(n%100000000/10000000)+(n%1000000000/100000000)+(n%10000000000/1000000000);
        k++;
    }
    cout << k;
    return 0;
}
