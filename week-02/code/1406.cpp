#include<iostream>
#include<list>


using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    list<char> input;

    for(int i = 0; i < s.length(); i++){
        input.push_back(s[i]);
    }

    int m;
    cin >> m;

    while(m--){

    }

    for(auto i : input){
        cout << i;
    }
}