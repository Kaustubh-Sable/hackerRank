#include<iostream>
using namespace std;
int main()
{
   long t,l,b,x,i,j;
   cin>>t;
   while(t--)
   {
	cin>>l>>b;
	x=l*b;
	for(i=1;i<=x/2;i++)
	{
		if(x%(i*i)==0)
			j=i;
	}
	i=j*j;
	cout<<x/i<<endl;
   }
   return 0;
}
