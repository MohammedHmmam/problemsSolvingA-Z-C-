#include <iostream>

using namespace std;

int main()
{
    int length;
    int width;
    float area;

    cout << "This program created for Calculate Rectangle area!! \n";

    cout << "Enter Rectangle Length:\n";
    cin >> length;

    cout << "Enter Rectangle Width: \n";
    cin >> width;

    area = width * length;

    cout << "Rectangle Area = " << area <<  " \n";

    return 0;
}

