#include <iostream>
#include "../SomeMathOperations/someMath.h"

int main() {
    int result = someMath::add(2,3);
    std::cout << result << std::endl;
    return 0;
}