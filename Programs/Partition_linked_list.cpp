#include <iostream>
using namespace std;  
class Node
{
public:
    int data;
    Node* next;
    Node (int dat)
    {
      this->data=dat;
      this->next=nullptr;
    }
}; 
Node* partition(Node** head, int k) 
{
    if(head==nullptr)return *head;
    Node node1(0),node2(0);
    Node* ptr1=&node1,*ptr2=&node2;
    Node* p=*head;
    while(p!=nullptr)
    {
        if(p->data >= k)
        {
            ptr2->next=p; 
            ptr2=ptr2->next;
        }
        else
        {
            ptr1->next=p; 
            ptr1=ptr1->next;
        }
        p=p->next;
    }
    ptr1->next=node2.next;
    ptr2->next=nullptr;
    return node1.next;
}

Node* head, *Head;
void add(int val)
{
  if(head==nullptr)
  {
    head=new Node(val);
    Head=head;
    // return head;
  }
  else{
    while(head->next!=nullptr)
    {
        head=head->next;
    }
    Node* a = new Node(val);
    head->next=a;
    head=head->next;
    }
}

 void show(Node* head)
 {
    while(head->next!=nullptr)
    {
      cerr<<head->data<<" ";
      head=head->next;
    }
}
int main()
{ 
    add(5);add(6);add(1);add(2);add(3);add(4);
    int x=3;
    head=partition(&Head,x);
    show(head);
    return 0;
}
