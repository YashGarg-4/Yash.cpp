#include <iostream>
#include <string>
using namespace std;

// Function to print all possible keypad combinations
void generateCombinations(string inp, int n, string output) {
    if (n == 0) {
        // Base case: when no digits are left, print the result
        cout << output << endl;
        return;
    }

    // Get the last digit of the number
    int digit = n % 10;

    // Calculate the start index for this digit in the input string
    int start = (digit-1) * 3;

    // Get the substring of three characters for this digit
    string letters = inp.substr(start, 3);

    // Recur for each character in the substring
    for (int i = 0; i < 3; i++) {
        // Recursive call with the next digit and updated output
        generateCombinations(inp, n / 10, letters[i] + output);
    }
}

int main() {
    string inp = "abcdefghijklmnopqrstuvwxyz"; // Your input string
    int n;

    cout << "Enter the number: ";
    cin >> n;

    generateCombinations(inp, n, "");

    return 0;
}
