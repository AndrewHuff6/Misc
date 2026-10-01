#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Declarations and Initializations
    double val, val = 0, temp_sum = 0;
    int count = 1;
    ofstream outfile("output.txt");

    outfile << "Andrew Huff" << endl;
    outfile << "CMPS One - Dr. Morgan/Colmenares" << endl;
    outfile << "9/30/26" << endl;
    outfile << "This program demonstrates if statement and while loop usage." << endl;
    outfile << endl;

    // Working while loop logic
    while (count <= 6){
        // Insert cin & calculations here – output to file
        cout << "Enter your data values: " << endl;
        cin >> val;     // Accept the user val

        // Begin if statement logic
        if (val < 100) {
            temp_sum = val * .1;
        }
        else if (val > 100 && val < 249.99) {
            temp_sum = val * .2;
        }
        else if (val > 250 && val < 499.99 ) {
            temp_sum = val * .3;
        }
        else if (val > 500 && val < 999.99) {
            temp_sum = val * .4;
        }
        else {
            temp_sum = val * .5;
        }

        count += 1;     // Increment
    }
    
    // Formatting and displaying the table
    outfile << "Total Purchase" << setw(5) << "$" << setw(8) << fixed << setprecision(2) << val << endl;
    outfile << "Discount" << setw(11) << "$" << setw(8) << temp_sum << endl;
    outfile << string(27, '-') << endl;
    outfile << "New Price" << setw(10) << "$" << setw(8) << val - temp_sum << endl;

    // Close the file
    outfile.close();

    // End the program
    return 0;
}
