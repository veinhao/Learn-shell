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
	sort(a,a+n);
	reverse(a,a+n);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
