#include <iostream>
#include <iomanip>

// WAP using setw and endl
// setw provides width....allows us to print in right aligned

using namespace std;

int main()
{
    int basic = 1000, allowance = 200, total = basic + allowance;
    cout << setw(10) << "Basic" << setw(10) << basic << endl;
    cout << setw(10) << "Allowance" << setw(10) << allowance << endl;
    cout << setw(10) << "Total" << setw(10) << total << endl;
    return 0;
}
