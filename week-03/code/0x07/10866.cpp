#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int* arr = new int[2*n+1];
    int head = n;
    int tail = n;

    string buffer;
    getline(cin, buffer);

    while(n--){
        string command;
        getline(cin, command);
        bool push = false;

        for(int i = 0; i < command.length(); i++){
            if (command[i] == ' '){
                string pushCommand = command.substr(0, i);
                int target = stoi(command.substr(i+1));
                if (pushCommand == "push_front"){
                    arr[--head] = target;
                } else {
                    arr[tail++] = target;
                }
                push = true;
                break;
            }
        }

        if(push)
            continue;
        
        if(command == "front"){
            if(head == tail){
                cout << "-1\n";
                continue;
            }
            cout << arr[head] << "\n";
        } else if (command == "back") {
            if(head == tail){
                cout << "-1\n";
                continue;
            }
            cout << arr[tail-1] << "\n";
        } else if (command == "size") {
            cout << tail - head << "\n";
        } else if (command == "empty") {
            if(head == tail){
                cout << "1\n";
                continue;
            }
            cout << "0\n";
        } else if(command == "pop_front"){
            if(head == tail){
                cout << "-1\n";
                continue;
            }
            cout << arr[head++] << "\n";
        } else if (command == "pop_back") {
            if(head == tail){
                cout << "-1\n";
                continue;
            }
            cout << arr[--tail] << "\n";
        }
    }
}