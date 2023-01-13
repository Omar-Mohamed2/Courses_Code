#include <iostream>
using namespace std;
int main()
{
	int number [2][3];
	int x;
	int y;
	for(int x=0;x<2;++x)
	for(int y=0;y<3;++y)
	{
		cin>>number[x][y];
		if(number[x][y]%2!=0)
		number[x][y]=10;
	} 
	for(int x=0;x<2;++x)
		for(int y=0;y<3;++y) 
		cout<<number[x][y]<<endl; 
	}

	

	