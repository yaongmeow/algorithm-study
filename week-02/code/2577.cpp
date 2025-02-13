#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    string target = to_string(a*b*c);

    int cnt[10];
    fill(cnt, cnt + 10, 0);

    for(int i = 0; i < target.length();  i++){
        cnt[target[i]-'0']++;
    }

    for(int i = 0; i < 10; i++){
        cout << cnt[i] << "\n";
    }
}