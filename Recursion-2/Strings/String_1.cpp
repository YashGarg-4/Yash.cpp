#include <iostream>
using namespace std;

int main(){
    string s = "abc";
    string s1;

    string * s2 = new string;
    *s2 = "ghi";

    cout << s2 << endl;
    cout << *s2 << endl;

    string s3 = "Hi";

    // cin >> s3;

    *s2 += s3; //Concatenate

    cout << *s2 << endl;
    s1 = "def";

    cout << s << ' ' << s1 << endl;
    

    s3 = s + s1;
    cout << s3 << endl;
    cout << s3.size() << endl;

    cout << s3.substr(2,1) << endl; // substr(starting_index, length_ahead)

    return 0;
}