#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    int arr [10000];
    int pos = 0;

    while(n > 0){
        string command;
        cin >> command;
        if(command == "push"){
            cin >> arr[pos++];
        } else if(command == "top"){
            if (pos == 0)
                cout << "-1\n";
            else
                cout << arr[pos-1] << "\n";
        } else if(command == "pop"){
            if (pos == 0)
                cout << "-1\n";
            else
                cout << arr[--pos] << "\n";
        } else if(command == "size"){
            cout << pos << "\n";
        } else { // empty
            if(pos == 0)
                cout << "1\n";
            else
                cout << "0\n";
        }
        n--;
    }

}
