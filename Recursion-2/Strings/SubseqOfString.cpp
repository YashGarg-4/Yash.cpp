#include <iostream>
using namespace std;

void ss(string inp, string out){
    
    if(inp.empty()){
        cout << out << endl;
        return;
    }

    ss(inp.substr(1), out);
 
    ss(inp.substr(1), out + inp[0]);

}

int main(){
    
    string inp;
    cin >> inp;

    string out = "";
// inp: The input string from which you are generating subsets.
// out: The current subset being built, which will eventually be printed.
    ss(inp, out);

    return 0;

}