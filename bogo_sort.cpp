#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
    while (--n >= 1)
    {
        cout << "n = " << n << "\n";
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

void shuffle(int a[], int n)
{
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

void bogoSort(int a[], int n)
{
    while (!isSorted(a, n))
        shuffle(a, n);
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "|";
}

int main()
{
    int a[] = {3, 2, 5, 1, 0, 4, 6};
    int n = sizeof a / sizeof a[0];
    bogoSort(a, n);
    cout << "Bogo Sort: \n";

    printArray(a, n);
    return 0;
}