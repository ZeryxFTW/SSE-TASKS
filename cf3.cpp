#include <iostream>
using namespace std;
int inputs, lines, counter;
int main(){
 cin>>lines;
 int a[lines], b[lines], c[lines];
    
    for(int i=1; i<=lines; i++){

            cin>>a[i-1]>>b[i-1]>>c[i-1];

    }
    for(int i=0; i<lines; i++){
    if(a[i]==1&&b[i]==1&&c[i]==1)
    counter++;
    else if(a[i]==1&&b[i]==1 || a[i]==1&&c[i]==1 || b[i]==1&&c[i]==1 )
    counter++;
}
cout << counter;
}