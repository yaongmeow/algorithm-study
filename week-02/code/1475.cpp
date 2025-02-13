#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int setNum;

    cin >> setNum;

    int cnt[10];
    fill(cnt, cnt+10, 0);

    string numString = to_string(setNum);

    for(int i = 0; i < numString.length(); i++){
        cnt[numString[i]-'0']++;
    }

    int max = 0;

    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9){
            continue;
        }
        if(cnt[i] > max){
            max = cnt[i];
        }
    }

    int sixPlusNine = cnt[6] + cnt[9];

    int sets = sixPlusNine / 2;
    int remain = sixPlusNine % 2;

    if (remain == 1){
        sets++;
    }
    if(sets > max){
        max = sets;
    }
    cout << max;
}