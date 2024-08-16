// Stock Buy And Sell
#include <iostream>
using namespace std;

int maxprofit1(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit = profit + (price[i] - price[i - 1]);
        }
    }
    return profit;
}

int maxprofit2(int p[], int s, int e)
{
    if (e <= s)
        return 0;
    int profit = 0;
    for (int i = s; i < e; i++)
    {
        for (int j = i + 1; j <= e; j++)
        {
            if (p[j] > p[i])
            {
                int curr = p[j] - p[i] + maxprofit2(p, s, i - 1) + maxprofit2(p, j + 1, e);
                profit = max(profit, curr);
            }
        }
    }
    return profit;
}

int main()
{
    int price[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum profit is " << maxprofit2(price, 0, n - 1) << endl;
    cout << "Maximum profit is " << maxprofit1(price, n) << endl;
    return 0;
}