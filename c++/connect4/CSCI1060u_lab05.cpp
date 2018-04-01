/*C++//, Version 0.2
  Copyright (c) 12:18 pm, oct 18, 2017  Matthew Lapres-Northey,
  All Rights Reserved.

   This program is used to produce data for factories in a company graphically
   there are three factories, each has a user defined number of plants.
   each plant has a user defined number of departments.
   the user will input the number of plants and the units produced by each department.
   the above step will repeat twice more, once for each factory.
   A graph will output showing the number of units in thousands produced by each factory.
*/

#include<iostream>//used for input and output
#include<cmath>//used to change from float to int

using namespace std;

// number of factories
const int kNumFactory = 3;

void GetData(int plants[], int numPlants);
void getThousands(int factoryInThousands[], int kNumFactory);
void displayGraph(const int unitsPerFactory[], int numFactory);
void getNumUnits(int& total);
int roundUnits(double units);
void showThousands(int n);

//initializes the array which stores the number of units
//converts that data to thousands
//converts each thousand to a '*'
//prints the graph to the screen
int main()
{
    int factories[kNumFactory];

    cout << "This program displays a graph showing\n"
         << "production for each factory in the company.\n";

    GetData(factories, kNumFactory);
    getThousands(factories, kNumFactory);
    displayGraph(factories, kNumFactory);

    return 0;
}

//this will get production data for the of plants.
//params:
void GetData(int plants[], int numPlants)
{
    for (int plantNum = 1;plantNum <= numPlants; plantNum++)
    {
        cout << endl << "Enter production data for plant number " << plantNum << endl;
        getNumUnits(plants[plantNum - 1]);
    }
}

//gets the number of units for each department from the user one at a time
//once the user is done, they type a negative number, ending the loop
void getNumUnits(int& total)
{
    cout << "Enter number of units produced by each department.\n"
         << "Enter a negative number to end the list.\n";

    total = 0;
    int num_units;
    cin >> num_units;

    while (num_units >= 0)
    {
        total = total + num_units;
        cin >> num_units;
    }

    cout << "Total = " << total << endl;
}

//fills the array b with values and returns the number of thousands
void getThousands(int factoryInThousands[], int kNumFactory)
{
    for (int index = 0; index < kNumFactory; index++)
    factoryInThousands[index] = roundUnits(factoryInThousands[index]/1000.0);
}

//returns the number of units rounded to the nearest thousand
//converts it to an integer
int roundUnits(double units)
{
    return static_cast<int>(floor(units + 0.5));
}

//A graph will output showing the number of units in thousands produced by each factory.
void displayGraph(const int unitsPerFactory[], int numFactory)
{
    cout << "\nUnits produced in thousands of units:\n";
    for (int plantNum = 1; plantNum <= numFactory; plantNum++)
    {
        cout << "Factory #" << plantNum << " ";
        showThousands(unitsPerFactory[plantNum - 1]);
        cout << endl;
    }
}

//displays a '*' for each thousand units produced per factory
void showThousands(int n)
{
    for (int count = 1; count <= n; count++)
        cout << "*";
}
