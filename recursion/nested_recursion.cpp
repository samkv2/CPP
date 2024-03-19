#include<iostream>
int fun(int x){
    if(x>100){
        return x-10;
    }
    return fun(fun(x+11));
}
int main(){
    std::cout<<" "<<fun(96);
    return 0;
}