#include <iostream>
#include <vector> 
#include <algorithm> 
#include <functional>
using namespace std;
int main()
{
	vector<int>v={1,2};
	vector<int>::iterator it;
	for(it =v.begin();it!=v.end();++it)
	{
		cout<<*it<<endl;
	}   
	cout<<"the second display"<<endl;
	vector<int>x={1,22,3}; 
	for(	vector<int>::iterator it=x.begin();it!=x.end();++it) 
	{
		cout<<*it<<endl;
	}  
	cout<<"the other way to display"<<endl; 
	for_each(v.begin(),v.end(),[](int i){cout<<i<<endl;
	});

	// we can make it auto type auto it=v.b.........
	// high order function mean function include other function  to do task
} 
