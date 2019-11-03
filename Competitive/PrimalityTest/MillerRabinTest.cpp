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

bool millerTest(int d, int n)
{ 
    int a = 2 + (int)(random() % (n - 4));
    int x = power(a, d, n);
    if (x == 1 || x == n - 1) 
        return true; 
    while (d != n - 1)
    { 
        x = (x * x) % n;
        d *= 2;
        if (x == 1)
            return false;
        if (x == n - 1)
            return true;
    }
    return false; 
} 
  
bool isPrime(int n, int k)
{
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (int i = 0; i < k; i++)
        if (!millerTest(d, n))
            return false;
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
	return 0;
}