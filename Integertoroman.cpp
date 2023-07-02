#include <iostream>
#include <string>

using namespace std;

// Function to convert an integer to a Roman numeral string
string func(int n) {
    string romanNumeral = "";  // Initialize the resulting Roman numeral string

    // Define arrays for Roman numeral symbols and their corresponding values
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Iterate through the values and symbols arrays
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        // Repeat the current symbol while the value is smaller or equal to the remaining number
        while (n >= values[i]) {
            romanNumeral += symbols[i];
            n -= values[i];
        }
    }

    // Return the resulting Roman numeral string
    return romanNumeral;
}

int main() {
    int n;
    cin>>n;

    string romanNumeral = func(n);

    cout << "Roman numeral representation of " << n << ": " << romanNumeral << endl;

    return 0;
}
