#include<iostream>
using namespace std;

struct node

{
	private:
		
	int data;
	node*left;
	node*right;
	
	public:
		BST(node*root)
		{
			while(root!=NULL)
			{
				if(root->data==key)
				return root;
				else if(root->data<key)
				root=root->right;
				else
				root=root->left;
				
			}
			return root;
		}
		
		void findLeafNodes(Node* root){
			
			if (root == NULL)
			{
				 return;
			}
			
			

  
          if(root->left==NULL&&root->right==NULL) {
           cout << root->data << " ";
		}
		
		findLeafNodes(root->left);
          findLeafNodes(root->right);
	 	
	       	
		
		display()
		{
			cout<<data<<endl;
		}
		
		
	
};


int main()
{
	struct node*root=new node(1);
	root->leftnode=new node(2);
	root->rightnode=new node(3);
	root->left->left=new node(4);
	
	root->right->display();
	root->left->display();
	root->left->right->display();
	root->right->left->display();
	root->left=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	root->left->right->display();
	
	findLeafNodes(root);

  return 0;
	
}
