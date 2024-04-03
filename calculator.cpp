#include <iostream>
#include <limits>

int main() {
    char op;
    double num1, num2, result;
    int choice;

    do {
        std::cout << std::endl << "Enter first number: ";
        while (!(std::cin >> num1)) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cout << "Enter second number: ";
        while (!(std::cin >> num2)) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any extra characters in input buffer

        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> op;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                    continue; // Skip to next iteration of the loop
                }
                break;
            default:
                std::cout << "Error: Invalid operator!\nOperation failed!\nTry again!" << std::endl;
                continue; // Skip to next iteration of the loop
        }

        std::cout << "\nResult: " << result << std::endl << std::endl;

        std::cout << "Do you want to continue? (1 for Yes, 0 for No): ";
        while (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter 1 for Yes or 0 for No: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (choice != 0);

    std::cout << std::endl << "Goodbye!" << std::endl << std::endl;

    return 0;
}
