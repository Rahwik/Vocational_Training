//Harmonic Mean Calculation: Calculate the harmonic mean of a set of numbers. 
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

double harmonicMean(const vector<double>& numbers) {
    double sum = 0.0;
    for (const auto& num : numbers) {
        sum += 1.0 / num;
    }
    return numbers.size() / sum;
}

int main() {
    vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    double harmonic_mean = harmonicMean(numbers);
    cout << "Harmonic Mean: " << harmonic_mean << endl;
    return 0;
}