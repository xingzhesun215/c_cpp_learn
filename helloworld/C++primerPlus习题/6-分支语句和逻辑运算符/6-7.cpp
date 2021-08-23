

#include <iostream>


using namespace std;

/**
 * 6-7
 *
 * @return
 */
#include <cctype>


int main1() {
    char word[40];
    int vowel, consonant, others;
    vowel = consonant = others = 0;
    cout << "Enter the words(q to quit):" << endl;
    cin >> word;

    while (strcmp(word, "q") != 0) {
        if (!isalpha(word[0])) {
            others++;
        } else {
            switch (word[0]) {
                case 'a':
                case 'e':
                case 'o':
                case 'i':
                case 'u':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        }
        cin >> word;
    }
    cout << vowel << " words beginning with vowels " << endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout << others << " others" << endl;
    return 0;
}

