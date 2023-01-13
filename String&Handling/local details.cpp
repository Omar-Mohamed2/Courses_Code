#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream out("file string catch.txt",ios::trunc);
	out<<"salma"<<endl;
	out.close();
	system("pause");
}