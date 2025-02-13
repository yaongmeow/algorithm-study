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

    int size = max - min + 1;
    int* cnt = new int[size];
    fill(cnt, cnt + size, 0);

    for(int i = 0; i < n; i++){
        cnt[x - arr[i] - min]++;
    }

    for(int i = 0; i < n; i++){
        if(cnt)
    }

}