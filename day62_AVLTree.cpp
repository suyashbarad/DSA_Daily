#include<iostream>
#include <algorithm>
using namespace std;

class node{
    public:
    string key, meaning;
    node *left, *right;
    int height;

    node(string k, string m){
        key = k;
        meaning  = m;
        left = right = NULL;
        height = 1;
    }
};

class avl{
    public:
        node *root;
        avl(){
            root = NULL;
        }
        int height(node *n){
            if(n == NULL) return 0;
            return n->height;
        }
        int balanceFactor(node *n){
            return height(n->left) - height(n->right);
        }
        node* RotateRight(node *y){
            node *x = y->left;
            node *t2 = x->right;

            x->right = y;
            y->left = t2;

            y->height = max(height(y->left), height(y->right)) + 1;
            x->height = max(height(x->left), height(x->right)) + 1;
            return x;
        }
        node* RotateLeft(node *x){
            node *y = x->right;
            node *t2 = y->left;

            y->left = x;
            x->right = t2;

            x->height = max(height(x->left), height(x->right)) + 1;
            y->height = max(height(y->left), height(y->right)) + 1;
            return y;
        }
        node* insert(node* n, string key, string meaning){
            if(n == NULL) return new node(key, meaning);

            if(key < n->key){
                n->left = insert(n->left, key, meaning);
            }
            else if(key > n->key){
                n->right = insert(n->right, key, meaning);
            }
            else{
                cout<<"keyword already exists. Updating Meaning...";
                n->meaning = meaning;
                return n;      
            }
            n->height = max(height(n->left), height(n->right))+1;
            int bf = balanceFactor(n);

            // LL
            if(bf > 1 && key < n->left->key)
                return RotateRight(n);

            // RR
            if(bf < -1 && key > n->right->key)
                return RotateLeft(n);

            // LR
            if(bf > 1 && key > n->left->key){
                n->left = RotateLeft(n->left);
                return RotateRight(n);
            }

            // RL
            if(bf < -1 && key < n->right->key){
                n->right = RotateRight(n->right);
                return RotateLeft(n);
            }

            return n;
        }
        void inorder(node *root){
            if(root != NULL){
                inorder(root->left);
                cout<<root->key<<" : "<<root->meaning<<endl;
                inorder(root->right); 
            }
        }
};
int main(){
    avl obj;
    int ch;
    string key, meaning;

    while(1){
    cout<<"1.Insert keyword\n2.Display Keyword\n3.Exit\nEnter your chioice: ";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"Enter key: ";
            cin>>key;
            cout<<"Enter Meaning: ";
            cin>>meaning;
            obj.root = obj.insert(obj.root, key, meaning);
            break;

        case 2:
            cout<<"Dictionary: \n";
            obj.inorder(obj.root);
            break;
        case 3:
            return 0;
    }
    }
}