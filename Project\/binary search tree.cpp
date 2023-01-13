#include <iostream>
using namespace std; 
class node{ 
public:
	int data;
	node*left;
	node*right;
	node(int value)
	{
		data=value;
		left=right=NULL;
	}
};
class bst{ 
public:
	node*root;
	bst()
	{
		root=NULL;
	}  
	node*insert(node*r,int item)
	{
	
		if(r==NULL)
		{ 
			node*newnode=new node(item);
			r=newnode;
		} 
		else if(item<r->data) 
		r->left=insert(r->left,item);
		else 
		r->right=insert(r->right,item);
		
		return r;
	 } 
	 void insert(int item)
	 {
	 	root=insert(root,item);
	  } 
	 void preorder(node*r)
	 {
	 	if(r==NULL) 
	 {
	 	return ;
	 }
	 	 
	 	else 
	 	{
	 	
		 	cout<<r->data<<endl;
		 	preorder(r->left);
		 	preorder(r->right);	  
		 } 
	}
	   void inorder(node*r)
	 {
	 	if(r==NULL) 
	 	{
	 		return ;
		 }
	 	 
	 	else 
	 	{
		 	inorder(r->left);
		 	cout<<r->data<<endl;
		 	inorder(r->right);	
	  }  
	  
}
	    void pastorder(node*r)
	 {
	 	if(r==NULL) 
	 	{
	 		return ;	
		 }
	  
	 	else 
	 	{
		 	pastorder(r->left);
		 		pastorder(r->right);
		 	cout<<r->data<<endl;
	  } 
} 
node* search(node*r,int key)
{
	if(r==NULL)  
	return NULL;
		else if(r->data==key)
		return r;
		else if (key>r->data)
		search(r->right,key);
		else 
		search(r->left,key);
} 
void resultofsearch()
{ 
	cout<<"please enetr the key u want to search for"<<endl;
	 int k;cin>>k;
	node*result=search(root,k);
	if(result==NULL)
	cout<<"un found"<<endl;
	else
	cout<<"found"<<endl;
} 
node* findmin(node*r)
{
	if(r==NULL)
	return r;
	else if(r->left==NULL)
		return r;
	return findmin(r->left); 
} 
node* findmax(node*r)
{
	if(r==NULL)
		return r;
		else if(r->right==NULL)
		return r;
	else 
	return findmax(r->right); 
}  
node*deleteitem(node*r,int key) 
{
	if(r==NULL) 
	return NULL;
	else if(key<r->data)
r->left=deleteitem(r->left,key); 
else if(key>r->data)
r->right=deleteitem(r->right,key); 
else
{
	if(r->left==NULL&&r->right==NULL)
	{
		r=NULL;
	} 
	else if(r->left!=NULL&&r->right==NULL)
	{
		r->data=r->left->data;
		delete r->left;
		r->left=NULL;
	}  
	else if(r->left==NULL&&r->right!=NULL)
	{
		r->data=r->right->data;
		delete r->right;
		r->right=NULL;
	}
	else
	{
		node*max=findmax(r->left);
		r->data=max->data;
		r->left=deleteitem (r->left,max->data);
	} 
} 
return r;
} 
void leaf(node*r)
{ 
if(r!=NULL) 
{

	if(r->left==NULL&&r->right==NULL) 
	{
	    cout<<"the leaf node ="<<r->data<<endl;
	} 
	else
	{ 
	
		leaf(r->right);
			leaf(r->left); 
	}	
}
} 
};
int main()
{
	bst b1;
	b1.insert(45);
	b1.insert(15);
	b1.insert(70);
	b1.insert(90);
	b1.insert(10);
	b1.insert(55);
	b1.insert(12);
	b1.insert(20);
	b1.insert(50); 
	cout<<"the bst content"<<endl; 
	cout<<"the preorder display \n"<<endl; 
	b1.preorder(b1.root); 
	cout<<"__________________________________________________"<<endl; 
	cout<<"the inorder display \n"<<endl; 
	b1.inorder(b1.root);
	cout<<"_____________________________________________________"<<endl;
	cout<<"the postorder display \n"<<endl; 
	b1.pastorder(b1.root); 
	cout<<" \n"<<endl;  
	b1.resultofsearch();  
	cout<<"__________________________________________"<<endl;
	node*min=b1.findmin(b1.root);
	if(min==NULL)
	{
			cout<<"not found";
	} 
	else
	{
			cout<<"the mainimum value int tree = \n "<<min->data<<endl;
	}  
		node*max=b1.findmax(b1.root);
	if(max==NULL)
	{
			cout<<"not found";
	} 
	else
	{
			cout<<"the maximum value int tree = \n "<<max->data<<endl;
	} 
	node*d=b1.deleteitem(b1.root,90);
       cout<<"the tree after delete item ="<<endl; 
	cout<<"________________________________________"<<endl;
	b1.preorder(d); 
b1.leaf(b1.root);
}