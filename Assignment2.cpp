#include <iostream>
using namespace std;

// 1. Take two array as input, merge them and print it in reverse order using loop
// int main()
// {
//     int a, b;
//     cout << "Enetr the size of two array" << endl;
//     cin >> a >> b;
//     int A[a + b], B[b], i, j, k;
//     cout << "Enter the array elements of both the arrays";
//     for (i = 0; i < a; i++)
//     {
//         cin >> A[i];
//     }
//     for (j = 0; j < b; j++)
//     {
//         cin >> B[j];
//     }
//     for (int k = 0; k < b; k++)
//     {
//         A[a + k] = B[k];
//     }
//     cout << "Required Output:-" << endl;
//     for (i = ((a + b) - 1); i >= 0; i--)
//     {
//         cout << A[i] << " ";
//     }
// }

// 2. Write a C++ program to sort a given array using function.
// void bubble_sort(int arr[], int &n)
// {
//     for (int i = n - 1; i > 0; --i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 swap(arr[j], arr[j - 1]);
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     bubble_sort(arr, n);
//     cout << "Sorted array :-" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
// }

// 3. Write a C++ program to copy the elements of one array into another array.
// int main()
// {
//     int a;
//     cout << "Enetr the size of the array" << endl;
//     cin >> a;       // Taking the size of array user want to create
//     int A[a], B[a]; // initialising two arrays named A and B
//     cout << "Enter the array elements of the array" << endl;
//     for (int i = 0; i < a; i++)
//     {
//         cin >> A[i]; // Taking and creating an array named A
//     }
//     for (int i = 0; i < a; i++)
//     {
//         B[i] = A[i]; // Coping the array A to array B
//         // cout<<B[i]<<" "<<endl;//If u want u can comment out to verify
//     }
//     cout << "copied";
// }

// 4. Write a C++ program to find maximum occurring integer in an array.
// int mostFreqEle(int arr[], int n, int ar[])
// {
//     int maxcount = 0;
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         bool Exists = false;
//         for (int m = 0; m < k; m++)
//         {
//             if (ar[m] == arr[i])
//             {
//                 Exists = true;
//                 break;
//             }
//         }
//         if (Exists)
//             continue;
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//         }
//         if (count > maxcount || (count == maxcount))
//         {
//             maxcount = count;
//             ar[k] = arr[i];
//             ++k;
//         }
//     }
//     return k;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array" << endl;
//     cin >> n;
//     int arr[n], ar[n];
//     cout << "Enter the array" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     int k = mostFreqEle(arr, n, ar);
//     cout << "maximum occurring integer/s:-" << endl;
//     for (int i = 0; i < k; ++i)
//     {
//         cout << ar[i];
//     }
//     return 0;
// }

// 5. Write a C++ program to find the second smallest elements in a given array of integers(all elements of array distinct).
//  int main()
//  {
//      int a,min;
//      cout<<"Enter the size of the array"<<endl;
//      cin>>a;
//      int arr[a];
//      for(int i=0;i<a;i++)
//      {
//          cin>>arr[i];
//      }
//      int c;
//      for(int i=1;i<a;i++){
//          if(arr[0]>arr[i]){
//              c=arr[0];
//              arr[0]=arr[i];
//              arr[i]=c;
//          }
//      }
//      for(int i=2;i<a;i++){
//          if(arr[1]>arr[i]){
//              min=arr[1]=arr[i];
//          }
//          else min=arr[1];
//      }
//      cout<<min;
//  }

// 6. Write a C++ program that takes two 2D arrays (matrices) of size 3×3 as input from the user. First, the program should calculate and print the sum of the two original matrices. After that, it should compute the transpose of both the original matrices. Finally, the program should calculate and display the sum of the two transposed matrices as well.
// int main()
// {
//     int arr1[3][3], arr2[3][3], ar1[3][3], ar2[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << (arr1[i][j] + arr2[i][j]) << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             ar1[i][j] = arr1[j][i];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             ar2[i][j] = arr2[j][i];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << (ar1[i][j] + ar2[i][j]) << " ";
//         }
//         cout << endl;
//     }
// }

// 7.Find the Nth Fibonacci number using recursion.
// int fib(int a, int b, int n)
// {
//     int nt;
//     if (n == 0)
//         return 1;
//     else
//     {
//         nt = a + b;
//         cout << " " << nt;
//         return fib(b, nt, --n);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "0 1";
//     fib(0, 1, n - 2);
// }

// 8. Find the sum of digits of a number using recursion.
// int sum(int n)
// {
//     int rem = 0;
//     if (n == 0)
//         return 0;
//     else
//         return n % 10 + sum(n / 10);
// }
// int main()
// {
//     int n;
//     cout << "Enter a number:-"<<endl;
//     cin >> n;
//     cout << "Sum of the digits of a number is " << sum(n);
// }

// 9. Print all elements of an array using recursion.
// int print(int arr[], int n)
// {
//     if (n == 0)
//         return 0;
//     else
//     {
//         cout << *arr << " ";
//         print(arr + 1, --n);
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array:- " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Elements of an array are :- ";
//     print(arr, n);
// }
