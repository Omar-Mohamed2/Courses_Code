#include <iostream>
using namespace std; 
class array
{ 
   private:
   	float **arrays;
   	int d1;
   	int d2; 
   	int x,y;
   	 char choice;
   	   public:
   	   	array(int i , int j );
   	   	~array(); 
   	   	enter();
   	   	arrayszero();
   	   	 void print();
}; 
  array::array(int i, int j)
  {
  	d1=i;
  	d2=j;
  	arrays=new float*[d1];
  	for(int y=0;y<d2;++y)
  	{
  		arrays[y]= new float [d2];
	  }
  } 
  array::~array()
  {
  	delete []arrays;
  } 
   array::enter()
   {
   	 for(int x=0;x<d1;++x)
   	 {
   	 	for(int y=0;y<d2;++y)
   	 	{ 
   	 	 cin>>arrays[x][y];
			}
		} 
   } 
   array::arrayszero()
   {
   	 if(d1==d2)
   	 {
   	 	cout<<"pleas select choice "<<endl;
   	 	cin>>choice;
   	 	if (choice=='s')
   	 	{
   	 		for(int x=0;x<d1;++x)
   	 		{
   	 			arrays[d1][d2]==0;
				}
			}
		} 
		 cout<<arrays[d1][d2]<<endl;
   }
	    void array::print()
	    {
	    	for(int x=0;x<d1;++x)
	    	{
	    		for(int y=0;y<d2;++y)
	    		{
	    			cout<<arrays[x][y]<<endl;
	    		}
	    	} 
	    }
int main()
{ 
  int x;
  int y;
  cin>>x;
  cin>>y;
  array a1(x,y);
  a1.enter(); 
  a1.print();
  a1.arrayszero();
}
	
