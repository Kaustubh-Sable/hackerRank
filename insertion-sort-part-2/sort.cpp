#include<iostream>
using namespace std;
int main()
{
    int size,e,i,j;
    cin>>size;
    int arr[size];
    for(j=0;j<size;j++)
	cin>>arr[j];
    i=1;
    while(i<size)
    {
	e=arr[i];
	j=i-1;
	while(arr[j]>e && j>=0)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=e;
	for(j=0;j<size;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	i++;
    }
    if(size==1)
	cout<<arr[0]<<endl;
    return 0;
}
