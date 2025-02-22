#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    stack<int> s;
    int pos = 0;

    while(n > 0){
        string command;
        cin >> command;
        if(command == "push"){
            int num;
            cin >> num;
            s.push(num);
        } else if(command == "top"){
            if(s.empty())
                cout << "-1\n";             
            else
                cout << s.top() << "\n";
        } else if(command == "pop"){
            if(s.empty())
                cout << "-1\n";             
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if(command == "size"){
            cout << s.size() << "\n";
        } else { // empty
            if(s.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        n--;
    }

}
