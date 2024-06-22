#include <iostream>
using namespace std;

void dot_to_exp(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            str[i] = '!';

        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter string: ";
    cin.getline(str, MAX_SIZE);// str with spaces
    cout << "Before: " << str << endl;

    dot_to_exp(str);

    cout << "After: " << str << endl;

    return 0;
}