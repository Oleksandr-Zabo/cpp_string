#include <iostream>
using namespace std;

void space_to_tab(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
            
        }
    }
}

int main() {
    char str[] = "hello world  mj j jjj h ghgg";
    cout << "Before: " << str << endl;

    space_to_tab(str);

    cout << "After: " << str << endl;

    return 0;
}