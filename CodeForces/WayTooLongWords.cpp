#include <bits/stdc++.h>
using namespace std;
    

int main(){
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        if (s.length() >10){
            char first = s[0], last = s[s.length()-1];
            int length = s.length()-2;
            cout << first << length << last<< endl;

        } else{
            cout << s << endl;
        }
    }
}