#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// 1.Write a program to print the numbers from 1 to 100, but replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible by both print “FizzBuzz”.
//  int main()
//  {
//      for(int i=1;i<=100;++i)
//      {
//          if(i%15==0)    cout<<"FizzBuzz"<<" ";
//          else if(i%3==0)   cout<<"Fizz"<<" ";
//          else if(i%5==0)    cout<<"Buzz"<<" ";
//          else    cout<<i<<" ";
//      }
//  }

// 2.Write a C++ program to input 3 sides of triangle and a triangle can be drawn from it or not, if triangle can be drawn then check if it is equilateral, isosceles or scalene triangle.
// int main()
// {
//     int s1, s2, s3;
//     cout << "Enter the three sides of a triangle";
//     cin >> s1 >> s2 >> s3;                                  // let s1,s2,s3 be three sides of a triangle
//     if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)) // From triangle inequality theorem
//     {
//         if ((s1 == s2) && (s2 == s3))
//             cout << "Equilateral Triangle";
//         else if ((s1 == s2) || (s2 == s3) || (s1 == s3))
//             cout << "Isosceles Triangle";
//         else
//             cout << "Scalene Triangle";
//     }
//     else
//         cout << "Triangle cannot be formed";
// }

// 3.Write a C++ program to find the largest digit in a number.
//  int main()
//  {
//      int num,ld=0;//let num be the input numner,ld be largest digit
//      cin>>num;
//      for (int i=num;i;i/=10)
//      {
//          if(ld<=i%10)
//              ld=i%10;
//      }
//      cout<<ld;
//  }

// 4.Write a C++ program to input a decimal number and convert it into binary and octal number system using loops.
// int main()
// {
//     int x, cnt = 0, flag = 0;
//     cin >> x;
//     for (int i = x; i > 0; i /= 2)
//     {
//         cnt += 1;
//     }
//     for (int i = x; i > 0; i /= 8)
//     {
//         flag += 1;
//     }
//     int a[flag], b[cnt], i, j;
//     for (i = x, j = 0; i > 0; i /= 8, ++j)
//     {
//         a[j] = i % 8;
//     }
//     cout << "Octal representation: ";
//     for (i = (flag - 1); i >= 0; --i)
//     {
//         cout << a[i];
//     }
//     for (i = x, j = 0; i > 0; i /= 2, ++j)
//     {
//         b[j] = i % 2;
//     }
//     cout << endl
//          << "Binary representation: ";
//     for (i = (cnt - 1); i >= 0; --i)
//     {
//         cout << b[i];
//     }
// }

// 5.Write a C++ program to check if a Number is Perfect square using loops.
// int main()
// {
//     int n, flag = 0;
//     cin >> n;
//     for (int i = 2; i * i <= n; ++i)
//     {
//         if (i * i == n)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag)
//         cout << n << " is a perfect square";
//     else
//         cout << n << " is not a perfect square";
// }

// 6.Write a C++ program to print the pattern
// int main()
// {
//     int n;
//     cout << "For n= ";
//     cin >> n;
//     for (int i = 1; i <= n; ++i)
//     {
//         for (int j = 1; j <= n; ++j)
//         {
//             for (int k = 1; k <= i; ++k)
//             {
//                 cout << j;
//             }
//         }
//         cout << endl;
//     }
// }

// 7.Write a C++ program to print the pattern
//  int main()
//  {
//      int n,p=1;;
//      cout<<"For n= ";
//      cin>>n;
//      for(int i=0;i<3;++i)
//      {
//          for (int j=0;j<((2*n)-1);++j)
//          {
//              if(j%2==0)
//              {
//                  cout<<p;
//                  ++p;
//              }
//              else
//                  cout<<"*";
//          }
//          cout<<endl;
//      }
//  }

// 8. Write a C++ program to print the pattern
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; ++i)
//     {
//         int k = 1;
//         for (int j = 1; j <= (2 * n); ++j)
//         {
//             if (j <= i)
//             {
//                 cout << j;
//                 k = j;
//             }
//             else if (j > (2 * n) - i)
//             {
//                 cout << k;
//                 --k;
//             }
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     int a,b,t,j=0,i=0;
//     cin>>t;
//     for ( i = 0; i < t; i++)
//     {
//         cin >>a>>b;
//     }
//     for (i = 0; i < t; i++)
//     {
//         j=0;
//         while(j){
//             if(a%b==0){
//                 break;
//             }
//             a++;
//             j++;
//         }
//     }
//     cout<<i<<endl;
// }