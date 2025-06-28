#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main() {
    // Read the value of n from the input file
    int n;
    fin >> n;

    // Handle base cases
    if (n == 0) {
        fout << 0 << endl;
        return 0;
    } else if (n == 1) {
        fout << 1 << endl;
        return 0;
    }

    // Use two variables to store the last two Fibonacci numbers
    int prev2 = 0, prev1 = 1, current;

    // Compute the n-th Fibonacci number iteratively
    for (int i = 2; i <= 6; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    // Output the result to the output file
    fout << current << '\n';

    return 0;
}
