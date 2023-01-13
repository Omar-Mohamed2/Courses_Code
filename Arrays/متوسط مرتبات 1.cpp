#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    int salary[3][5];
    int x,i;
    float avg ,sum;
    cout<<"please enter the emp salary in 3 parts"<<endl;
    for(int i=0;i<3;++i)
    {
    	for(int x=0;x<5;++x)
    	{
    		cin>>salary[i][x]; 
    			sum+=salary[i][x];
    	avg=sum/5;
		}  
		
		  cout<<"the averge  is"<<avg<<endl;	}}