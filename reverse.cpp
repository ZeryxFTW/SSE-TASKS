#include <iostream>
using namespace std;
int main(){
    int number, revnum, ld;
    revnum=0;
    cin >> number;
    while(number>0){
        ld=number%10;
        number/=10;
        revnum=(revnum*10)+ld;

    }
    cout << revnum;
return 0;
}
