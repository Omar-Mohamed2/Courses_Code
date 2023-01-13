#include <iostream> 
using namespace std;
class array{
	public:
		int size;
		int length;
		int*arr;
		array():size(0),length(0),arr(NULL)
		{
		} 
		void setsize()
		{
			cout<<"please enter the array size"<<endl; int x;cin>>x;
			if(x>0) 
			{
			size=x;
				arr=new int[size];
		}
			else 
			cout<<"the array size must be over than 0"<<endl;
			return;
		} 
		void setlength()
		{
			cout<<"please enter the array length"<<endl; int x;cin>>x;
			if(x<=size)
			{
				length=x;
			} 
			else
			{
				cout<<"the length over size"<<endl;
			       return;
			}
		} 
		void fillarray()
		{ 
		   for(int i=0;i<length;++i)
		   {
		   	cout<<"please enetr the element "<<i+1<<endl;
		   	cin>>arr[i];
		   }
		} 
		void insertback()
		{
			cout<<"please enetr the item u want to insert at the end of array"<<endl; int x;cin>>x;
			if(length<size)
			{
				arr[length]=x;
				++length;
				display();
			} 
			return;
		 } 
		 void insertat()
		 {
		 	cout<<"please enetr the item u want to insert"<<endl; int x;cin>>x;
		 	cout<<"please enetr the position u want to insert at"<<endl; int p;cin>>p; 
		 	if(p<size&&p>0)
		 	{
		 		for(int i=length;i>p;--i) 
		 		{
		 			arr[i]=arr[i-1];
				 }
                arr[p]=x;
                ++length; 
                display();
			 } 
			 return;
		  } 
		  void delete_()
		  {
		  	cout<<"please enetr the item u want to delete"<<endl; int d;cin>>d;  
		  	if(d>0&&d<size)
		  	{
		  		for(int i=d;i<length;++i)
		  		{
		  			arr[i]=arr[i+1]; 
				  } 
				  --length; 
				  display();
			  }
		  	   return;
		   } 
		void display()
		{
			for(int i=0;i<length;++i) 
			{
				cout<<"the array element no"<<i+1<<"="<<arr[i]<<endl;
			} 
			cout<<"the array size="<<size<<endl;
			cout<<"the array length="<<length<<endl;
		} 
		void search()
		{ 
		cout<<"please enetr the item u want to search for "<<endl; int s;cin>>s;
			for(int i=0;i<length;++i) 
			{
				if(arr[i]==s)
				{
					cout<<"found at position "<<i+1<<endl;
					return;
				} 
			} 
			cout<<"not found"<<endl;
		}  
		void count()
		{
			int count=0;
			for(int i=0;i<length;++i) 
			{
				++count;
			} 
			cout<<"the array contain "<<endl<<count<<" "<<"element"<<endl;
		} 
		void setnewsize()
		{
			int newsize; cout<<"please enetr the new size of array"<<endl; cin>>newsize;
			if(newsize>size)
			{ 
			   int*old=arr;
				size=newsize; 
				arr=new int [newsize];
				for(int i=0;i<length;++i)
				{
					arr[i]=old[i];
				} 
				delete old;
			} 
			return;
		} 
		void merge(array a)
		{
			int newsize=size+a.size; 
			arr=new int[newsize];
			int*old=arr;
			int i;
			for( i=0;i<length;++i)
			{
				arr[i]=old[i];
			} 
			delete []old; 
			int j;
			j=i; 
			for(int i=0;i<a.length;++i)
  {
  	arr[j++]=a.arr[i];
  	++length;
  } 
  display(); 
}
		
};
int main()
{ 
cout<<"set array 1"<<endl;
cout<<"______________________________________"<<endl;
	array a1; 
	a1.setsize();
	cout<<"________________________________________"<<endl; 
	a1.setlength();
	cout<<"________________________________________"<<endl;
	a1.fillarray();
	cout<<"________________________________________"<<endl;
	a1.insertback();
	cout<<"________________________________________"<<endl;
	a1.insertat();
	cout<<"________________________________________"<<endl;
	a1.setnewsize();
	cout<<"________________________________________"<<endl;
	a1.delete_();
	cout<<"________________________________________"<<endl;
	cout<<"set the another array"<<endl;
	cout<<"________________________________________"<<endl; 
		array a2; 
	a2.setsize();
	cout<<"________________________________________"<<endl; 
	a2.setlength();
	cout<<"________________________________________"<<endl;
	a2.fillarray();
	cout<<"________________________________________"<<endl;
	a2.insertback();
	cout<<"________________________________________"<<endl;
	a2.insertat();
	cout<<"________________________________________"<<endl;
	a2.setnewsize();
	cout<<"________________________________________"<<endl;
	a2.delete_();
	cout<<"________________________________________"<<endl;
	cout<<"the tow array after merge ="<<endl;
	cout<<"___________________________________________________________________________"<<endl;
	a1.merge(a2);
}