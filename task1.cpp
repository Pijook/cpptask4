//
// Created by Jakub on 4/3/2022.
//

#include "task1.h"

void merge(const int* a, size_t dima, const int* b, size_t dimb, int* c){

    int indexA = 0;
    int indexB = 0;

    for(size_t i = 0; i < dima + dimb; i++){
        if(a[indexA] < b[indexB]){
            c[i] = a[indexA];
            indexA++;
        }
        else{
            c[i] = b[indexB];
            indexB++;
        }
    }

}

void printArr(const int* a, size_t dima, const char* m){
    std::cout << m << " [ ";
    for(size_t i = 0; i < dima; ++i){
        std::cout << a[i] << " ";
    }
    std::cout << "]\n";
}