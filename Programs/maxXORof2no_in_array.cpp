
#include<bits/stdc++.h>
using namespace std;

class trieNode
{
    public:
    trieNode* left;
    trieNode* right;
};

void insert(int n,trieNode* head)
{
    trieNode* curr = head;
   for(int j=31;j>=0;j--)
   {
       int b=(n>>j)&1;
       if(b==0)
       {
           if(!curr->left)
               curr->left = new trieNode();
            curr = curr->left;
       }
       else
       {
           if(!curr->right)
            curr->right = new trieNode();
           curr = curr->right;
       }
    }

}

int findMaxXor(trieNode* head,int* arr,int n)
{
    int mxx_xor=INT_MIN,i,j;
    
    for(i=0;i<n;i++)
    {
        trieNode *curr=head;
        int curr_xor=0;
        for(j=31;j>=0;j--)
        {
            int b=(arr[i]>>j)&1;
            if(b==0)
            {
                if(curr->right)
                {
                    curr_xor+=pow(2,j);
                    curr=curr->right;
                }
                else
                {
                    curr=curr->left;
                }
                
            }
            else
            {
                if(curr->left)
                {
                    curr_xor+=pow(2,j);
                    curr=curr->left;
                }
                else
                {
                    curr=curr->right;
                }
                
            }
            
        }
        mxx_xor=max(mxx_xor,curr_xor);
    }
return mxx_xor;   
}
int main()
{
 int arr[6]={8,1,2,15,10,5};
 trieNode* head = new trieNode();
 for(int i=0;i<6;i++)
 {
     insert(arr[i],head);
 }
 cout<<"maxx xor pair::"<<findMaxXor(head,arr,6);
return 0;
}
