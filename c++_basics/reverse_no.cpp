
#include<iostream>


using namespace std;

int main(){

  int n;
  cin>>n;

  int lastdigit,reverse=0;

  while(n>0){
   lastdigit= n%10;
   reverse= reverse*10+lastdigit;
   n=n/10;
  }
  cout<<reverse;

  return 0;

}