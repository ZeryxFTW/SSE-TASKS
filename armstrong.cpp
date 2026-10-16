#include <iostream>
using namespace std;
int main(){
int N, ld, astrong, dup, turns;
cin >> N;
dup=N;
astrong=0;

while(N>0){
    ld=N%10;
    N/=10;
    astrong+=ld*ld*ld;

}
if(astrong==dup) cout << "This is an armstrong number";
else cout << "This is not an armstrong number";

return 0;
}