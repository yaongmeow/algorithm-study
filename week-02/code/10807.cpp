#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int v;
    cin >> v;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == v){
            cnt++;
        }
    }

    cout << cnt;

}