#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;

std::string input(std::string prompt) {
    std::cout << prompt;
    std::cout.flush();
    std::string response;
    std::getline(std::cin, response);
    return response;
}

int main(int argc, char const* argv[]) {
    // Write your code here

    //Needed Variables
    std::string operation;
    int a;
    int b;

    while (true) {
        //Retrieve variables from user
        //Determine type of operation
        operation = input("operation: ");
        if (operation.empty()) {
            break;
        }
        if (operation != "add" && operation != "subtract" && operation != "multiply" && operation != "divide" && operation != "mod") {
            cout << operation << " is not a valid operation" << endl;
            continue;
        }
        //Define variable a
        a = stoi(input("left operand: "));
        //Define variable b
        b = stoi(input("right operand: "));
        //Determine how to evaluate
        if (operation == "add") {
            cout << a + b << endl;
        } else if (operation == "subtract") {
            cout << a - b << endl;
        } else if (operation == "multiply") {
            cout << a * b << endl;
        } else if (operation == "divide") {
            cout << a / b << endl;
        } else if (operation == "mod") {
            cout << a % b << endl;
        }
    }
    return 0;
}