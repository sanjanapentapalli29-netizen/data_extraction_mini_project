
#ifndef DATA_EXTRACTION_H
#define DATA_EXTRACTION_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>   // for atof()

using namespace std;

class Company {
private:
    string name;
    string sector;
    double revenue;

public:
    Company(string n, string s, double r);
    string getName() const;
    string getSector() const;
    double getRevenue() const;
    virtual void display() const;
};

// Function declaration
vector<Company> readCSV(const string& filename);

#endif

