#include<iostream>
using namespace std;
int main(){
    int a,k=2*a;
    cout<<"entre a no of digit";
    cin>>a;
    for(int i=1;i<=a;i++){
       
        for(int j=1;j<=i;j++){
       
           cout<<j;
           
           
        } 
        for(int j=a;j>i;j--){
            cout<<"  ";
        
           
           
           
        }
         for(int j=i;j>0;j--){
       
            cout<<j;  
           
           
        }
           
           
        
        
        cout<<endl;
    


        }

        return 0;
    
}