//WAP using scope resolution operator (::)

#include <iostream>

using namespace std;

int m = 10;

int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout << "Inner Block: \n";
        cout << "Inner m = " << m << "\n";
        cout << "Outer m = k = " << k << "\n";
        cout << "Global m = ::m = " << ::m << "\n\n";
    }
    cout << "Outer Block: \n";
    cout << "Inner m = " << m << "\n";
    cout << "Global m = ::m = " << ::m << "\n";
    return 0;
}
