#include<iostream>
using namespace std;

int i,cases,n,base,rem;

int main(){
 cin>>cases;

 while(cases--)
 {
  cin>>n;

  base=n;
  rem=base+1;

  n--;
  for(i=0;i<n;i++,base--,rem+=2)
  {
    cout<<base<<' '<<rem<<' '<<rem+1<<' ';
  }
  cout<<base<<' '<<rem<<' '<<rem+1<<endl;
 }
 
 return 0;
}
