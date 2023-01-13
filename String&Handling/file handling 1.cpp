#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int x,y,z;
	ifstream in("file number handling.txt");
	in>>x>>y>>z;
	in.close();
	ofstream out("file sum handling.txt");
	out<<x+y+z<<endl;
	out.close(); 
	cout<<x+y+z<<endl;
	system("pause");
}