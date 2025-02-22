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

    int x;
    cin >> x;

    int min = 1000000, max = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            continue;
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int* cnt = new int[max + 1];
    fill(cnt, cnt + max + 1, 0);

    for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
    }

    int result = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] * 2 == x){
            continue;
        }
        int target = x - arr[i];
        if (target < 0 || target > max){
            continue;
        }
        if(cnt[target] > 0){
            result++;
        }
    }
    cout << result / 2;
}