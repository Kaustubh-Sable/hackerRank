//https://www.hackerrank.com/challenges/cut-the-sticks/problem
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i,n,num,min;
	cin>>n;
	vector<int> arr;
	for(i=0;i<n;i++)
	{	cin>>num;
		arr.push_back(num);
	}
	while(arr.size()>0)
	{
		min=arr[0];
		cout<<arr.size()<<endl;
		for(i=1;i<arr.size();i++)
			if(arr[i]<min)
				min=arr[i];
		for(i=0;i<arr.size();i++)
			arr[i]-=min;
		for(i=0;i<arr.size();i++)
			if(arr[i]==0)
			{	arr.erase(arr.begin()+i);	i--;
			}
	}
	return 0;
}
