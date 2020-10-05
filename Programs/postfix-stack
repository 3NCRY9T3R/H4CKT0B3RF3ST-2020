#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
int val(char c,int a,int b)
{
	switch(c)
	{
	case '+':return (a+b);
	break;
	case '-' :return (a-b);
	break;
	case '*' :return (a*b);
	break;
	case '/' :return (a/b);
	break;
	default:  return 0;
	}
	
		
}
int main()
{
	stack <int> st;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if((s[i]=='+')||(s[i]=='-')||(s[i]=='*')||(s[i]=='/'))
		{
			int a=st.top();
			st.pop();
			cout<<a<<endl;
			int b=st.top();
			st.pop();
			cout<<b<<endl;
			int c=val(s[i],a,b);
			cout<<c<<endl;
			st.push(c);
			
		}
		else
		{
			st.push(s[i]);
			cout<<"pushed"<<s[i]<<endl;
		}
	}
	cout<<st.top();
	return 0;
}
