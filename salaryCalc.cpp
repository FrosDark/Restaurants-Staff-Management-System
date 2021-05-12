/*The purpose of this program is to calculate the hourly wages of employees and a set salary rate for the Manager
code was modified from https://gist.github.com/twhittakerdev/2080368, employing the idea of code reuse*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//using a class here, if one desires to have different salary options for certain workers and such
//they are able to get a developer to add something here and call it.
class EmployeeSalary
{
public:
    /* hourly workers*/
    double CalculateHourlySalary(double hrRate, double hours)
    {
        if (hours <= 40)


            salary = hours * hrRate;

        else

            salary = 40.0 * hrRate + (hours - 40) * hrRate * 1.5;
        return salary;
    }


private:
    double salary;
};




int main()
{
    EmployeeSalary salary;
    int paycode=0;
    double mSalary;
    double hrRate;
    double hours;

    cout << endl << endl;
    cout << " *******************************************" << endl;
    cout << " %%%%%%% [-1] To End The Program:   %%%%%%%%" << endl;
    cout << " *******************************************" << endl;
    cout << " **** [1] Manager PayCode:            ******" << endl;
    cout << " **** [2] Hourly worker PayCode:      ******" << endl;
    cout << " *******************************************" << endl;


    while (paycode != -1)
    {
        cout << endl;
        cout << "Enter PayCode:" << " " << setiosflags(ios::fixed | ios::showpoint);
        cin >> paycode;
        cout << "*******************************************" << endl;
        cout << endl;



        if (paycode == 1)
        {
            /*Manager Fixed salary */

            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "^^^^ Manager PayCode Has been selected ^^^^" << endl;
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "Enter Salary: ";
            cin >> mSalary;
            while (mSalary < 7 || mSalary > 60)
            {
                cout << "Enter a reasonable salary.\n";
                cout << "Enter Salary: ";
                cin >> mSalary;
            }
            cout << "Manager's salary is: $" << setprecision(2) << mSalary << endl;
            cout << endl;
            cout << endl;
            system("pause");          //pause to allow the owner or someone to note down the values and double check it themselves.
        }



        if (paycode == 2)
        {

            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "^^^^^^^^   Hourly Worker PayCode   ^^^^^^^^" << endl;
            cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
            cout << "Enter Hour Rate:$ ";
            cin >> hrRate;
            while (hrRate < 7 || hrRate > 30)
            {
                cout << "Enter a reasonable hourly rate.\n";
                cout << "Enter Hour Rate:$ ";
                cin >> hrRate;
            }
            cout << "Enter hours worked: ";
            cin >> hours;
            cout << "Hourly worker's salary is:$ " << setprecision(2) << salary.CalculateHourlySalary(hrRate, hours) << endl;
            cout << endl;
            system("pause");
        }
        
        else
            cout << "Input Error" << endl;

    }



    return 0;
}