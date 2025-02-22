#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int aAlpha[26];
    int bAlpha[26];
    int rAlpha[26];

    fill(aAlpha, aAlpha+26, 0);
    fill(bAlpha, bAlpha+26, 0);
    fill(rAlpha, rAlpha+26, 0);

    for(int i = 0; i < a.length(); i++){
        aAlpha[a[i] - 'a']++;
    }

    for(int i = 0; i < b.length(); i++){
        bAlpha[b[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(bAlpha[i] > aAlpha[i]){
            rAlpha[i] = aAlpha[i];
        } else{
            rAlpha[i] = bAlpha[i];
        }
    }

    int rCnt = 0;
    for(int i = 0; i < 26; i++){
        rCnt += rAlpha[i];
    }

    int result = a.length() + b.length() - 2*rCnt;
    cout << result;
}