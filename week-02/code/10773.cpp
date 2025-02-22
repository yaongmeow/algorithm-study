#include<iostream>
#include<stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    stack<int> s;


    while(k--){
        int num;
        cin >> num;
        if (num == 0){
            s.pop();
        } else {
            s.push(num);
        }
    }

    int res = 0;

    while(!s.empty()){
        res+=s.top();
        s.pop();
    }

    cout << res;
}