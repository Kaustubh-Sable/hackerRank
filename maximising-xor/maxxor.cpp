#include<iostream>
using namespace std;
int main()
{
   int t,l,r,i,j,max=0;
   cin>>l>>r;
   for(i=l;i<r;i++)
	for(j=i;j<r;j++)
	{	t=i^j;
		if(t>max)
			max=t;
	}
   cout<<max<<endl;
   return 0;
}
