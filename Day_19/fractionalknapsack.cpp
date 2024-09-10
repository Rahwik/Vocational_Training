#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Item 
{
public:
    int profit;
    int weight;

    Item(int profit, int weight) : profit(profit), weight(weight) {}

    // Method to calculate profit-to-weight ratio
    double ratio() const {
        return (double) profit / weight;
    }
};

// Comparator function to sort items by ratio in descending order
bool compare(const Item &a, const Item &b) {
    return a.ratio() > b.ratio();
}

double fractionalKnapsack(int capacity, vector<Item> &items, vector<double> &selectedFractions) {
    // Sort items by ratio in descending order
    sort(items.begin(), items.end(), compare);

    double totalValue = 0;
    double remainingCapacity = capacity;

    for (const Item &item : items) {
        if (item.weight <= remainingCapacity) {
            selectedFractions.push_back(1.0); // Add 1.0 for full item selection
            totalValue += item.profit;
            remainingCapacity -= item.weight;
        } else {
            double fraction = remainingCapacity / (double) item.weight;
            selectedFractions.push_back(fraction);
            totalValue += fraction * item.profit;
            break;
        }
    }

    return totalValue;
}

int main() {
    vector<int> profits = {60, 100, 120};
    vector<int> weights = {10, 20, 30};

    // Create a vector of Item objects
    vector<Item> items;
    for (size_t i = 0; i < profits.size(); ++i) {
        items.push_back(Item(profits[i], weights[i]));
    }

    int knapsackCapacity = 50;
    vector<double> selectedFractions;
    double maxTotalValue = fractionalKnapsack(knapsackCapacity, items, selectedFractions);

    cout << "Maximum Total Value: " << maxTotalValue << endl;
    cout << "Selected Items (fractions): ";
    for (double fraction : selectedFractions) {
        cout << fraction << " ";
    }
    cout << endl;

    return 0;
}