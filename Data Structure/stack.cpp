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
class stack
{
	public:
		node*top;
		stack():top(NULL)
		{
		} 
		bool empty()
		{
			if(top==NULL)
			return true;
			else
			return false;
		} 
		void push()
		{
			if(empty())
			{
				cout<<"the stack is empty"<<endl;
					node*newnode=new node();
				cout<<"please enter the item u want to add"<<endl;
				int x;cin>>x;
				newnode->data=x;
				newnode->next=NULL;
				top=newnode;
			} 
			else
			{
			          	node*newnode=new node();
				cout<<"please enter the item u want to add"<<endl;
				int x;cin>>x;
				newnode->data=x;
				newnode->next=top;
				top=newnode;
			}
		}  
		void pop()
		{
			if(empty())
			{
				cout<<"the stack is empty"<<endl;
			} 
			else
			{
				node*d=top;
				top=top->next;
				delete d;
			}
		} 
		void peek()
		{
		if(empty()) 
		{
			cout<<"the stack empty"<<endl;
		} 
		else
		{
			cout<<"the top element is "<<top->data<<endl;
		}
		}
		void display()
		{
			node*d=top;
			while(d!=NULL)
			{
				cout<<"the stack element="<<d->data<<endl;
				d=d->next;
			}
		} 
		void count()
		{
			node*c=top; 
			int count=0;
			while(c!=NULL)
			{
				++count;
				c=c->next;
			} 
			cout<<"the number of stack element="<<count<<endl;
		} 
		void search()
		{
			node*s=top; 
			cout<<"please enter the item u want to search"<<endl; int x;cin>>x;
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
				return;
		}
};
int main()
{
	stack s1;
   for(int i=1;i<=3;++i)
   {
   	s1.push();
   } 
   s1.display(); 
   s1.peek();
   s1.search(); 
   s1.pop(); 
   s1.display();
   s1.count();
}