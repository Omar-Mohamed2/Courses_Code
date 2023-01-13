#include <iostream>
using namespace std;
 bool found (int array[], int x);
int main() 
{
	int x;  
	cin>>x;
	int array[5]={10,4,3,4,34};
	if(found(array,x))
	{
		cout<<"found";
	} 
	else 
	{
		cout<<"nf";
	}
}
	bool found (int array[], int x) 
	{ 
	 int i;
 	if(array[i]==x)
 	{
 		return true;
	 }  
   else 
   {
   	 return false;
   }
 }