#include<iostream>
int fact(int x){
    if(x==0){
        return 1;
    }
    else
     return fact(x-1)*x;
}
int NnCr(int n,int r){
        int num=fact(n);
        int den=fact(r)*fact(n-r);
        return num/den;
}
int RnCr(int n, int r){
    if(n==r||r==0){
        return 1;
    }
    else
     return RnCr(n-1,r-1)+RnCr(n-1,r);
}
int main(){
    std::cout<<"nCr using normal factorial formulae: "<<NnCr(5,0);
    std::cout<<"\nnCr using recursive factorial formulae: "<<RnCr(5,3);
    return 0;
}