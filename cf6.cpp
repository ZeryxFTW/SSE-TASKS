#include <iostream>
#include <string>
#include <vector>


using namespace std;
int main(){
    int index, count;
    count=0;
    string str;
    getline(cin, str);
    vector<bool> unique(26, false);
    for(int i=0; i<str.length(); i++){
     index= str[i] - 'a';
    
    if(unique[index]==false){
    unique[index]=true;
      count++;}
    }
      if(count%2==0)
      cout << "CHAT WITH HER!";
      else
      cout << "IGNORE HIM!";
    

}