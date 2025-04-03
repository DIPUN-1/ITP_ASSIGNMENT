#include<iostream>
using namespace std;
 void swap(int& i ,int& j,int& k){
    int t;
    t=i;
    i=j;
    j=k;
    k=t;
    
 }
int main(){ 
    int a,b,c,d=1;

    cout<<"entre three possible sides of a triangle";
    cin>>a>>b>>c;

    for(int i=0;i<3;i++){
        if(a+b<=c){
    
          d=0;
        }
        swap(a,b,c);  
    }
    if (d){
        cout <<"triangle is possible"<<endl;
       if(a==b&&b==c){
        cout<<"equilateral triangle";
       }
       else if(a!=b&&b!=c&&a!=c){
        cout<<"scalen triangle";
       }
       else{cout<<"isoscale  triangle";}
       
      

    

    }
    else{
        cout << "triangle not possible";
        }
    
    
    
    return 0;
}