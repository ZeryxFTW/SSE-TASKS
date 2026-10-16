#include <iostream>
using namespace std;
int main(){
    int number, revnum, ld, duplicate;
    
    revnum=0;
    cin >> number;
    duplicate=number;
    while(number>0){
        ld=number%10;
        number/=10;
        revnum=(revnum*10)+ld;

    }
    if(duplicate==revnum)
        cout << "This is a pallindrome";

    
    else
    cout << "This is NOT a pallindrome";
return 0;
}
