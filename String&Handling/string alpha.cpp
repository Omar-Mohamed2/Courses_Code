  #include <iostream>
using namespace std;
int main() 
{
	int size=3;
	string s [size];
	cout<<"please enter array elements"<<endl;
	for(int i=0;i<size;++i)
	{
		getline(cin,s[i]);
	}   
	for(int i=0;i<size;++i) 
	{
	for(int j=i+1;j<size;++j)
	{
		if(s[j]>s[i])
		swap(s[i],s[j]);
	}} 
	for(int i=0;i<size;++i) 
	{
		cout<<s[i]<<endl;
	}
	
}