#include<bits/stdc++.h>
using namespace std;

bool checkstr(string x){
    stack<char> s;
    char b;
    for(int i=0;i<x.length();i++){
        if(x[i]=='{' || x[i]=='(' || x[i]=='[') {
            s.push(x[i]);
            continue;
        }
        if(s.empty()) return false;
        switch(x[i]){
            case '}': 
                b=s.top();
                s.pop();
                if(b!='{') return false;
                break;
            case ']': 
                b=s.top();
                s.pop();
                if(b!='[') return false;
                break;
            case ')': 
                b=s.top();
                s.pop();
                if(b!='(') return false;
                break;
        }
    }
    return(s.empty());
}

int main()
{
	int t;
    scanf("%d",&t);
    while(t--){
        string x;
        cin >> x;
        if(checkstr(x)) cout <<"balanced"<<endl;
        else cout<<"not balanced"<<endl;
    }
	return 0;
}
