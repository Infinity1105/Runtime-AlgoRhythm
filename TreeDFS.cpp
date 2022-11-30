#include<bits/stdc++.h>
using namespace std;

class Node{    //Created structure of the node of the tree
public:
    int value;
    Node* left;Node* right;
    Node()   //default contructor of  the node class 
    {
        value=-1;
        left=nullptr;
        right=nullptr;
    }
    Node(int x) // Parameterized contructor of the node class
    {
        value=x;
        left=nullptr;
        right=nullptr;
    }
};



class Tree{

public:
    Node* root;
    Tree(){
        root=nullptr;
    }
    Node* create(){

        int x;
        cout<<"\nEnter the value of x or -1 to stop :";
        cin >> x;
        cout<<endl;
        if(x==-1){
            return NULL;
        }
        Node *p = new Node(x);
        cout<<"enter the left of the "<<x<<" :"<<endl;
        p->left=create();
        cout<<"enter the right of the "<<x<<" :"<<endl;
        p->right=create();
        return p;
    }

    void inorder(Node * p){  //inorder is  /*/left root right/*/
        if(p==NULL){
            return ;
        }
        inorder(p->left);
        cout<<p->value<<" ";
        inorder(p->right);
    }
    void preorder(Node *p) // preorder is  /*/root left  right/*/
    {
        if (p == NULL)
        {
            return;
        }
        cout << p->value << " ";
        preorder(p->left);
        preorder(p->right);
    }
    void postorder(Node *p) // postorder is  /*/left  right root/*/
    {
        if (p == NULL)
        {
            return;
        }
        postorder(p->left);
        postorder(p->right);
        cout << p->value << " ";
    }
};


int main(){
    Tree T;
    T.root=T.create();
    T.inorder(T.root);
     return 0 ;
}
