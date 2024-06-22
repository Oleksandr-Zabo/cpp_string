#include <iostream>
using namespace std;

int find_elem(char* str, char symbol, int count_el = 0) {
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == symbol) {
            count_el++;

        }
    }
    return count_el;
}

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    cout << "Enter string: ";
    cin.getline(str, MAX_SIZE);// str with spaces

    
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;

    int count = find_elem(str, symbol);

    cout << "Number of symbol: " << count << endl;

    return 0;
}