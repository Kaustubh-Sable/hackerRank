//https://www.hackerrank.com/challenges/find-digits/problem
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t,nd;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		if(n>=100000000)
			nd=9;
		else if(n>=10000000)
			nd=8;
		else if(n>=1000000)
			nd=7;
		else if(n>=100000)
			nd=6;
		else if(n>=10000)
			nd=5;
		else if(n>=1000)
			nd=4;
		else if(n>=100)
			nd=3;
		else if(n>=10)
			nd=2;
		else
			nd=1;
		int i,dig[nd],cnt=0;
		for(i=0;i<nd;i++)
		{	dig[i]=fmod(n,pow(10,i+1))/pow(10,i);
			if(dig[i]!=0)
				if(n%dig[i]==0)
					cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
