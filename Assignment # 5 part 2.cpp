 #include <iostream>
using namespace std;

bool checkEvenOdd()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    if (checkEvenOdd())
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;
    return 0;
}
