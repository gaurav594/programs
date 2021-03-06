#include <bits/stdc++.h>
using namespace std;
#define f_in(st) freopen(st,"r",stdin);
#define f_out(st) freopen(st,"w",stdout);
int maxlevel=0;
struct Node{
	int data;
	bool visited;
	struct Node *left,*right;
};
struct Node *newnode(int value)
{
	struct Node *t=(struct Node*)malloc(sizeof(struct Node));
	t->data=value;
	t->left=NULL;
	t->right=NULL;
	t->visited=false;
	return t;
}
void printRightView(struct Node *root,int level)
{
	if(root==NULL)
		return;
	if(maxlevel<level)
	{
		cout<<root->data<<endl;
		maxlevel=level;
		root->visited=true;
	}
	printRightView(root->right,level+1);
	printRightView(root->left,level+1);
}
void printLeftView(struct Node *root,int level)
{
	if(root==NULL)
		return;
	if(maxlevel<level)
	{
		if(root->visited==false)
			cout<<root->data<<endl;
		maxlevel=level;
		root->visited=true;
	}
	printLeftView(root->left,level+1);
	printLeftView(root->right,level+1);
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		struct Node *root=newnode(a[1]);
		vector <struct Node* > V(100000);
        V[1]=(root);
        for(int i=1;i<=n;i++)
        {
        	if(a[i])
        	{
        		struct Node *parent=V[i];
            	//left child
        		if(2*i<=n && a[2*i]){
        			parent->left=newnode(a[2*i]);
                    V[2*i]=parent->left;
                }
        		//right child
        		if((2*i+1)<=n && a[2*i+1]){
        			parent->right=newnode(a[2*i+1]);
                    V[2*i+1]=parent->right;
                }
            }
        }
        //printnode(root);
        maxlevel=0;
        printRightView(root,1);
        maxlevel=0;
        printLeftView(root,1);
        cout<<endl;
    }
	return 0;
}