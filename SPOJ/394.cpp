#include <bits/stdc++.h>
using namespace std;


long long  res;


/*
TIME LIMIT EXCEEDE
void numEncodings(string s, int i){
    if (i == s.length()) {
        res++;
        return;
    }

    //1 Digit;
    numEncodings(s, i+1);

    //2 Digit;
    if (i+1 < s.length()){
        int tens = (s[i] -'0') * 10;
        if (tens == 0) return;
        int ones = s[i+1] - '0';
        int num = tens + ones;
        
        if (num <= 26){
            numEncodings(s, i+2);
        }

    }
}

*/ 


long long numEncodings(string num){
    long long dp[num.length()];
    int initTen = (num[0]-'0'), initOne =   (num[1]-'0');
    int initial =  initTen* 10 + initOne;
    dp[0] = 1;
    if (initial > 0  && initial <= 26){
        
        if (initOne == 0 ) {
            if (initTen > 2) dp[1] = 0;
            else dp[1] = 1;
        } else{
            dp[1] = 2;
        }
    } else{
        dp[1] = 1;
    }
    // dp[1] = initial <= 26 ? 2 : 1;

    for(int i = 2; i < num.length(); i++){
        int tens = (num[i-1]-'0'), ones = (num[i]-'0');
        int doubleDigits = tens * 10 + ones;
        int nextDP = 0;

        // Single Digits
        if (ones != 0){
            nextDP += dp[i-1];
        }

        //Double Digits
        // cout << "double digit: " <<  doubleDigits << endl;
        if (tens != 0) {
            if ((doubleDigits > 0  && doubleDigits <=26) ){
                nextDP += dp[i-2];
            }
        }
   

        dp[i] = nextDP;
    }

    return dp[num.length()-1];




}

int main(){

    string num; cin >> num;
    while(num != "0"){
        
        long long res= numEncodings(num);
        
        cout << res << endl; 
        cin >> num;
    }
}

/*
#include <bits/stdc++.h>
using namespace std;


long long  res;



TIME LIMIT EXCEEDE
void numEncodings(string s, int i){
    if (i == s.length()) {
        res++;
        return;
    }

    //1 Digit;
    numEncodings(s, i+1);

    //2 Digit;
    if (i+1 < s.length()){
        int tens = (s[i] -'0') * 10;
        if (tens == 0) return;
        int ones = s[i+1] - '0';
        int num = tens + ones;
        
        if (num <= 26){
            numEncodings(s, i+2);
        }

    }
}




long long numEncodings(string num){
    long long dp[num.length()];
    int initial = (num[0]-'0') * 10 + (num[1]-'0');
    dp[0] = 1;
    dp[1] = initial <= 26 ? 2 : 1;

    for(int i = 2; i < num.length(); i++){
       
        int tens = (num[i-1]-'0') * 10;
        int ones (num[i]-'0');
        int doubleDigit = tens  + ones ;
        long long nextDP = dp[i-1];

        if (ones == 0 && (tens/2 > 2 || tens == 0)){
            return 0;
        } else if(ones == 0){
            nextDP -= dp[i-1];
        }

        if (doubleDigit <= 26 && doubleDigit > 0){
            if (tens == 0) nextDP-=dp[i-1];
            nextDP+= dp[i-2];
        
        }
        
        
        
        dp[i] = nextDP;
    }

    return dp[num.length()-1];




}

int main(){

    string num; cin >> num;
    while(num != "0"){
        
        long long res= numEncodings(num);
        
        cout << res << endl; 
        cin >> num;
    }
}

*/