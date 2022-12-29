#include <iostream>
using namespace std;

bool checkEvenOdd(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (checkEvenOdd(num))
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
    return 0;
}
