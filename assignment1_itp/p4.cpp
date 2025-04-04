// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int a,b=0,o=0,j,n=0,m=0;
//     cout<<"enter a number";
//     cin >>a;
//     for(int i=a; i>0;i/=2){
//         j=i%2;
//         if(j==0){
//             b=b/10;
//          }

//         else{ b=b/10+j;}
//         n++;
//     }
//     for(int i=a; i>0;i/=8){
//         j=i%8;
//         o=j*10+o;
//         m++;
//     }
//     b=b*pow(10,n);
//     o=o*pow(10,m);
//     cout<<a<<"in  binary form is "<<b<<endl;
//     cout<<a<<"in octal form is "<<o<<endl;



//     return 0;
    

 

// }

#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binaryNum[32], i = 0;
    
    while (num > 0) {
        binaryNum[i] = num % 2;
        num /= 2;
        i++;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert decimal to octal
void decimalToOctal(int num) {
    int octalNum[32], i = 0;
    
    while (num > 0) {
        octalNum[i] = num % 8;
        num /= 8;
        i++;
    }

    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << octalNum[j];
    }
    cout << endl;
}

int main() {
    int decimal;





    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    
    decimalToBinary(decimal);
    decimalToOctal(decimal);

    return 0;
}
