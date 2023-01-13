#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
int main()
{      
char x;
	    ofstream out("file string result.txt"); 
	    	  ifstream in("file string catch.txt");
	  while(!in.eof())
	  {
	  	in.get(x);
	  	cout<<x;
	  }   
	  out.close();
	  system("pause");
}
