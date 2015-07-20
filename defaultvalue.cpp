#include <iostream>
using namespace std;

int sum(int x=0,int y=100,int z=0){return x+y+z;}

int main(){
    cout <<sum()<<endl;
    cout <<sum(6)<<endl;
    cout <<sum(6,10)<<endl;
    cout <<sum(6,10,20)<<endl;

    return 0;
}
