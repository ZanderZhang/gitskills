#include <iostream>
using namespace std;

float fun(float x);
double fun(double x);

int main (  )
{
        float f = 132.64;
            double d = 132.64;

                cout << fun(f) << endl;
                    cout << fun(d) << endl;
                        //cout << fun(5) << endl;    //编译错，参数5可以转换为float，也可转换为double
                        //
                        //    return 0;
                        //
}

float fun(float x)
{
         return x / 2.0 ;

}

double fun(double x)
{
         return x / 3.0;

}
