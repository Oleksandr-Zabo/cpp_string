#include <iostream>
using namespace std;

void insert(char* str, char elem, int index) {
    int len = strlen(str);
    for (int i = len; i > index; i--) {
        
        str[i] = str[i - 1];
    }
    len++;
    str[index] = elem;
    str[len - 1] = '\0';
}

int main() {
    char str[] = "hello  world!!! ";
    cout << "Before: " << str << endl;

    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    int index;
    do
    {
        cout << "Enter index: ";
        cin >> index;
    } while (index<0 || index>strlen(str));
    

    insert(str, symbol, index);

    cout << "After: " << str << endl;

    return 0;
}
