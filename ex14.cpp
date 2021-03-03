//Rodrigo Limongi De Martini - 32021852

#include <iostream>
#include <string>

using namespace std;

int VowelsCount(string word)
{
    int vowelsNum = 0;

    char word_array[word.length()];

    for (int i = 0; i < sizeof(word_array); ++i)
    {
        word_array[i] = word[i];
    }

    int word_arrayLength = sizeof(word_array) / sizeof(word_array[0]);

    for (int i = 0; i < word_arrayLength; ++i)
    {
        if ((word_array[i] == 'a') || (word_array[i] == 'e') || (word_array[i] == 'i') || (word_array[i] == 'o') || (word_array[i] == 'u'))
            vowelsNum += 1;
    }

    return vowelsNum;
}

int main()
{
    setlocale(LC_ALL, "pt_BR");

    string word;

    cout << "Digite uma palavra (com letras minúsculas): ";
    cin >> word;

    cout << "O número de vogais na palavra digitada é: " << VowelsCount(word);
}

//Site usado de referência: https://www.geeksforgeeks.org/convert-string-char-array-cpp/