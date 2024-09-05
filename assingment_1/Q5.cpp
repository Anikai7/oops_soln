#include <bits/stdc++.h>

using namespace std;

int arr[] = {1, 3, 2, 4, 5, 6};

int numofElements();
void sumNavg();
void find();
void sort(bool);
void sortAscending();
void sortDecending();

int main()
{
    cout << numofElements()<<endl;

    sort(true);

    sumNavg();

    find();

    return 0;
}

int numofElements()
{

    int size = sizeof(arr) / sizeof(int);

    return size;
}

void sort(bool ascending)
{
    if (ascending)
    {
        sortAscending();
    }
    else
    {
        sortDecending();
    }
}

void sortDecending()
{
    int n = numofElements();
    bool swapped;
    
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void sortAscending()
{
    int n = numofElements();
    bool swapped;
    
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void sumNavg()
{

    int n = numofElements();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum is " << sum << " and Average is " << (sum / n) << endl;
}

void find()
{
    int min = INT_MAX, max = INT_MIN;
    int n = numofElements();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "min value is " << min << " and max value is " << " " << max << endl;
}
