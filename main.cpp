#include <iostream>
using namespace std;

int main()
{
    string city;
    int temperature;
    int humidity;

    cout << "Enter city name: ";
    cin >> city;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter humidity: ";
    cin >> humidity;

    cout << "\n----- Weather Report -----" << endl;
    cout << "City: " << city << endl;
    cout << "Temperature: " << temperature << " C" << endl;
    cout << "Humidity: " << humidity << "%" << endl;

    if(temperature > 35)
        cout << "Weather: Hot";
    else if(temperature > 20)
        cout << "Weather: Pleasant";
    else
        cout << "Weather: Cold";

    return 0;
}