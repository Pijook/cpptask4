//
// Created by Jakub on 4/3/2022.
//

#include "task3.h"

size_t length(const char* cstr){
    size_t i = 0;
    while(cstr[i] != '\0'){
        i++;
    }
    return i;
}

bool isLetter(char c){
    return (c >= 'A' &&  c <= 'Z') || (c >= 'a' &&  c <= 'z');
}

char* reverse(char* cstr){
    size_t size = length(cstr);
    size--;

    for(size_t i = 0; i < size / 2; i++){
        char temp = cstr[i];
        cstr[i] = cstr[size - i];
        cstr[size - i] = temp;
    }

    return cstr;
}

size_t words(const char* cstr){
    size_t amount = 0;

    bool word = false;
    for(size_t i = 0; i < length(cstr); i++){
        if(!isLetter(cstr[i])){
            if(word){
                amount++;
            }
            word = false;
        }
        else{
            word = true;
        }
    }

    return amount;
}

size_t words2(const char* cstr){
    size_t amount = 0;

    bool word = false;
    int wordLength = 0;
    for(size_t i = 0; i < length(cstr); i++){
        if(!isLetter(cstr[i])){
            if(word){
                if(wordLength >= 2){
                    wordLength = 0;
                    amount++;
                }
            }
            wordLength = 0;
            word = false;
        }
        else{
            word = true;
            wordLength++;
        }
    }



    return amount;
}

char* concat(char* t, const char* s){
    size_t size = length(t);
    for(int i = 0; i < length(s); i++){
        t[size + i] = s[i];
    }

    return t;
}
