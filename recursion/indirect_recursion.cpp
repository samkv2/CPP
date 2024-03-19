#include<iostream>
void funB(int n);
void funA(int x){
    if(x>0){
        std::cout<<" "<<x;
        funB(x-1);
    }
}
void funB(int x){
    if(x>1){
        std::cout<<" "<<x;
        funA(x/2);
    }
}
int main(){
    funA(20);
    return 0;
}