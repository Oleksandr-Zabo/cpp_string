#include <iostream>
using namespace std;

bool is_palindrome(char* str) {
    bool palindrome = true;
    for (int i = 0, j = strlen(str) - 1; str[i] != '\0'; i++, j--) {//j = strlen(str) - 1 =>  strlen(str) = str + \0
        if (str[i] != str[j]) {
            palindrome = false;

        }
    }
    return palindrome;
}

int main() {
    char str_1[] = "alla";
    char str_2[] = "Hello";
    cout << "String 1: " << str_1 << endl;
    cout << "String 2: " << str_2 << endl;

    if (is_palindrome(str_1)) {
        cout << "String 1 is palindrome" << endl;
    }
    else {
        cout << "String 1 is not palindrome" << endl;
    }


    if (is_palindrome(str_2)) {
        cout << "String 2 is palindrome" << endl;
    }
    else {
        cout << "String 2 is not palindrome" << endl;
    }
    return 0;
}