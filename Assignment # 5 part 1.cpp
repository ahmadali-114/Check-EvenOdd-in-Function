 #include <iostream>
using namespace std;

void checkEvenOdd()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
}

int main()
{
    checkEvenOdd();
    return 0;
}
