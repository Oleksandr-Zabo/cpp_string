#include <iostream>
using namespace std;

void num_elem(char* str, int num = 0, int letter = 0, int other = 0) 
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >=48 && str[i]<=57) {
            num ++;
        }
        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
            letter++;
        }
        else {
            other++;
        }
    }

    cout << "Numbers: " << num << endl;
    cout << "Letters: " << letter << endl;
    cout << "Other char: " << other << endl;
}

int main() {

    char str[] = "hello 2+4 => 6";

    cout << "Before: " << str << endl;

    num_elem(str);

    cout << "After: " << str << endl;

    return 0;
}