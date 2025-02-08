#include <iostream> 
#include <string> 
#include <vector>

using namespace std;

template <typename T>
T soma(T a, T b) {
    return a + b;
}

template <typename T>
T subtracao(T a, T b) {
    return a - b;
}

template <typename T>
T divisao(T a, T b) {
    return a / b;
}

template <typename T>
T multiplicacao(T a, T b) {
    return a * b;
}