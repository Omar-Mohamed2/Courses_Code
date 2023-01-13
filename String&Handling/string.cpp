#include <iostream>
#include <cstring> 
#include <string>
using namespace std;
int main()
{
	string s1="omar";
	string s2="mohamed";
	string s3=s1+s2;
	s1.swap(s3);
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl; 
	string s4="omar ibrahim"; 
	cout<<s4.length()<<endl;
	cout<<s4<<endl;
	cout<<s4.find("ibrahim")<<endl; 
	int c=s4.size();
	cout<<c<<endl; 
	string s5(s4,0,4);
	cout<<s5<<endl;  
	cout<<s5.capacity()<<endl; 
	s5.append("mohamed");
	cout<<s5<<endl;	
	s5.insert(11,"abdelhalim");
	cout<<s5<<endl;  
	string s6=("the java programming language");
	int x=s6.find("java");
	cout<<s6<<endl<<x<<endl;
	string s7(s6,x,x);
	cout<<s7<<endl;
	s6.replace(x,4,"c++");
	cout<<s6<<endl; 
	string s8=("the paython is programming language");
	   int u=s8.find("the");
	   s8.erase(u,11); 
	   s8.insert(u,s6);
	   cout<<s8<<endl;
}