#include <iostream> 
#include <cmath>
using namespace std;
int main() 
{
	 int employee[3][5] , size[4] , i , j , sum=0 ;
 size [3]=0;
 cout << "Please Enter all employees salary" << endl;

 for (j=0 ; j < 3 ; j ++ )
 { cout << " Enter the department " << j+1 << endl;
 for (i=0 ; i < 5 ; i++ )
 {
 cout << " Employee number " << i+1 << endl;
 cin >> employee[ i ] [ j ] ;
 sum= employee[ i ] [ j ] + sum ;
 }
 size[i] = sum/5 ;
 cout << " The avreg is" << size[i] << endl;
 cout <<"________________________________";
 size[3] = size[3] + size [i];
 sum=0;
 }
 cout << " The avrege of all salary of employee is: " <<
size[3] << endl;
}