#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char password[]="omar";
	char pass [4];
	int sure;
	for(int i=0;i<4;++i)
	{
		pass[i]=getch();
		putchar('*'); 
	}  
	for(int i=0;i<4;++i)
	{
		if(pass[i]==password[i]) 
		sure++;
	
	}  
	if(sure==4)
	cout<<"correct"<<endl;
	else 
	{
		cout<<"error"<<endl;
	}
	
	
	
}