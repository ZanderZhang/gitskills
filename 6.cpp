#include <iostream>
#include <string>

using namespace std;

int main()
{
    string strA("C语言中文网");
    cout <<strA<<"  "<<strA.length()<<endl;
    string strB;
    strB = string("C++60分钟入门教程");
    cout <<strB<<"  "<<strB.length()<<endl;
    string *strC;
    strC= new string("http://see.baidu.com");
    cout <<*strC<<"  "<<strC->length()<<endl;
    delete strC;


    return 0;
}
