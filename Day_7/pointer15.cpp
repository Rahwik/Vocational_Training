// Stock Buy And Sell
#include <iostream>
using namespace std;

int maxprofit(int* p, int s, int e)
{
    if (e <= s)
        return 0;
    int profit = 0;
    for (int i = s; i < e; i++)
    {
        for (int j = i + 1; j <= e; j++)
        {
            if (*(p + j) > *(p + i))
            {
                int curr = *(p + j) - *(p + i) + maxprofit(p, s, i - 1) + maxprofit(p, j + 1, e);
                profit = max(profit, curr);
            }
        }
    }
    return profit;
}

int main()
{
    int* price = new int[6]{7,1,5,3,6,4};
    // cout<<"enter the Prices of the Stocks : ";
    // int n;
    // cout<<"Enter the number of changes in teh markert";
    // cin>>n;
    // price = new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>price[i];
    // }
    int n = 6; //sizeof(price) / sizeof(price[0]);
    cout << "Maximum profit is " << maxprofit(price, 0, n - 1) << endl;
    delete[] price; // Don't forget to free the dynamically allocated memory
    return 0;
}