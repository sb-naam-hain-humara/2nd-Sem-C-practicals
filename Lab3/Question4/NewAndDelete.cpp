//Program using new and delete

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int *p = new int[a];
    for(int i = 0; i<a; i++)
    {
        cout << "Enter element at " << i + 1 << ":";
        cin >> p[i];
    }
    for(int i = 0; i<a; i++)
    {
        cout << p[i] << " ";
    }

    delete []p;

    return 0;
}
