#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;

    int cnt[26];
    fill(cnt, cnt + 26, 0);

    for(int i = 0; i < s.length(); i++){
        cnt[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        cout << cnt[i] << " ";
    }
}