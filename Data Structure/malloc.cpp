#include <iostream>
using namespace std;
int main()
{
	int *p=(int *) malloc(20);
	for(int i=0;i<=5;++i)
	{
		cout<<"please enter the arr element"<<i+1<<endl;
		cin>>p[i]; 
		
	} 
	for(int i=0;i<=5;++i)
	cout<<p[i]<<endl;
}