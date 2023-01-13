#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char word[]={"omar"};
	cout<<word<<endl;
	char name[100];
	cin.get(name,99);
	cout<<name<<endl;
	strcpy(word,name);
	cout<<word<<endl<<name<<endl; 
	char array[]={"omar and"};
	char array2[]={"menna"};
	strcat(array,array2);
	cout<<array<<endl;; 
	char x;
	x=getchar();
	putchar(x);
}