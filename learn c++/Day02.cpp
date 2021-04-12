/*
#include<iostream>

using namespace std;

//*变量声明
extern int a,b;
extern int c;
extern float f;

int main()
{
    //*变量定义
    int a,b;
    int c;
    float f;

    //!实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    f = 70.0/3.0;
    cout << f << endl;
    
    return 0;
}
*/

/*
// 函数声明
int func();
//!通常在实际使用中，函数声明会在.h文件里 

int main()
{
    // 函数调用
    int i = func();
}
 
// 函数定义
int func()
{
    return 0;
}
*/

// 定义常量
#define identifier value

#include<iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;
    area = LENGTH*WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}