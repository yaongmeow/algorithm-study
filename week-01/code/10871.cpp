#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    bool first = true;
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if (input < x) cout << input << " ";
    }
}