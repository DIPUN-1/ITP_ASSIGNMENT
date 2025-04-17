#include <iostream>
#include <cctype>
using namespace std;
// 1. Write a C++ program to move all the negative elements to one side of the array
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
//     cout << "After moving all the negative elements to one side of the array :-" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
// }

// 2. Write a C++ program to find the total number of alphabets, digits and special characters in a string.
// int main()
// {
//     int alpha = 0, dig = 0, sp = 0;
//     string a;
//     cout<<"Enter string:-"<<endl;
//     cin >> a;
//     int n = a.length();
//     for (int i = 0; i < n; i++)
//     {
//         if (isalpha(a[i]))
//         {
//             alpha++;
//         }
//         else if (isdigit(a[i]))
//         {
//             dig++;
//         }
//         else
//         {
//             sp++;
//         }
//     }
//     cout << "The no. of alphabets: " << alpha << endl;
//     cout << "The no. of digits:" << dig << endl;
//     cout << "The no. of special characters " << sp;
// }

// 3. Write a C++ program to remove all characters except alphabets in a string.
//  int main()
//  {
//      string a,b;
//      cout<<"Enter the String";
//      cin >> a;
//      int n = a.length();
//      for (int i = 0; i < n; i++)
//      {
//          if (isalpha(a[i]))
//          {
//              b+=a[i];
//          }
//      }
//      cout<<"Only Alphabet array:-"<<endl;
//      cout<<b;
//  }

// 4. Write a C++ program to rotate an array to the right by k positions.
// int main()
// {
//     int n, k;
//     cout << "Enter the size of the array:-" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the positions" << endl;
//     cin >> k;
//     for (int i = 0; i < k; i++)
//     {
//         int temp = arr[n - 1];
//         for (int j = n - 1; j > 0; --j)
//         {
//             arr[j] = arr[j - 1];
//         }
//         arr[0] = temp;
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i];
//     }
// }

// 5. Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements.
// int main()
// {
//     int n;
//     cout << "Enter the size of array:-" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 for (int k = j; k < n - 1; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     cout << "Array after deleting duplicate values:-" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }
// }

// 6. Write a C++ program to convert a string to lowercase without using inbuilt functions.
// int main()
// {
//     string a;
//     cout << "Enter string:-" << endl;
//     cin >> a;
//     for (int i = 0; i < a.length(); ++i)
//     {
//         if (int(a[i]) >= 65 && a[i] <= 90)
//         {
//             a[i] = char(int(a[i]) + 32);
//         }
//     }
//     cout << "The whole string in lower case is:-" << endl
//          << a;
// }

// 7. Write a C++ program to remove all occurrences of a given character from a string.
// int main()
// {
//     string a;
//     char s;
//     cout << "Enter a string:-" << endl;
//     cin >> a;
//     cout << "Enter a character u want to remove:-" << endl;
//     cin >> s;
//     for (int i = 0; i < a.length(); i++)
//     {
//         if (s == a[i])
//         {
//             for (int j = i; j < a.length(); ++j)
//             {
//                 a[j] = a[j + 1];
//             }
//             i--;
//         }
//     }
//     cout << "After removing the character the string is :-" << endl
//          << a;
// }

// 8. Write a C++ program to check whether a given string is a palindrome. (without using any built-in reverse function)
// int main()
// {
//     string a;
//     int count = 0;
//     cout << "Enter string:-" << endl;
//     cin >> a;
//     for (int i = 0, j = (a.length() - 1); i < ((a.length() - 1) / 2); ++i, --j)
//     {
//         if (a[i] == a[j])
//         {
//             count++;
//         }
//     }
//     if (count == ((a.length() - 1) / 2))
//     {
//         cout << a << " is a palindrome.";
//     }
//     else
//     {
//         cout << a << " is not a palindrome.";
//     }
// }