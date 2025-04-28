/***************************************************
* Code your program here
 ***************************************************/
#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

inline int writeFile(const string &fileName) {
    int employeeCount;
    cin >> employeeCount;

    ofstream outFile(fileName);

    for (int i = 0; i < employeeCount; i++) {
        int id;
        string name;
        string department;
        int salary;
        cin >> id >> name >> department >> salary;
        outFile << id << " " << name << " " << department << " " << salary << endl;
    }
    outFile.close();


    return employeeCount;
}

inline int readFile(const string &fileName) {
    ifstream inFile(fileName);

    int totalSalary = 0;
    int id;
    int salary;
    string name;
    string department;

    int count = 0;
    while (inFile >> id >> name >> department >> salary) {
        cout << id << " " << name << " " << department << " " << salary << endl;
        totalSalary += salary;
        count++;
    }
    inFile.close();

    cout << "Total: " << totalSalary << " Average: " << (totalSalary / count) << endl;
    return count;
}
