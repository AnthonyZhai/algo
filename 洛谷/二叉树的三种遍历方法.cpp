#include <iostream>
#include <iomanip>
using namespace std;

//定义二叉树的树结点
typedef struct TreeNode{
	struct TreeNode *left;
	struct TreeNode *right;
	int data;
	TreeNode(int d){
		data = d;
		left = nullptr;
		right = nullptr;
	};
} BTNode;

//创建一棵二叉树，返回根节点
BTNode *createBTree(int *arr, size_t n)
{
	BTNode *root = new BTNode(arr[0]);
	for(size_t i=1; i<n; i++){
		BTNode *p = new BTNode(arr[i]);
		BTNode *c = root;
		BTNode *leaf;
		while(c){
			leaf = c;
			if(c->data < p->data)
				c = c->right;
			else
				c = c->left;
		}
		if(leaf->data < p->data)
			leaf->right = p;
		else
			leaf->left = p;
	}
	return root;
}
void Preorder(BTNode *root)
{
	if (root)
	{
		cout << setw(5) << root->data;
		Preorder(root->left);
		Preorder(root->right);
	}
}
void Inorder(BTNode *root)
{
	if (root)
	{
		Inorder(root->left);
		cout << setw(5) << root->data;
		Inorder(root->right);
	}
}
void Postorder(BTNode *root)
{
	if (root)
	{
		Postorder(root->left);
		Postorder(root->right);
		cout << setw(5) << root->data;
	}
}
int main()
{
	int arr[8] = {5, 2, 3, 7, 1, 6, 7, 4};
	BTNode *BTree = createBTree(arr, 8);
	cout<<"\n前序遍历二叉树"<<endl;
	Preorder(BTree);
	cout<<"\n中序遍历二叉树"<<endl;
	Inorder(BTree);
	cout<<"\n后序遍历二叉树"<<endl;
	Postorder(BTree);
}