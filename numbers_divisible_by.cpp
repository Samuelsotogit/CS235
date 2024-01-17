#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;

int main(int argc, char const* argv[]) {
    // Write your code here

    //Must give 3 arguments
    if (argc != 4) {
        std::cerr << "You need to give 3 arguments" << endl;
        return 1;
    }
    //Transform command line args into integers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);;
    int c = atoi(argv[3]);;
    //Write the functionality of the code here
    //Check if numbers should display in ascending or descending order.
    if (a < b) {
        for (int i=a; i <= b; ++i) {
            if ((i%c) ==  0) {
                cout << i << endl;
            }
        }
    }
    else if (a > b) {
        for (int i=a; i>=b; --i) {
            if ((i%c) == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
