#include <iostream>
using namespace std;

void del_index(char* str, int index) {
    for (int i = index; i < strlen(str); i++) {
        str[i] = str[i + 1];
    }
}

int main() {
    char str[] = "hello world !!!";
    cout << "Before: " << str << endl;

    int index;
    do {
        cout << "Enter index: ";
        cin >> index;
    } while (index < 0 || index >= strlen(str));

    del_index(str, index);

    cout << "After: " << str << endl;

    return 0;
}