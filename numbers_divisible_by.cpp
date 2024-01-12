#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;

int main(int argc, char const* argv[]) {
    // Write your code here

    //Must give 3 arguments
    if (argc != 3) {
        std::cerr << "You need to give 3 arguments" << endl;
    }
    //Transform command line args into integers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);;
    int c = atoi(argv[3]);;
    // Assign variables from the command line args.
    cin >> a;
    cin >> b;
    cin >> c;
    //Display user input
    cout << "a b c" << endl;
    //Write the functionality of the code here


    return 0;
}
