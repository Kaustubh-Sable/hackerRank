//https://www.hackerrank.com/contests/hourrank-8/challenges/beautiful-binary-string
#include<iostream>
using namespace std;

int main()
{
	int n,i,cnt=0;
	string str;
	cin>>n;
	cin>>str;
	for(i=0;i<n-2;++i)
	{
		if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0')
		{
			str[i+2]='1';
			i+=2;
			++cnt;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
