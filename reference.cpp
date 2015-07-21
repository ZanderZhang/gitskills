#include <iostream>
using namespace std;

int main(  )
{
        int a ;
            int &b = a;    //b和a实际上是同一变量

                b = 100;       //b赋值为100，也就是a赋值为100
                    cout << a << endl;

                        //a的地址和b的地址应该是完全一样
                            cout << &a << endl;
                            cout << &b << endl;
                        //
                        //            /*-------▼下面代码有错，注释后才能运行▼-----------
                        //                int x[] = {12,15,20} ;
                        //                    int &y = x;    //错误：数组、指针不能被引用
                        //
                        //                        int x1;
                        //                            int &y1;    //错误：引用时必须初始化
                        //                                y1 = x1;
                        //                                    -------▲上面代码有错，注释后才能运行▲-----------*/
                        //
                        //                                        return 0;
                        //
}
