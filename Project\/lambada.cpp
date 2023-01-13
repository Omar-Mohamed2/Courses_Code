#include <iostream>
#include <vector> 
#include <algorithm> 
#include <functional>
using namespace std;
int main()
{    
    int a,b;
        auto x=[](int x,int y){ 
        return x+y;
		}  ;
		function<int(int ,int)>z=[](int x,int y){
			return x*y;
		}  ;
		cout<<z(3,4)<<endl;
			int z2=[](int x,int y){
			return x/y;
		}  (16,8);
			cout<<z2;
}
