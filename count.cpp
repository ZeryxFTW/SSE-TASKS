#include <bits/stdc++.h>
using namespace std;

    int main() {
        int number, turns;
turns=0;
 cin >> number;
    
    while(number>0){
        number/=10;
        turns++;
        if(number==0){
            break;
        }
     }
cout << turns;
return 0;
    }

