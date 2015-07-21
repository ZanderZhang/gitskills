#include <iostream>
using namespace std;

void space(int count);
void space(int count,char ch);

int main()
{
    //有一个整数参数的函数指针
    void(*fp1)(int);
    void(*fp2)(int,char);

    fp1=space;
    fp2=space;

    fp1(120);
    cout <<"|"<<endl;
    fp2(120,'=');
    cout<<"|"<<endl;

    return 0;
}

//输出count个空格字符
void space(int count)
{
    for(;count;count--)cout<<' ';
}
//输出count个ch字符
void space(int count,char ch)
{
     for(;count;count--)cout<<ch;
}
