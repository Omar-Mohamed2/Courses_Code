#include <iostream> 
#include <vector> 
#include <deque> 
#include<algorithm>
using namespace std;
int main()
{
	vector <double>v(5); 
	cout<<"please enter the elements \n"<<endl;
	for(int i=0;i<v.size();++i) 
	{
		cin>>v[i];
	}   
	for(int i:v)
	{
		cout<<"the elements is"<<i<<endl;    //important
	} 
	cout<<"\n"<<endl; 
		cout<<"the vector v size="<<v.size()<<endl;
		cout<<"\n"<<endl; 
		cout<<"the vector v capacitity="<<v.capacity()<<endl; 
		cout<<"\n"<<endl;
	vector<int>x={3,2,3,1,55}; 
	vector<int> v1(5,6);
      	swap(x,v1);
	cout<<"the element after swap=\n"<<endl;
	for(int i:v1)
	{
		cout<<"the elements of vector v1 is"<<i<<endl; 
		cout<<"\n"<<endl;   //important
	} 
	for(int i:x)
	{
		cout<<"the elements of vector x is"<<i<<endl;    //important 
		cout<<"\n"<<endl;
	}  
	cout<<"\n"<<endl;
cout<<	v.empty()<<endl;                             //check if empty or no
	cout<<"the first element of vector x="<<x.front()<<endl; 
	cout<<"\n"<<endl;
	cout<<"the last element of vector v1="<<v1.back()<<endl;
	cout<<"\n"<<endl; 
	cout<<*x.begin()<<endl; 
	cout<<"\n"<<endl;
	cout<<*(v.end()-1)<<endl;                       // return the value of last element ==back function
	cout<<"\n"<<endl;  
	v.push_back(100); 
	v.insert((v.end()-1),200);    //insert at specific position indexx***
	v.emplace_back(10000);                                    //== push function but faster
	 for(int i:v)
	{
		cout<<"the elements of vector v after add is"<<i<<endl;    //important
	} 
		cout<<"\n"<<endl; 
		cout<<"the vector v size="<<v.size()<<endl;
		cout<<"\n"<<endl; 
		cout<<"the vector v capacitity="<<v.capacity()<<endl; 
			cout<<"\n"<<endl;  
			v.pop_back();
				cout<<"\n"<<endl; 
				cout<<"the vector v after poping="<<endl;
					cout<<"\n"<<endl;  
					 for(int i:v)
	{
		cout<<"the elements of vector v after poping is"<<i<<endl;    //important
	} 
	cout<<"\n"<<endl;
     // v.resize(); //new size vector 
	   v.shrink_to_fit();          //updata the capacitiy
		cout<<"the vector v capacitity after poping="<<v.capacity()<<endl; 
			cout<<"\n"<<endl;   
			cout<<"the first item using rend function"<<*(v.rend()-1)<<endl;
			cout<<"\n"<<endl;
			cout<<"the last item using rbegin function"<<*(v.rbegin())<<endl; 
				cout<<"\n"<<endl;
			cout<<"the value of index 5="<<v.at(5)<<endl; 
				cout<<"\n"<<endl;
				cout<<"the maximum element ="<<*max_element(v.begin(),v.end()) <<endl;
					cout<<"the minimum element ="<<*min_element(v.begin(),v.end())<<endl; ;   //imprtant ***
					cout<<"\n"<<endl;
					sort(v.begin(),v.end());
					cout<<"the array after sorting"<<endl;
						cout<<"\n"<<endl;
										 for(int i:v)
	{ 
	
		cout<<"the elements of vector v after sorting is"<<i<<endl;    //important
	}  
	cout<<"\n"<<endl;
	vector <int>xx={3,3,44};
	xx.clear(); // empty the vector
											 for(int i:xx)
	{ 
	
		cout<<i<<endl;    //important
	} 
	deque<int>zz={1,2,33};
												 for(int i:zz)
	{ 
	
		cout<<"the deque element="<<i<<endl;    //important
	} 
	for_each(zz.begin(),zz.end(),[](int n){
		if(n>30)
		cout<<"the "<<n<<"is large number in deque"<<endl;
	}); 
	zz.emplace_front(100);
	cout<<"the deque after add="<<endl; 
													 for(int i:zz)
	{ 
	
		cout<<"the deque element="<<i<<endl;    //important
	}	
}  