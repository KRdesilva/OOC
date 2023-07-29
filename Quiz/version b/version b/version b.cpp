// version b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Lab.h"

using namespace std;

int main()
{
    Lab* lab[3];

    lab[0] = new Lab(401, 60);
    lab[1] = new Lab(402, 40);
    lab[2] = new Lab(403, 30);


    int g_cap;

    cout << "Enter capacity: ";
    cin >> g_cap;

    cout << endl;


    cout << "Insert capacity : "
        << g_cap
        << endl;

    if (g_cap <= lab[2]->getCapacity() ) {
        cout << "lab     :" << 403
        << endl;
    }

    else if (g_cap <=lab[1]->getCapacity() ) {
        cout << "lab     :" << 402 
            << endl;

    }

    else {
        cout << "lab     :" << 401 
            << endl;

    }

    int i = 0;
    for (i = 0; i < 2; i++)
    {
        delete lab[i];
    }

    return 0;
}

