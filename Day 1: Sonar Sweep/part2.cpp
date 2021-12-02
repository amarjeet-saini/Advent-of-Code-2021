#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(void) {
    string filename("input.txt");
    vector<int> A ;
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

    int count = 0, prev = 0, curr = 0; 
    prev = A[0] + A[1] + A[2];
    for (int i = 1; i <= A.size()-3; ++i) {
        for(int k = 0,j = i; k < 3; ++j, ++k) curr += A[j];
        if (curr > prev) count++;
        prev = curr;  
        curr = 0;      
    }
    cout<<count<<endl;
    return 0;
}
