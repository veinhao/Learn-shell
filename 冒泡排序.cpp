#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,i,j,a[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t,p;
	for(i=0;i<n-1;i++)
	{
		p=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				p=1;
			}
		}
		if(p==0) break;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
