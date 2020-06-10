#include <bits/stdc++.h>
using namespace std;

int solve (string str){
    int res = 0;
    int openBrackets = 0;
    for(int i = 0; i < str.length(); i++){
        if (str[i] == '{') openBrackets++;
        else if (str[i] == '}'){
            if (openBrackets == 0){
                res++;
                openBrackets++;
            } else{
                openBrackets--;
            }
        }

    }
    res += openBrackets /2;

    return res;
}

int main(){
    int scenario = 1;
    string str; cin >> str;
    while(str[0] != '-'){
        cout << scenario << ". " << solve(str) << endl;
        cin >> str;
        scenario++;
    }
    
}