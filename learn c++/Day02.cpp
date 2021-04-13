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

/*
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
*/


#include<iostream>
using namespace std;

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}

/*
定义成 const 后的常量，程序对其中只能读不能修改。

以下程序是错误的，因为开头就已经固定了常量，便不能再对其进行赋值：

#include <iostream>
using namespace std;
int main()
{
    const double pi;                      //圆周率的值用pi表示
    pi=3.14159265;
    cout<<"圆周率的近似值是"<<pi<<endl;
    return 0;
}
下面给出正确的赋值方法:

#include <iostream>
using namespace std;
int main()
{
    const double pi=3.141592;            //圆周率的值用pi表示
    cout<<"圆周率的近似值是"<<pi<<endl;
    return 0;
}
*/

/*
宏定义 #define 和常量 const 的区别
类型和安全检查不同

宏定义是字符替换，没有数据类型的区别，同时这种替换没有类型安全检查，可能产生边际效应等错误；

const常量是常量的声明，有类型区别，需要在编译阶段进行类型检查

编译器处理不同

宏定义是一个"编译时"概念，在预处理阶段展开，不能对宏定义进行调试，生命周期结束与编译时期；

const常量是一个"运行时"概念，在程序运行使用，类似于一个只读行数据

存储方式不同

宏定义是直接替换，不会分配内存，存储与程序的代码段中；

const常量需要进行内存分配，存储与程序的数据段中

定义域不同

void f1 ()
{
    #define N 12
    const int n 12;
}
void f2 ()
{
    cout<<N <<endl; //正确，N已经定义过，不受定义域限制
    cout<<n <<endl; //错误，n定义域只在f1函数中
}
定义后能否取消

宏定义可以通过#undef来使之前的宏定义失效

const常量定义后将在定义域内永久有效

void f1()
{
  #define N 12
  const int n = 12;

  #undef N //取消宏定义后，即使在f1函数中，N也无效了
  #define N 21//取消后可以重新定义
}
是否可以做函数参数

宏定义不能作为参数传递给函数

const常量可以在函数的参数列表中出现
*/

