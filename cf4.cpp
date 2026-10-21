#include <iostream>
#include <vector>
using namespace std;
int main(){
int levels, little1, little2, rounds;
cin >> levels;
vector<bool> passed(levels+1, false);

cin>>little1;
for(int i=0; i<little1; i++){
    cin>>rounds;
  passed[rounds]=true;
  
}
cin>>little2;
for(int i=0; i<little2; i++){
    cin >> rounds;
  passed[rounds]=true;
  
}
for(int i=1; i<=levels; i++){
    if(passed[i]==false){
        cout << "Oh, my keyboard!";
        return 0;
    }
}
cout << "I become the guy.";

}