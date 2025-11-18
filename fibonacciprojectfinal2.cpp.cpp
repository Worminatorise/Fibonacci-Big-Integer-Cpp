#include <iostream>
#include <string>     
#include <limits>     
#include <algorithm>  
using namespace std;
long long sumOfDigits(string n) {
    long long sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    return sum;
}
string add_big_numbers(string str1, string str2) {
    string result = "";
    int carry = 0; 
    int i = str1.length() - 1;
    int j = str2.length() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += str1[i] - '0'; 
            i--;
        }
        if (j >= 0) {
            sum += str2[j] - '0';
            j--;
        }
        carry = sum / 10;
        result += to_string(sum % 10);
    }
    reverse(result.begin(), result.end());
    if (result == "") return "0"; 
    return result;
}
int main() { 
    while (true) { 
        int n;
        cout << "Enter the Fibonacci term you want (Enter '0' to exit):\n-> ";
        while (!(cin >> n) || n < 0) {
            cout << "Invalid input. Please enter a positive number (or 0): ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (n == 0) {
            break; 
        }
        string a = "0";
        string b = "1";
        string currentTerm = "0";
        if (n == 1) currentTerm = "0";
        else if (n == 2) currentTerm = "1";
        else {
            a = "0"; 
            b = "1"; 
            for(int i = 2; i <= n; i++) {
                currentTerm = add_big_numbers(a, b);
                a = b;
                b = currentTerm;
            }
            currentTerm = b; 
        }
        cout << "\n--- Result ---" << endl;
        long long finalSum = sumOfDigits(currentTerm);
        cout << "Fibonacci term (" << n << ") is: " << currentTerm << endl;
        cout << "The sum of its digits is: " << finalSum << endl;
        cout << "--------------------------------------------------------\n" << endl;
    } 
    cout << "Thank you! Exiting program..." << endl;
    return 0;
}
