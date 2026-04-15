#include<iostream>
using namespace std;

int i,maxi,n,sum;
int a[7];

int main(){
 cin>>n;

 while(n--)
 {
  maxi=-67;
  sum=0;
  for(i=0;i<7;i++)
  {
    cin>>a[i];
    if(a[i]>maxi)
     maxi=a[i];
    sum+= (-1)*(a[i]);
  }
  sum+=maxi*2;

  cout<<sum<<endl;
 }
 
 return 0;
}
