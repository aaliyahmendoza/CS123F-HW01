
#include <iostream>

// Function to display uppercase letters from A to Z
void DisplayUppercaseABC() {
    for (char letter = 'A'; letter <= 'Z'; ++letter) {
        std::cout << letter << "    ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "About to call the DisplayUppercaseABC function...\n" << std::endl; 


    // Call the DisplayUppercaseABC function
    DisplayUppercaseABC();


    std::cout << "\nReturned from the DisplayUppercaseABC function" << std::endl;

    return 0;
}

