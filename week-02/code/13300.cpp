#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int* sex = new int[n];
    int* year = new int[n];

    int female = 0, male;

    for(int i = 0; i < n; i++){
        cin >> sex[i] >> year[i];
        if (sex[i] == 0){
            female++;
        }
    }

    male = n - female;

    int largerGender;

    if(male > female){
        largerGender = male;
    } else{
        largerGender = female;
    }





}