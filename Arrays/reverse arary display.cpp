#include <iostream>
using namespace std; 
void sum(int [],int ,int);
int main()
{
	const int arraysize=10;
	int a[arraysize]={1,2,3,4,5,6,7,8,9,10};
	cout<<"the value is"<<endl;
	sum(a,0,arraysize);
} 
void sum(int b [],int current ,int size)
{
	if(current<size) 
	{
		sum(b,current+1,size);
		cout<<b[current]<<""<<endl;
	}
}