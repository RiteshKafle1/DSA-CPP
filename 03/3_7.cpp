#include <iostream>
using namespace std;

void fullPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        for (int k = 0; k < i + 1; k++)
            cout << "* ";

        cout << endl;
    }
}

int main()
{
    fullPyramid(20);
    return 0;
}
