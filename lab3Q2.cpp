// 2. Create a class Date with data members as dd, mm, yy.
// Create AcceptDate function. Also add the display function.
// Create the object of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class Date
{
private:
    int dd, mm, yy;

public:
    Date()
    {
        dd = 11;
        mm = 05;
        yy = 2000;
    }

public:
    void AcceptDate()
    {
        cout << "Enter you Date in DD-MM-YY: ";
        cout << "Date: ";
        cin >> dd;
        cout << "Month: ";
        cin >> mm;
        cout << "Year: ";
        cin >> yy;
    }

public:
    void Display()
    {
        cout << "Date Entered is : " << dd << "-" << mm << "-" << yy << endl;
    }
};
int main()
{
    Date dt;
    Date();
    dt.AcceptDate();
    dt.Display();
}
