#include <iostream>
using namespace std;

void del_index(char* str, char elem) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == elem) {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--; 
            i--;  
        }
    }
}

int main() {
    char str[] = "hello  world!!! ";
    cout << "Before: " << str << endl;

    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    del_index(str, symbol);

    cout << "After: " << str << endl;

    return 0;
}
