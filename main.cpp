#include <iostream>
using namespace std;

void num_elem(char* str, int num = 0, int letter = 0, int other = 0)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            num++;
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
    const int MAX_SIZE = 100;

    char str[MAX_SIZE];
    cout << "Enter string: ";
    cin.getline(str, MAX_SIZE);

    num_elem(str);

    return 0;
}