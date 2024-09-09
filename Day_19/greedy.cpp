#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> mincoin(int amount, vector<int>& coins)
{
    sort(coins.begin(), coins.end(), greater<int>());
    vector<int> change;
    for (int coin : coins)
    {
        while (amount >= coin)
        {
            amount = amount - coin;
            change.push_back(coin);
        }
    }
    return change;
}

int main()
{
    int amount = 1423;
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    vector<int> purse = mincoin(amount, coins);
    
    cout << "Minimum coins required: " << purse.size() << endl;
    cout << "Coins: ";
    for (int coin : purse)
    {
        cout << coin << " ";
    }
    cout << endl;

    return 0;
}