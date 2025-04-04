#include<iostream>
using namespace std;
int main(){
int i,k,l,largest;
l=0;
cout<<"entre a number ";
cin>>i;
for(int j=i;j>0;j/=10){
    k=j%10;
   // i=i/10;
    
    if(k>l){
        largest=k;
    }
    l=k ;

}
cout<<largest <<" is the largest digit";
return 0;



}