#include <iostream>
using namespace std;

int main(){
int rows, columns;
cin >> rows >> columns;
char symbol[rows][columns];
for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
        cin >> symbol[i][j];
    }
}
int r[3], c[3];
int k = 0;
for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
    if(symbol[i][j]=='*'){
     r[k]=i+1;
     c[k]=j+1;
     k++;
    }
    }
}
int finalrow, finalcol;
if(r[0]==r[1])
    finalrow=r[2];
else if(r[0]==r[2])
finalrow=r[1];
else
finalrow=r[0];

if(c[0]==c[1])
    finalcol=c[2];
else if(c[0]==c[2])
finalcol=c[1];
else
finalcol=c[0];

cout << finalrow << " " << finalcol;


}

