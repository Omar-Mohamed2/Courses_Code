#include <iostream>
using namespace std;
int main()
{
	int array[3]={2,5,7};
	int *p;
	p=&array[0];
	int i;
for(int i=0;i<3;i++) 
{
	cout<<*(p+1)<<endl; 
	cout<<array+i<<endl; 
 }}