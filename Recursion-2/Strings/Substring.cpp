#include <iostream>
using namespace std;

string subs(string inp) {
    if (inp == "") {
        return "";
    }

    string result = inp[0] + subs(inp.substr(1));
    cout << result << endl;
    return result;
}

int main() {
    string inp;
    cin >> inp;

    subs(inp);  // No need to store the result if we're just printing
    return 0;
}
