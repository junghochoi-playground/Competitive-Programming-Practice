#include <bits/stdc++.h>
using namespace std;


string fight(vector<int> godzilla, vector<int> mechagodzilla){
    sort(godzilla.begin(), godzilla.end());
    sort(mechagodzilla.begin(), mechagodzilla.end());
    vector<int>::iterator g = godzilla.begin();
    vector<int>::iterator mg = mechagodzilla.begin();
    while(g != godzilla.end() && mg != mechagodzilla.end()){
        if (*g >= *mg) mg++;
        else if (*g < *mg) g++;
    }
    if(g == godzilla.end()) return "MechaGodzilla";
    return "Godzilla";
}

int main(){
    int T; cin >> T;
    while(T){
        int NG, NM; cin >> NG >> NM;
        vector<int> godzilla, mecha;
        int input;
        for(int i = 0; i < NG; i++){
            cin >> input;
            godzilla.push_back(input);
        }   
        for(int i = 0; i < NM; i++){
            cin >> input;
            mecha.push_back(input);
        }

        string winner = fight(godzilla, mecha);
        cout << winner << endl;
        T--;
    }
}