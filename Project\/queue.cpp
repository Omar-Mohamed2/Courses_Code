#include <iostream>
using namespace std; 
class node
{ 
  public:
	int data;
	node*next;
	node():data(0),next(NULL)
	{
	}
}; 
class queue
{ 
  public:
	node*front;
	node*rere;
	queue():front(NULL),rere(NULL)
	{
	} 
	bool empty()
	{ 
	 if(front==NULL&&rere==NULL)
	 return true;
	 else
	 return false;
	} 
	void enqueue()
	{ 
		cout<<"please enetr the item u want to add"<<endl;
			int x;cin>>x; 
				node*newnode=new node();
			newnode->data=x;
		if(empty())
		{
			//cout<<"the queue is empty"<<endl; 
			newnode->next=NULL;
		rere=front=newnode;
		} 
		else 
		{
		rere->next=	newnode;
			rere=newnode;
		 } 
	} 
	void dequeue()
	{ 
	int value;
		if(front==rere)
		{ 
		value=front->data;
			delete front; 
			front=rere=NULL; 
		} 
		else
		{
			node*d=front;
			front=front->next; 
			value=d->data;
			delete d;
		} 
		cout<<"the deleted item="<<value<<endl;
		display();
	} 
	void display()
	{  
	  if(empty())
	  {
	  	cout<<"the queue is empty"<<endl;
	  } 
	  else
	  {
		node*s;
		s=front;
		while(s!=NULL)
		{
			cout<<"the queue element="<<s->data<<endl;
			s=s->next;
		}
	} 
} 
void count()
{ 
if(empty())
{
	cout<<"the queue is empty"<<endl;
} 
else
{
	int count=0;
	node*c=front;
	while(c!=NULL)
	{
		++count;
		c=c->next;
	} 
	cout<<"the number of queue elemnt ="<<count<<endl;
} 
 } 
 void search()
 {
 	int x;
 	cout<<"please eneter the item u want to search "<<endl; cin>>x; 
 	node*s=front;
 	while(s!=NULL)
 	{
 		if(s->data==x) 
 		{
 			cout<<"found"<<endl;
 			return;
		 } 
		 s=s->next;
	 }  
	 cout<<"not found"<<endl;
 }
};
int main()
{ 
   queue q1;
    for(int i=1;i<=5;++i)
	{
		q1.enqueue();
		} 
		q1.dequeue(); 
			q1.count();
		q1.search();
}