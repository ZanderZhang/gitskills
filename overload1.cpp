#include <iostream>
using namespace std;

int fun(int a, int b);
int fun(int a, int &b);

int main (  )
{
        int x=1, y=2;
             cout << fun(x, y) << endl;    //这句编译时出错

                return 0;

}

int fun(int a, int b)
{
         return a + b;

}

int fun(int a, int& b)
{
         return a - b;

}
