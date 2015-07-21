#include <iostream>
using namespace std;

class CA {
        int a;
    public:
        CA(){
                    a = 0;
                            cout << "构造函数： " << a << endl;

        }
        ~CA(){
                    cout << "析构函数： " << a << endl;

        }
        void setA(int x) {
                    a = x;

        }
        void print() {
                    cout << "print： " << a << endl;

        }

};

int main (  )
{
         CA ca;
             //ca.a = 10;    //成员变量a是私有的，不能直接访问
                ca.setA(10);
                     ca.print();
             //
                         return 0;
             //
}
