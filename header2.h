#ifndef HEADER_H
#define HEADER_H
void to_uppercase(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        if(a[i] >= 'a' && a[i] <= 'z'){
           a[i] -= 32; 
        }
        i++;
    }
}

void to_lowercase(char b[]){
    int i = 0;
    while(b[i] != '\0'){
        if(b[i] >= 'A' && b[i] <= 'Z'){
           b[i] += 32; 
        }
        i++;
    }
}

int vowelcounter(char str[]){
    int i = 0;
    int count = 0;
    while(str[i]!='\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            count++;
        }
        i++;
    }
    return count;
}


void reverse(char str[]){
    int len = 0;
    int i = 0;
    while (str[i] != '\0') {
        len++;
    i++;
    }
    // i = 0;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
void sort_strings(char str[]){
    char temp;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}



void reverse_words(char str[]){
    char words[50][100];
    int i = 0, j = 0, word_count = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            words[word_count][j] = '\0';
            word_count++;
            j = 0;
        } else {
            words[word_count][j++] = str[i];
        }
        i++;
    }
    words[word_count][j] = '\0';
    word_count++;
    i = 0;
    for (int k = word_count - 1; k >= 0; k--) {
        j = 0;
        while (words[k][j] != '\0') {
            str[i++] = words[k][j++];
        }
        if (k > 0) {
            str[i++] = ' ';
        }
    }
    str[i] = '\0';
}
#endif