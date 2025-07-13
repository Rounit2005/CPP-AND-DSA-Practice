#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter your  Table nubber : ";
    cin >> x;
    for (int i = 1; i <= 10; i++)
    {
        cout << x << "x" << i << "=" << i * x << endl
             << endl;
    }
}