#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node * binary_tree(int dis,map<int,vector<int>>&m){
    int d;cin>>d;
    if(d==-1){
        return NULL;
    }
    node* tree=new node(d);
    m[dis].push_back(d);
    tree->left=binary_tree(dis-1,m);
    tree->right=binary_tree(dis+1,m);
    return tree;
}
void print(node *t){
    if(t==NULL){
        return;
    }
    cout<<(t->data)<<" ";
    print(t->left);
    print(t->right);
}
int main() {
    int dis=0;
    map<int,vector<int>>m;
    node *t=binary_tree(dis,m);
    print(t);
    cout<<endl;
    for(auto x:m){
        cout<<x.first<<" -> ";
        for(auto y:x.second){
            cout<<y<<" ";
        }
        cout<<endl;
    }
   return 0;
}
