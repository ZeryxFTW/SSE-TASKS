#include <iostream>
#include <string>

using namespace std;
int main(){
    string str;
    getline(cin, str);
    int count;
    count=str.length();
    for(int i=0; i<str.length(); i++){
        for(int j=i+1; j<str.length(); j++){
            if(str[i]=str[j]){
                count--;
            }
        }

    }
    if(count%2==0)
    cout << "CHAT WITH HER!";
    else
    cout << "IGNORE HIM!";
    
    

}