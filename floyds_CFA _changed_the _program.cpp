#include <iostream>

int main() {
    int rows, number = 1;

    std::cout << "Enter the number of rows for Floyd's Triangle: ";
    std::cin >> rows;

    std::cout << "Floyd's Triangle:" << std::endl;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << number << " ";
            number++;
        }
        std::cout << std::endl;
    }

    return 0;
}
// Enter the number of rows for Floyd's Triangle: 4

// Floyd's Triangle:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
