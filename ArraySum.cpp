#include <iostream>
using namespace std;

template <typename T>
T arraySum(T arr[], int size)
{
    // Initialize sum (works for int/double; assumes + is valid)
    T sum = T();

    // Add all elements
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    // Return sum
    return sum;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    double arr2[] = {1.1, 2.2, 3.3};

    cout << "Sum of int array: " << arraySum(arr1, 4) << endl;
    cout << "Sum of double array: " << arraySum(arr2, 3) << endl;

    return 0;
}
