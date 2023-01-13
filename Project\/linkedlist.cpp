#include <iostream>
using namespace std; 
class node{
	public:
		int data;
		node*next;
		node():data(0),next(NULL) 
		{
			
		}
} ;
class linkedlist
{
	public:
		node *heap;
		linkedlist():heap(NULL) 
		{
		} 
		bool empty()
		{
			if(heap==NULL)
			return true;
			else
			return false;
		} 
		void insertfirst()
		{
			 node*newnode=new node();
			cout<<"please enter the value u want to add"<<endl;
			int x;cin>>x; 
			newnode->data=x;
			if(empty())
			{
				newnode->next=NULL;
				heap=newnode;
			} 
			else
			{
				newnode->next=heap;
				heap=newnode;
			}
		}  
		void insertback()
		{ 
		    node *b;
		    b=heap;
		      while(b->next!=NULL)
		      { 
		      b=b->next;
		  }
			node*newnode=new node();
			cout<<"please enetr the item u want to add at the end"<<endl;
			int c;cin>>c;
			newnode->data=c;
			newnode->next=NULL;
			b->next=newnode;	
	} 
	void insertat()
	{
		node*newnode=new node();
		cout<<"please enter the item u want to add at the selected position"<<endl;
		int a;cin>>a;
		cout<<"please enetr the location u want to add item in"<<endl;
		int location ;cin>>location; 
		node*l;
		l=heap;
		while(l!=NULL&&l->next->data!=location)
		{
			l=l->next;
		} 
		newnode->data=a;
		newnode->next=l->next;
		l->next=newnode->next;
	}
		void display()
		{ 
		if(empty()) 
		{
						cout<<"the linkedlist is empty"<<endl;
		}
			node*d;
			d=heap;
			while(d!=NULL)
			{
				cout<<"the linkedlist item="<<d->data<<endl;
				d=d->next;
			}  
		} 
		void count()
		{
			node*c;
			c=heap;
			int count=0;
			while(c!=NULL)
			{
				count++;
				c=c->next;
			} 
			cout<<"the number of item at linkedlist="<<count<<endl;
			
		} 
		void delete_()
		{
			cout<<"please enter the number u want to delete"<<endl;
			int x;cin>>x; 
			int value;
		      if(empty())
		      {
		      	cout<<"the linkedlist is empty"<<endl;
			  }  
			  node*d=heap;
			    if(heap->data==x)
			    { 
			    	heap=heap->next; 
			    	value-=d->data;
			    	delete d;
				} 
				else
				{ 
				   node*pre=NULL;
					d=heap;
					while(d->data!=x)
					{ 
						pre=d;
						d=d->next; 
						
					} 
					pre->next=d->next;
					value=d->data;  
					delete d; 
					
				}
		display();  
		count();
		cout<<"the number deleted="<<value<<endl;
			} 
			void search()
			{
				cout<<"please enetr the item u want to search"<<endl; int a;cin>>a;
				node*s=heap;
				while(s!=NULL)
				{
					if(s->data==a)
					{ 
				
							cout<<"found"<<endl;
					        return ;
						 } 
						 s=s->next;
				} 
				 
			cout<<"not found"<<endl;
			 } 
			 void clear()
			 {
			 	if(!empty()) 
			 	delete_();
			 }
		
};
int main()
{
      linkedlist l1;  
      
     for(int i=1;i<=3;++i)
      {
      	l1.insertfirst(); 
	  l1.display();	
	  }  
	  for(int i=1;i<=3;++i)
      {
      	l1.insertback(); 
	  l1.display();	
	  }    
	  l1.insertat(); 
	  l1.display();
	  l1.search();
	  l1.delete_();
	  l1.clear();
	  l1.display();
	  
}