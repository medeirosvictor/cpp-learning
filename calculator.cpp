#include <iostream>

int main() {

    double num1, num2;
    char operation;
    
    std::cout << "Insert num1" << std::endl;
    std::cin >> num1;

    std::cout << "Insert num2" << std::endl;
    std::cin >> num2;

    std::cout << "Enter operation: +, -, *, /" << std::endl;
    std::cin >> operation;

    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "No dividing by zero" << std::endl;
            } else {
                std::cout << "Result: " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation";
    }

    return 0;
}
