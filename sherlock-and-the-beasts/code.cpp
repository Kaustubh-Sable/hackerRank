#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int i,a,b,num,flag=0;
        cin >> num;
	if(num%3==0)
	{	for(a=0;a<num;a++)
			cout<<"5";
		flag=1;
	}
	else
	{
		a=num/3;
		while(a>0 && flag==0)
		{
			b=num/5;
			while(b>0 && flag==0)
			{
				if(a*3+b*5==num)
				{
					for(i=0;i<a*3;i++)
						cout<<"5";
					for(i=0;i<b*5;i++)
						cout<<"3";
					flag=1;
				}
				b--;
			}
			a--;
		}
		if(flag==0 && num%5==0)
		{	for(i=0;i<num;i++)
				cout<<"3";
			flag=1;			
		}
	}
	if(flag==0)
		cout<<"-1";
	cout<<endl;
    }
    return 0;
}
