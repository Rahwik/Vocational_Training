//Geometric Mean Calculation: Calculate the geometric mean of a set of numbers. 
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double geometricMean(const vector<double>& numbers) {
    double product = 1.0;
    for (const auto& num : numbers) {
        product *= num;
    }
    return pow(product, 1.0 / numbers.size());
}

int main() {
    vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    double geometric_mean = geometricMean(numbers);
    cout << "Geometric Mean: " << geometric_mean << endl;
    return 0;
}