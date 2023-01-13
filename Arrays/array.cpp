  #include <iostream>
  using namespace std;
  int main()
  {
  	int mark[10];
  	float sum;
  	float average;
  	cout<<"pleas enter student mark"<<endl;
  	for(int i=0;i<=9;++i)
  	{
  		cin>>mark[i];
  		sum+=mark[i];
		  	  } 
		  	  cout<<"the average is" <<sum/10<<endl;
  }