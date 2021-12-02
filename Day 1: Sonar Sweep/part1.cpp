#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void) {
    // input obtained from https://adventofcode.com/2021/day/1/input
    
    // read from file and insert all integers into vector
    string filename("input.txt");
    vector<int> A;
    int number;

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '"
             << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (input_file >> number) {
        A.push_back(number);
    }

    int count = 0; 
    for (int i = 0; i < A.size(); ++i) {
        while ((i < A.size() - 1) && (A[i] < A[i+1])) {
            count++;
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
}
