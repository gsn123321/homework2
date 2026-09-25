// homework2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    //int a, b, c, d, e, f, g;
    //cin >> a >> b >> c >> d >> e >> f >> g;

    //int max = a;

    //if (b > max)
    //    max = b;

    //else if (c > max)
    //    max = c;

    //else if (d > max)
    //    max = d;

    //else if (e > max)
    //    max = e;

    //else if (f > max)
    //    max = f;

    //else if (g > max)
    //    max = g;

    //cout << "Max: " << max;


    // 2


    //int ab, bc, weight;
    //int fuel;

    //cin >> ab >> bc >> weight;

    //if (weight > 2000)
    //{
    //    cout << "Flight is impossible";
    //}

    //if (weight <= 500)
    //    fuel = 1;
    //else if (weight <= 1000)
    //    fuel = 4;
    //else if (weight <= 1500)
    //    fuel = 7;
    //else
    //    fuel = 9;

    //int fuelab = ab * fuel;
    //int fuelbc = bc * fuel;

    //if (fuelab > 300 || fuelbc > 300)
    //{
    //    cout << "Flight is impossible";
    //}
    //else
    //{
    //    int fuel = 300 - fuelab;

    //    if (fuelbc > fuel)
    //        cout << "Need to refuel: " << fuelbc - fuel << " liters";
    //    else
    //        cout << "No refueling needed";
    //}



    // 3

    //float sales1, sales2, sales3;
    //float salary1, salary2, salary3;

    //cin >> sales1 >> sales2 >> sales3;

    //if (sales1 < 500)
    //    salary1 = 200 + sales1 * 0.03;
    //else if (sales1 <= 1000)
    //    salary1 = 200 + sales1 * 0.05;
    //else
    //    salary1 = 200 + sales1 * 0.08;

    //if (sales2 < 500)
    //    salary2 = 200 + sales2 * 0.03;
    //else if (sales2 <= 1000)
    //    salary2 = 200 + sales2 * 0.05;
    //else
    //    salary2 = 200 + sales2 * 0.08;

    //if (sales3 < 500)
    //    salary3 = 200 + sales3 * 0.03;
    //else if (sales3 <= 1000)
    //    salary3 = 200 + sales3 * 0.05;
    //else
    //    salary3 = 200 + sales3 * 0.08;

    //if (salary1 >= salary2 && salary1 >= salary3)
    //{
    //    salary1 = salary1 + 200;
    //}
    //else if (salary2 >= salary1 && salary2 >= salary3)
    //{
    //    salary2 = salary2 + 200;
    //}
    //else
    //{
    //    salary3 = salary3 + 200;
    //}

    //cout << "Manager 1: " << salary1 << '\n';
    //cout << "Manager 2: " << salary2 << '\n';
    //cout << "Manager 3: " << salary3 << '\n';

    //4 


    int choice;

    cout << "1 - Calculate lines" << '\n';
    cout << "2 - Calculate lateness" << '\n';
    cout << "3 - Calculate salary" << '\n';

    cin >> choice;

    if (choice == 1)
    {
        int income, lateness;
        cin >> income >> lateness;
        int salary = income + lateness / 3 * (-20);
        int lines = income / 50 * 100;
        cout << "Lines: " << lines;
    }

    else if (choice == 2)
    {
        int lines, salary;
        cin >> lines >> salary;
        int money = lines / 100 * 50;
        int lateness = (money - salary) / 20 * 3;
        cout << "Lateness: " << lateness;
    }

    else if (choice == 3)
    {
        int lines, lateness;
        cin >> lines >> lateness;
        int salary = lines / 100 * 50;
        salary = salary - lateness / 3 * 20;
        if (salary > 0)
            cout << "Salary: " << salary;
        else
            cout << "Vasya will not receive money";
    }














}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
