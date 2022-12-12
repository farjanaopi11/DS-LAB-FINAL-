#include <iostream>
using namespace std;

void inputarray(int *a, int s)
{
  cout << "Please enter the elements of the array: ";
  for (int i = 0; i < s; i++)
  {
    cin >> a[i];
  }
}
void printarray(int *a, int s)
{
  for (int i = 0; i < s; i++)
  {
    cout << a[i] << " ";
  }
}
void bubblesort(int *a, int s)
{
  for (int i = 0; i < s; i++)
  {
    for (int j = 0; j < s - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
void selectionsort(int *a, int s)
{
  for (int i = 0; i < s - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < s; j++)
    {
      if (a[j] < a[min_index])
      {
        min_index = j;
      }
    }
    int temp = a[min_index];
    a[min_index] = a[i];
    a[i] = temp;
  }
}

int insertionsort(int arr[], int size_arr)
{
  int i, j, n, temp;

  for (i = 1; i < size_arr; i++)
  {
    j = i - 1;
    temp = arr[i];
    for (j; j >= 0; j--)
    {
      if (arr[j] > temp)
      {
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
    arr[j] = temp;
  }
}
void linearsearch(int *a, int s, int item)
{
  int counter = -1, i;
  for (i = 0; i < s; i++)
  {
    if (item == a[i])
    {
      counter = i;
    }
  }
  if (counter >= 0)
  {
    cout << item << " found at index no " << counter << " in the given array" << endl;
  }
  else
  {
    cout << item << " is not found in the given array" << endl;
  }
}
int binarysearch(int *a, int item2, int low, int high)
{
  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (a[mid] == item2)
      return mid;

    if (a[mid] < item2)
      low = mid + 1;

    else
      high = mid - 1;
  }
  return -1;
}

int main()
{
  int s, item1, item2;
  cout << "Please enter the size of the array :";
  cin >> s;
  int *arr = new int[s];
  inputarray(arr, s);
  cout << "The unsorted array is : ";
  printarray(arr, s);
  cout<<endl;
  cout << "The sorted array after applying selection sort: ";
  selectionsort(arr, s);
  printarray(arr, s);
  bubblesort(arr, s);
  cout << endl;
  cout << "The sorted array after applying bubble sort: ";
  printarray(arr, s);
  cout << endl;
  cout << "The sorted array after applying insertion sort: ";
  insertionsort(arr, s);
  printarray(arr, s);
  cout << endl;
  cout << "Please enter the number to apply linear search :";
  cin >> item1;
  linearsearch(arr, s, item1);
  cout << "Please enter the number to apply binary search :";
  cin >> item2;
  selectionsort(arr, s);
  int result = binarysearch(arr, item2, 0, s - 1);
  cout << result << endl;
  if (result == -1)

    cout << "Not found" << endl;

  else

    cout << item2 << " found at " << result << " position in the given array" << endl;

  return 0;
}
