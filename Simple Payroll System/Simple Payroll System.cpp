#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int num = 0; // INPUT: number of employees
float hours = 0.0f; // INPUT: works hours
float rate = 0.0f; // INPUT: rate/hour
float tax = 0.0f; // INPUT: taxes
float pay = 0.0f; // OUTPUT: hours*rate
float netPay = 0.0f; // OUTPUT: net pay
float total = 0.0f; // OUTPUT: total paid to the employee
int counter = 1; // COUNTER: counter of the loop

string cur = "$"; // DEFINE: the currency

int main() {
    cout << "Number of Empolyees: ";
    cin >> num;
    cout << "------------------" << endl;
    while(counter <= num) {
        cout << "Employee No." << counter << endl;
        cout << "Hours: ";
        cin >> hours;
        cout << "Rate: " << cur;
        cin >> rate;
        pay = hours * rate;
        cout << "Pay: " << cur << pay << endl;
        cout << "Tax: " << cur;
        cin >> tax;
        netPay = pay - tax;
        cout << "Net Pay: " << cur << netPay << endl;
        cout << "Employee No." << counter << " processed." << endl << "------------------" << endl;
        total += netPay;
        counter++;
    }
    cout << "All employees processed." << endl;
    cout << "Total Pay: " << cur << total << endl << "------------------" << endl;

    system("pause");
    return 0;
}