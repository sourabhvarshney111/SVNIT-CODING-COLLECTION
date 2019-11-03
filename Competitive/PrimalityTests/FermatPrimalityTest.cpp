#include<bits/stdc++.h>
using namespace std;
int power(int a, int n, int p) 
{
    int res = 1; 
    a = a % p;
    while (n > 0) 
    {
        if ((n & 1) == 1) 
            res = (res * a) % p; 
        n = n >> 1;
        a = (a * a) % p; 
    } 
    return res; 
}
bool isPrime(int n, int k)
{
    if (n <= 1 || n == 4) return false; 
    if (n <= 3) return true;
    while (k > 0) 
    { 
        int a = 2 + (int)(random() % (n - 4));
        if (power(a, n - 1, n) != 1) 
            return false;
        k--; 
    }
    return true; 
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(isPrime(n, 50))
        cout<<"Prime\n";
    else
        cout<<"Composite\n";
}