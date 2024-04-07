#include<iostream>
double exp(int x,int n){
 static double s=1;
 if(n==0){
    return s;
 }
 s=1+(x*s)/n;
 return exp(x,n-1);
}
int main(){

    std:: cout<<exp(1,100);
    return 0;
}