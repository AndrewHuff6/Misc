#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    // Declarations and Initializations
    double val, total_sum = 0, temp_sum = 0;
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
        total_sum += val;     // Add it to the sum
        count += 1;     // Increment
    }

    // Begin if statement logic
    if (total_sum < 100) {
        temp_sum = total_sum * .1;
    }
    else if (total_sum > 100 && total_sum < 249.99) {
        temp_sum = total_sum * .2;
    }
    else if (total_sum > 250 && total_sum < 499.99 ) {
        temp_sum = total_sum * .3;
    }
    else if (total_sum > 500 && total_sum < 999.99) {
        temp_sum = total_sum * .4;
    }
    else {
        temp_sum = total_sum * .5;
    }

    // Formatting and displaying the table
    outfile << "Total Purchase" << setw(5) << "$" << setw(8) << fixed << setprecision(2) << total_sum << endl;
    outfile << "Discount" << setw(11) << "$" << setw(8) << temp_sum << endl;
    outfile << string(27, '-') << endl;
    outfile << "New Price" << setw(10) << "$" << setw(8) << total_sum - temp_sum << endl;

    // Close the file
    outfile.close();

    // End the program
    return 0;
}