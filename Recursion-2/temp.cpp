#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char* str) {
    // Base case: If the string is empty or has only one character
    if (str[0] == '\0' || str[1] == '\0') {
        return;
    }

    // Recursive call for the rest of the string
    removeDuplicates(str + 1);

    // Check if the first character is a duplicate
    if (str[0] == str[1]) {
        // Shift all characters one position to the left
        int i = 1;
        for (; str[i] != '\0'; i++) {
            str[i - 1] = str[i];
        }
        str[i - 1] = '\0';  // Null-terminate the string

        // Call the function again to check for more duplicates
        removeDuplicates(str);
    }
}

int main() {
    char str[] = "qweqweqweqwe";

    removeDuplicates(str);

    cout << str << endl;

    return 0;
}
