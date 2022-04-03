#include <iostream>
#include <vector>
#include "task1.h"
#include "task2.h"
#include "task3.h"

void executeTask1();
void executeTask2();
void executeTask3();

int main() {

    //executeTask1();
    //executeTask2();
    executeTask3();
}

void executeTask1(){
    int a[] = {1,4,4,5,8};
    int b[] = {1,2,2,4,6,6,9};

    constexpr size_t dima = std::size(a);
    constexpr size_t dimb = std::size(b);
    constexpr size_t dimc = dima + dimb;

    int c[dimc];

    merge(a, dima, b, dimb, c);

    printArr(a,dima,"a");
    printArr(b,dimb,"b");
    printArr(c,dimc,"c");
}

void executeTask2(){
    std::vector<int> a{2, -13, 3, 6, 4, 5, -14, 1, -15};

    auto r = smallSum3(a);

    std::printf("Sum=%d for elements ""a[%u]=%d, a[%u]=%d, a[%u]=%d\n",a[r[0]]+a[r[1]]+a[r[2]],r[0], a[r[0]], r[1], a[r[1]], r[2], a[r[2]]);
}

void executeTask3(){
    using std::cout;
    using std::endl;

    char s1[] = "Alice in Wonderland";
    cout << "length : " << length(s1)  << endl;
    cout << "reverse: " << reverse(s1) << endl;


    char s2[] = " ... for (int i = 0; i < n; ++i){...} ...";
    cout << "words  : " << words(s2)  << endl;
    cout << "words2 : " << words2(s2) << endl;

    char s3[100] = "Hello";
    cout << "concat : "<< concat(concat(s3,", world"),"!") << endl;
}
