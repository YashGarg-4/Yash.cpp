#include <iostream>
using namespace std;

string ss(string inp){
    
    if(inp.empty()){
        
        return "";
    }

    string result = ss(inp.substr(1));

    cout << result << endl;
    result = inp[0] + result;
    cout << result << endl;

    return result;
}

int main(){
    
    string inp;
    cin >> inp;

    // string out = "";
// inp: The input string from which you are generating subsets.
// out: The current subset being built, which will eventually be printed.
    ss(inp);

    return 0;

}