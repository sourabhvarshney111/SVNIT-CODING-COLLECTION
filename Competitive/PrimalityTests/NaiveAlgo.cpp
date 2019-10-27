#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(n==1)
		cout<<"Neither Prime nor composite\n";
	else{
		bool flag=true;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"Prime\n";
		else
			cout<<"Composite\n";
	}
	return 0;
}