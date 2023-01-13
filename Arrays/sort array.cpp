#include <iostream>
using namespace std;
int main()
{
	int x [5]={1,4,-3,5,2};
	int z;
	for(int i=0;i<=4;++i)
	{
	for(int i=0;i<=4;++i) 
	{
		if(x[i]>x[i+1])
		{
			z=x[i];
			x[i]=x[i+1];
			x[i+1]=z;
		}
			cout<<x[i];
	}
}}