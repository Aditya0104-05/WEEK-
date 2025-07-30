#include <iostream>
#include <string>
using namespace std;

int main(){
    int x, y, opr;         // Variables for two numbers and operation choice
    string loop;           // Variable to control the continuation of the program

    // Infinite loop to continuously perform calculations until user decides to exit
    while (true){
        // Display the calculator menu and options for operations
        cout << "Calculator" << endl;
        cout << "Operations:\n"
             << "Addition - 1\n"
             << "Subtraction - 2\n"
             << "Multiplication - 3\n"
             << "Division - 4\n";

        // Prompt the user to enter an operation choice (1-4)
        cout << "Enter operation: (1/2/3/4) ";
        cin >> opr;

        // Prompt the user to enter two integers
        cout << "Enter 1st number: ";
        cin >> x;
        cout << "Enter 2nd number: ";
        cin >> y;

        // Perform the operation based on the user choice
        if (opr == 1){
            // Addition
            cout << x << " + " << y << " = " << x + y << endl;
        }
        else if (opr == 2){
            // Subtraction
            cout << x << " - " << y << " = " << x - y << endl;
        }
        else if (opr == 3){
            // Multiplication
            cout << x << " x " << y << " = " << x * y << endl;
        }
        else if (opr == 4){
            // Division - integer division and remainder
            if (y == 0){
                // Handle division by zero error
                cout << "Error: Division by zero is undefined." << endl;
            }
            else {
                cout << x << " / " << y << " = " << x / y << endl;
                cout << "Remainder: " << x % y << endl;
            }
        }
        else{
            // Invalid operation input
            cout << "Invalid Input" << endl;
            cout << "Do you want to continue: (yes/ no) ";
            cin >> loop;
            if (loop == "yes"){
                continue;   // Restart the loop
            }
            else if (loop == "no"){
                break;      // Exit the program
            }
            else{
                cout << "Invalid Action" << endl;
                break;      // Exit on invalid response
            }
        }

        // Ask user if they want to perform another calculation
        cout << "Do you want to continue: (yes/ no) ";
        cin >> loop;
        if (loop == "yes"){
            continue;       // Continue looping
        }
        else if (loop == "no"){
            break;          // Exit the program
        }
        else{
            cout << "Invalid Action" << endl;
            break;          // Exit on invalid input
        }
    }

    return 0;
}
