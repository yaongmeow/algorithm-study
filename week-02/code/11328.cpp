#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int alpha[26];
    string a, b;

    for(int i = 0; i < n; i++){
        
        fill(alpha, alpha + 26, 0);
        
        cin >> a >> b;
        for(int j = 0; j < a.length(); j++){
            alpha[a[j] - 'a']++;
        }

        for(int j = 0; j < b.length(); j++){
            alpha[b[j] - 'a']--;
        }

        for(int j = 0; j < 26; j++){
            if(alpha[j] != 0){
                cout << "Impossible\n";
                break;
            }
            if(j == 25){
                cout << "Possible\n";
            }
        }

    }

}