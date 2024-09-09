#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int make_change_greedy(vector<int> coins, int amount)
{
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());

    int count = 0;
    for (int coin : coins)
    {
        while (amount >= coin)
        {
            count++;
            amount -= coin;
        }
    }

    if (amount == 0)
    {
        return count;
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> coins = {1, 2, 5, 10, 20};
    int amount = 37;

    int min_coins = make_change_greedy(coins, amount);
    if (min_coins != -1)
    {
        cout << "Minimum number of coins needed: " << min_coins << endl;
    }
    else
     {
        cout << "Change cannot be made with the given coins." << endl;
    }

    return 0;
}