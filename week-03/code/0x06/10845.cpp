#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string buffer;
    cin >> n;
    getline(cin, buffer);

    int* queue = new int[n];
    int head = 0; 
    int tail = 0;

    while(n--){
        string command;
        getline(cin, command);

        bool push = false;

        for(int i = 0; i < command.length(); i++){
            if(command[i] == ' '){
                push = true;
                int target = stoi(command.substr(i+1));
                queue[tail++] = target;
            }
        }

        if(push)
            continue;
        if(command == "pop"){
            if (head == tail)
                cout << "-1\n";
            else
                cout << queue[head++] << "\n";
        } else if (command == "size"){
            cout << tail - head << "\n";
        } else if (command == "empty"){
            if(head == tail)
                cout << "1\n";
            else
                cout << "0\n";
        } else if (command == "front"){
            if(head == tail)
                cout << "-1\n";
            else
                cout << queue[head] <<"\n";
        } else {
            if(head == tail)
                cout << "-1\n";
            else
                cout << queue[tail-1] << "\n";
        }
    }
}