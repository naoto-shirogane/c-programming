#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26], char word[30], int index);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

    char word1[30], word2[30], chr;
    int index1 = 0, index2 = 0, counts1[26]= {0}, counts2[26] = {0};

    printf("Enter a word: ");

    while ((chr = getchar()) != '\n') {

        word1[index1++] = chr;
    }

    printf("Enter another word: ");

    while ((chr = getchar()) != '\n') {

        word2[index2++] = chr;
    }

    read_word(counts1, word1, index1);
    read_word(counts2, word2, index2);
    
    printf("%s", equal_array(counts1, counts2) ? "true":"false");
}

void read_word(int counts[26], char word[30], int index) {

    for (int i = 0; i < index; i++) {

        int letter = tolower(word[i]);
        counts[letter - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26]) {

    for (int i = 0; i < 26; i++) {

        if (counts1[i] != counts2[i]) {

            return false;
        }
    }
    return true;
}