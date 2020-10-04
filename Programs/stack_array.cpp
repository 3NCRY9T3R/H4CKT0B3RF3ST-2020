#include<iostream>
using namespace std;
int stack[10],top = -1;
void push(int);
void pop();
int peek();
void display();
int main(){
    int choise, a;
    cout<<"1- Push in stack"<<endl;
    cout<<"2- Pop in stack"<<endl;
    cout<<"3- peek in stack"<<endl;
    cout<<"4- Display all the elements"<<endl;
    cout<<"5- Exit"<<endl;
    do{
        cout<<"enter your choise: ";
        cin>>choise;
        switch(choise){
            case 1 :{
                cout<<"Enter the value: ";
                cin>>a;
                push(a);
                break;
            }
            case 2 :{
                pop();
                break;
            }
            case 3: {
                int b= peek();
                if(b == -1){
                    cout<<"stack is empty"<<endl;
                }
                else{
                cout<<"The value at the top is: "<<b<<endl;
                }
                break;      
            }
            case 4: {
                display();
                break;
            }
        }
    } while(choise!=5);
    return 0;
}
void push(int a){
    if(top == 9){
        cout<<"Overflow"<<endl;
    }
    else{
        top+=1;
        stack[top] = a;
    }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The element popped  is "<< stack[top] <<endl;
      top--;
   }
}
int peek(){
    if(top == -1){
        return -1;
    }
    else{
        return (stack[top]);
    }
} 
void display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        for(int i = top;i > -1;i--){
            cout<<stack[i]<<" ";
            cout<<endl;
        }
    }
}     