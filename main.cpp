#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double C;
    double F;

    // TODO: [Step 1] Input a Celcius degree as a "double" type value
    cin >> C;

    // TODO: [Step 2] Convert it to a Fahrenheit degree using the Formula F = (9 / 5.0)* C + 32
    F = (9 / 5.0) * C + 32;

    cout << setprecision(2) << fixed;
    // TODO: [Step 3] Print the converted Fahrenheit
    cout << "Celcius " << C << " is " << F << " Fahrenhiet" << endl;

    return 0;
}
