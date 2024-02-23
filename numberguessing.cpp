#include <iostream>
#include <cstdlib>

int main() {
    srand((unsigned) time(NULL));

    int offset = 1;
    int range = 100;
    int random = offset + (rand() % range);

    std::cout << random;
    return 0;
}