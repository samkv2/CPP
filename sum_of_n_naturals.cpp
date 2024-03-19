#include<iostream>
int sumN(int n){
    if(n>=1){
        return n+sumN(n-1);
    }
    return 0;
}
int main(){
    std::cout<<"Enter how much integer you want to sum:";
    int x;
    std::cin>>x;
    std::cout<<" Sum of "<<x<<" Natural numbers is "<<sumN(x);
    return 0;
}