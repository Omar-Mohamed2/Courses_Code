#include <iostream>
using namespace std;
int main()
{
	int array[5]={3,5,2,1,4}; 
	int x;
	cout<<"the array before sort"<<endl;
	for(int i=0;i<5;++i)
	{
		cout<<array[i]; 
	
	}  
		cout<<"_______________"<<endl;
	cout<<"the array after sorting "<<endl;
	for(int i=0;i<5;i++)
	{
		if(array[i]<array[i+1])
		{
			x=array[i+1];
			array[i+1]=array[i];
			array[i]=x;
		} 
		cout<<array[i];
	}
}