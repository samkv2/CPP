#include<iostream>
using namespace std;
void calc(int x){
    if(x>0){
       cout<<" "<<x;
       calc(x-1);
       calc(x-1);
    }
}
int main(){
    calc(3);
    return 0;
}
