#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int cnt[6][2];

    for(int i = 0; i < 6; i++){
        cnt[i][0] = 0;
        cnt[i][1] = 0;
    }

    for(int i = 0; i < n; i++){
        int gender, year;
        cin >> gender >> year;
        cnt[year-1][gender]++;
    }

    int rooms = 0;

    for(int i = 0; i < 6; i++){
        if(cnt[i][0] % k != 0){
            rooms++;
        }
        rooms += cnt[i][0] / k;
        if(cnt[i][1] % k != 0){
            rooms++;
        }
        rooms += cnt[i][1] / k;
    }

    cout << rooms;

}