#include <iostream>
using namespace std;
int main()
{
	int s [7]={1,2,3,4,5,6,7};
	int low=0;
	int high=6;
	int mid;
	int x=7;
	while (low<=high)
	{ 
		mid=(low+high)/2;
		cout<<mid;
		if(s[mid]==x)
		{ 
		 return mid;
			} 
	  if(s[mid]<x)
			{
				low=mid+1;  
				return mid;
			}  
			 else 
			{
				high=mid-1; 
				return mid;
			}  
			
	 
}}