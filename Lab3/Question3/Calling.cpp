//Program using call by value, address and reference

#include <iostream>

using namespace std;

void sum_val(int a, int b) //by value
{
    cout << a+b << "\n";
}

void sum_ref(int &a, int &b) //by reference
{
    cout << a+b << "\n";
}

void sum_add(int *a, int *b) //by pointer
{
    cout << *a + *b << "\n";
}

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    int &x = a, &y = b;
    sum_val(a, b);
    sum_ref(x, y);
    sum_add(&a, &b);
    return 0;
}
