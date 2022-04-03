//
// Created by Jakub on 4/3/2022.
//

#include "task2.h"

std::vector<size_t> smallSum3(const std::vector<int>& a){
    std::vector<size_t> result;

    size_t first = 0;
    size_t second = 1;
    size_t third = 2;

    for(size_t i = 0; i < a.size(); i++){
        for(size_t j = 0; j < a.size(); j++){
            if(i != j){
                for(size_t k = 0; k < a.size(); k++){
                    if(j != k && i != k){
                        int currentBest = abs(a[first] + a[second] + a[third]);
                        int currentTest = abs(a[i] + a[j] + a[k]);

                        if(currentTest < currentBest){
                            first = i;
                            second = j;
                            third = k;
                        }
                    }
                }
            }
        }
    }

    result.push_back(first);
    result.push_back(second);
    result.push_back(third);
    return result;
}
