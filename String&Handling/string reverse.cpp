#include <iostream>
using namespace std;
int main()
{
	string s1;
	getline(cin,s1); 
	cout<<s1.length();
	for(int i=s1.length();i>=0;--i)
	{
		cout<<s1[i];
	}
}