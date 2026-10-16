#include <iostream>
using namespace std;
int main(){
int a, b, nprime, prime;
cin>>a>>b;

for(int x=a+1;x<=b;x++){
    nprime=1;
  for(int i=2; i*i<=x; i++)
  if(x%i==0){
    nprime=0;
    break;
}
if(nprime==1){
  prime=x;
  break;
}
}
if(prime==b)
cout <<"YES\n";
else
cout <<"NO\n";
}