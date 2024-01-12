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
        cout << "operation: " << endl;
        std::getline(cin, operation);
        cout << "left operand: " << endl;
        //Define variable a
        cin >> a;
        cout << "right operand: " << endl;
        //Define variable b
        cin >> b;

        //Determine how to evaluate
        if (operation == "add") {
            cout << a + b << endl;
            break;
        } else if (operation == "subtract") {
            cout << a - b << endl;
            break;
        } else if (operation == "multiply") {
            cout << a * b << endl;
            break;
        } else if (operation == "divide") {
            cout << a / b << endl;
            break;
        } else if (operation == "mod") {
            cout << a % b << endl;
            break;
        } else {
            cout << operation << " is not a valid operation" << endl;
        }
        cout << endl;
        std::getline(cin, operation);
    }
    return 0;
}
