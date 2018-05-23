#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,t,m,n,one,two;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int arr[n],flag=0;
        for(i=0;i<n;++i)
            cin>>arr[i];
        for(i=0;i<n-1;++i)
        {    for(j=i+1;j<n;++j)
             {   if(arr[i]+arr[j]==m)
                {
                    flag=1;
                    break;
                }
             }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<i+1<<" "<<j+1<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
