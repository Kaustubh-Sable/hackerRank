#include<iostream>
using namespace std;
int main()
{
    int size,e,i,k;
    cin>>size;
    int arr[size];
    for(k=0;k<size;k++)
	cin>>arr[k];
    e=arr[size-1];
    i=size-2;
    while(arr[i]>e && i>=0)
    {	arr[i+1]=arr[i];
	i--;
	for(k=0;k<size;k++)
		cout<<arr[k]<<" ";
	cout<<endl;
    }
    arr[i+1]=e;
    for(k=0;k<size;k++)
		cout<<arr[k]<<" ";
    cout<<endl;
    return 0;
}
