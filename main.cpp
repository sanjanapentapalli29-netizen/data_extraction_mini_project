#include "Data_extraction.h"
using namespace std;

int main() {
    string filename = "data/companies_Data_for_output_data_extraction_mini_project.csv";

    vector<Company> companies = readCSV(filename);

    cout << "=== Company Data Extracted ===" << endl;
    for (const auto& c : companies) {
        c.display();
    }

    return 0;
}

