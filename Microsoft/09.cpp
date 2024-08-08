//Power of Two Check: Check if a number is a power of two. 
//Count Set Bits: Count the number of 1s in the binary representation of a number. 
#include <iostream>
using namespace std;

int countSize(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}


int main() {

    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int result = countSize(n);
    if(result == 1){
    cout << "Number is in power of two: " << n << endl;
    }
    else{
        cout << "Number is not in power of two: " << n << endl;
    }
    return 0;
}