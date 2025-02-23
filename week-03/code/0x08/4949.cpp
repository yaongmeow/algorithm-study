#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true){
        string input;
        stack<char> s;
        getline(cin, input);

        if(input.length() == 1 && input == "."){
            break;
        }

        bool bal = true;

        for(int i = 0; i < input.length(); i++){
            char letter = input[i];
            if (letter == '(' || letter == '['){
                s.push(letter);
            } else if (letter == ')' || letter == ']'){
                if(s.empty()){
                    bal = false;
                    break;
                }
                char top = s.top();
                if(letter == ')' && top != '('){
                    bal = false;
                    break;
                }
                if(letter == ']' && top != '['){
                    bal = false;
                    break;
                }
                s.pop();
            }
        }
        if(!bal || !s.empty()){
            cout << "no\n";
            continue;
        }
        cout << "yes\n";
    }
}