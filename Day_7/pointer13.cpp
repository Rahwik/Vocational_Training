//Stock Buy And Sell
#include <iostream>
using namespace std;

int maxprofit(int price[], int start, int end) {
    if (end <= start)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (price[j] > price[i]) {
                int currprofit = price[j] - price[i] + maxprofit(price, start, i - 1) + maxprofit(price, j + 1, end);
                profit = max(profit, currprofit);
            }
        }
    }
    return profit;
}

int main() {
    int price[] = {1, 5, 3, 1, 2, 8};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum profit is " << maxprofit(price, 0, n - 1) << endl;
    return 0;
}