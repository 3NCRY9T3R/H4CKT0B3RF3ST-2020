#include<bits/stdc++.h>
using namespace std;
int sizeofLadder(string beginWord,string endWord,list<string> wordList)
{
    set<string> s_set;
    set<string> visited;
    for(auto itr:wordList)
    {
        s_set.insert(itr);
    }
    ///////string m insertion
    // for(auto itr:s_set) cout<<itr<<" ";
    // cout<<endl;
    //////////
    if(s_set.find(endWord) == s_set.end()) 
         return 0;
    queue<string> qq;
    qq.push(beginWord);
    ///////////
    // cout<<"qq printing \n";
    // while(!qq.empty())
    // {
    //     cout<<qq.front()<<" ";
    //     qq.pop();
    // }
    ///////
    int changes=1;
    
    while(!qq.empty())
    {
        int size=qq.size();
        for(int i=0;i<size;i++)
        {
            string word = qq.front();
            qq.pop();
            if(word == endWord) return changes;
            
            for(int j=0;j<word.length();j++)
            {
                for(char k='a';k<='z';k++)
                {
                    string str=word;
                    str[j]=k;
                    
                    if(s_set.find(str)!=s_set.end() && visited.find(str)==visited.end())
                    {
                        qq.push(str);
                        visited.insert(str);
                    }
                }
            }
        }
        changes++;
    }
 return changes;   
}
int main()
{
    int i,j,k,n,l;
    string begin,end,str;
    cout<<"enter start and end word:";
    cin>>begin>>end;
    list<string>li;
    cout<<"enter size of list:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        li.push_back(str);
    }
    // for(auto itr:li)
    // {
    //     cout<<itr<<" ";
    // }
    cout<<"no of sides of ladder:"<<sizeofLadder(begin,end,li);
}
