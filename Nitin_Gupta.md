/*Include header file iostream*/

using namespace std;

void towerofhanoi(int n,int a,int b,int c)

{

  if(n==1)
  
  {
  
    cout<<"Moving disk from "<<a<<" to "<<c<<endl;
    
    return;
    
  }
  
  else
  
  {
  
  towerofhanoi(n-1,a,c,b);
  
  cout<<"Moving disk from "<<a<<" to "<<c<<endl;
  
  towerofhanoi(n-1,b,a,c);
  
  }
  
}

int main()

{

  int n,A=1,B=2,C=3;
  
  cin>>n;
  
  towerofhanoi(n,A,B,C);
  
  return 0;
  
}
