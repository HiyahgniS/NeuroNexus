#include <iostream>
using namespace std;

int main() {
    float num1, num2, answer;
    char op;

    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Prompt the user to choose an operation
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> op;

    // Perform the selected operation and display the result
    switch (op) {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                answer = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1;  // Exit the program with an error code
    }

    std::cout << "Answer: " << num1 << " " << op << " " << num2 << " = " << answer << std::endl;

    return 0;
}
