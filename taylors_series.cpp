#include<iostream>
double taylor(int x,int n){
    static double p=1, f=1;

    if(n==0){
        return 1;
    }
        double term = taylor(x, n - 1);
        p *= x;
        f *= n;
        return term + (p/f);
}
int main(){
    std::cout<<"Enter base and power respectively:";
    int x,n;
    std::cin>>x>>n;
    std::cout<<"Exponent "<<x<<" to power raise "<<n<<" is "<<taylor(x,n);
    return 0;
}