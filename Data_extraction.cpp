#include "Data_extraction.h"


Company::Company(string n, string s, double r) : name(n), sector(s), revenue(r) {}

string Company::getName() const { return name; }
string Company::getSector() const { return sector; }
double Company::getRevenue() const { return revenue; }

void Company::display() const {
    cout << "Company: " << name
         << "Sector: " << sector
         << "Revenue: " << revenue << endl;
}

vector<Company> readCSV(const string& filename) {
    vector<Company> companies;
    ifstream file(filename.c_str()); 

    if (!file.is_open()) {
        cerr << "Error: Could not open file!" << endl;
        return companies;
    }

    string line;
    getline(file, line); 

    while (getline(file, line)) {
        stringstream ss(line);
        string companyName, sector, revenueStr;

        getline(ss, companyName, ',');
        getline(ss, sector, ',');
        getline(ss, revenueStr, ',');

        double revenue = atof(revenueStr.c_str()); 
        companies.push_back(Company(companyName, sector, revenue));
    }

    file.close();
    return companies;
}

