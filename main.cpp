#include <iostream>
using namespace std;


int my_strtok(char* str, char* delim) 
{
    int words_count = 0;

    for (size_t i = 0; i < strlen(str); i++)
    {
        for (size_t j = 0; j < strlen(delim); j++)
        {
            if (str[i] == delim[j])
            {
                str[i] = ' ';
                break;
            }
        }
    }

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i + 1] != ' ')
        {
            size_t j = i;
            for (; str[j] != ' '; j++)
            {
            }
            i = j;
            words_count++;
        }
    }
    return words_count;
    
}



int main() {

    char str[] = "hello world! New. Old";
    char delim[] = ".!?";
    cout << str << endl;

    int word_count = my_strtok(str, delim);

    
    cout << "Number of words: " << word_count << endl;


    return 0;
}