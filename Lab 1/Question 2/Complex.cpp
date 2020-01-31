/*WAP to perform calculations on 2 complex nos.*/

#include <iostream>
#include <cmath>

using namespace std;

struct comp
{
    float re;
    float im;
};

comp add_comp(comp c1, comp c2)
{
    comp temp;
    temp.re = c1.re + c2.re;
    temp.im = c1.im + c2.im;
    return (temp);
}

comp sub_comp(comp c1,comp c2)
{
    comp temp;
    temp.re=c1.re - c2.re;
    temp.im=c1.im - c2.im;
    return (temp);
}

comp prod_comp(comp c1, comp c2)
{
    comp temp;
    temp.re=(c1.re * c2.re) - (c1.im * c2.im);
    temp.im = (c1.re * c2.im) + (c1.im * c2.re);
    return (temp);
}

comp div_comp(comp c1, comp c2)
{
    comp temp;
    temp.re=((c1.re*c2.re+c1.im*c2.im)/(pow(c2.re,2)+pow(c2.im,2)));
    temp.im=((c1.im*c2.re-c1.re*c2.im)/(pow(c2.re,2)+pow(c2.im,2)));
    return (temp);
}

int main()
{
    comp c1;
    comp c2;

    cout << "Enter the first complex number: ";
    cin >> c1.re >> c1.im;
    cout << "Enter the second complex number: ";
    cin >> c2.re >> c2.im;
    comp sum = add_comp(c1, c2);
    comp diff = sub_comp(c1, c2);
    comp prod = prod_comp(c1, c2);
    comp quot = div_comp(c1, c2);
    cout << "\nSum = "<<sum.re<<" + "<<sum.im<<"i";
    cout << "\nDifference = "<<diff.re<<" + "<<diff.im<<"i";
    cout << "\nProduct = "<<prod.re<<" + "<<prod.im<<"i";
    cout << "\nQuotient = "<<quot.re<<" + "<<quot.im<<"i";
    return 0;
}
