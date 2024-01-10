#include <bits/stdc++.h>
using namespace std;

void printEvenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}

int main()
{
    int start, end;

    string lessThanNine[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> start;
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if (i <= 9)
            cout << lessThanNine[i] << endl;
        else
        {
            printEvenOrOdd(i);
        }
    }
    return 0;
}
