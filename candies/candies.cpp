//https://www.hackerrank.com/challenges/candies/problem
#include<iostream>
using namespace std;
int main()
{
   int i,n,tmp,sum=0;
   cin>>n;
   int rati[n],flag[n]={},flag1[n]={};
   for(i=0;i<n;i++)
	cin>>rati[i];
   if(n==1)
   {
	cout<<"1";
	return 0;
   }
   tmp=0;
   for(i=0;i<n-1;i++)
   {
	if(rati[i]<rati[i+1])
	{
		tmp++;
		flag[i+1]=tmp;
	}
	else
		tmp=0;
   }
   tmp=0;
   for(i=n-1;i>0;i--)
   {
	if(rati[i-1]>rati[i])
	{
		tmp++;
		flag1[i-1]=tmp;
	}
	else
		tmp=0;
   }
//   for(i=0;i<n;i++)	cout<<flag[i]<<" "<<flag1[i]<<" ";
   for(i=0;i<n;i++)
   {	rati[i] = flag1[i] > flag[i]? 1+flag1[i] : 1+flag[i];
	sum+=rati[i];
   }
   cout<<sum<<endl;
   return 0;
}
