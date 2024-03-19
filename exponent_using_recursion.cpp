#include<iostream>
int exp(int m, int n){
    if(n==0){
        return 1;
    }
    else{
        return exp(m,n-1)*m;
    }
}
int main(){
    std::cout<<"Exponent of 2 in first 10 naturals:"<<std::endl;
    for(int i=1;i<=10;i++){
        std::cout<<" "<<exp(2,i);
    }
    return 0;
}