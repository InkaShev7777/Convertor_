#include <iostream>
#include"c_convertor.h"
using namespace std;
int main()
{
    int v;
    double val;
    cout << "\t\tMENU\n";
    cout << "1 - Convert from Km to M\n";
    cout << "2 - Convert from ML to L\n";
    cout << "3 - Convert from T to KG\n";
    cout << "Enter your choice: ";
    cin >> v;

    if (v == 1)
    {
        cout << "Enter value: ";
        cin >> val;
        c_convertor conv(val);
        conv.convert_from_km_to_m();
    }
    if (v == 2)
    {
        cout << "Enter value: ";
        cin >> val;
        c_convertor conv(val);
        conv.convert_from_ml_to_L();
    }
    if (v == 3)
    {
        cout << "Enter value: ";
        cin >> val;
        c_convertor conv(val);
        conv.convert_from_T_to_kg();
    }
    if (v < 0 || v > 3)
    {
        cout << "\nYou made the wrong choice!!!\n";
    }
}

