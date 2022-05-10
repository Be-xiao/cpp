/*
#include<iostream>
using namespace std;

int main(){
    cout <<"Hello World"<<endl;
    return 0;
}
*/

/*
?C++中 "\n" 与 endl 的区别是什么?
 
这两个在输出上是一样的！

关于 endl:

1、在 C++ 中，终端输出换行时，用 cout<<......<<endl 与 "\n" 都可以，这是初级的认识。
但二者有小小的区别，用 endl 时会刷新缓冲区，使得栈中的东西刷新一次，但用 "\n" 不会刷新，
它只会换行，盏内数据没有变化。但一般情况，二者的这点区别是很小的，在大的程序中可能会用到。
建议用 endl 来换行。

2、endl 除了写 '\n' 进外，还调用 flush 函数，刷新缓冲区，把缓冲区里的数据写入文件或屏幕.
考虑效率就用 '\n'。

3、cout *lt;< endl; 除了往输出流中插入一个 '\n' 还有刷新输出流的作用。

cout << endl; 
等价于: 
\cout << '\n' << flush;
在没有必要刷新输出流的时候应尽量使用 cout << '\n', 过多的 endl 是影响程序执行效率低下的因素之一。

"\n" 表示内容为一个回车符的字符串。std::endl 是流操作子，输出的作用和输出 "\n" 类似，但可能略有区别。

std::endl 输出一个换行符，并立即刷新缓冲区。

例如:

std::cout << std::endl;
相当于:

std::cout << '\n' << std::flush;
或者
std::cout << '\n'; std::fflush(stdout);
由于流操作符 << 的重载，对于 '\n' 和 "\n"，输出效果相同。

对于有输出缓冲的流（例如cout、clog），如果不手动进行缓冲区刷新操作，将在缓冲区满后自动刷新输出。不过对于 cout 来说（相对于文件输出流等），缓冲一般体现得并不明显。但是必要情况下使用 endl 代替 '\n' 一般是个好习惯。

对于无缓冲的流（例如标准错误输出流cerr），刷新是不必要的，可以直接使用 '\n'。
*/



/*
在 C++ 中，分别使用.h 和.cpp 来定义一个类。
.h 中存放类的声明，函数原型（放在类的声明中）。

.cpp 存放函数体。

也就是说，一个存放声明(declaration)，一个存放定义（definition)。

如果我们在一个头文件里声明了一个函数，当我们需要定义这个函数（这个定义是唯一的，也就是只能定义一次），或者需要使用这个函数时，我们在 cpp 中需要 include 这个头文件。

同样地，如果我们在一个头文件里声明了一个类，当我们需要定义类里的成员函数，或者我们需要使用这个类时，我们在 cpp 中需要 include 这个头文件。

对于类的设计者来说，头文件就像他们和类的使用者的一个合同，编译器会强化这一合同，它会要求你在使用这些类里的函数或结构时必须要声明
*/
/*
//*如果想要显示多行文本
#include<iostream>
using namespace std;

int main(){
    cout <<"..............\n"
         <<"Hello World ! \n"
         <<"Welcome to c++\n"
         <<"..............\n";
    return 0;
}
*/
/*!真正的开发过程中， 尽量避免使用 using namespace std; 等直接引入整个命名空间，
否则会因为命名空间污染导致很多不必要的问题， 比如自己写的某个函数，名称正好和 std 中的一样， 
编译器会不知道使用哪一个， 引起编译报错.*/
//*建议使用:
//*std::cout << "Hello World" << std::endl;等直接由命名空间组合起来的全称


#include<iostream>  
#include <limits>
 
using namespace std;  
  
int main()  
{  
    cout << "type: \t\t" << "************size**************"<< endl;  
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);  
    cout << "\t最大值：" << (numeric_limits<bool>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;  
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);  
    cout << "\t最大值：" << (numeric_limits<char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;  
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);  
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;  
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);  
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;  
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);  
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;  
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);  
    cout << "\t最大值：" << (numeric_limits<short>::max)();  
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;  
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);  
    cout << "\t最大值：" << (numeric_limits<int>::max)();  
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;  
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);  
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;  
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);  
    cout << "\t最大值：" << (numeric_limits<long>::max)();  
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;  
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);  
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();  
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;  
    cout << "double: \t" << "所占字节数：" << sizeof(double);  
    cout << "\t最大值：" << (numeric_limits<double>::max)();  
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;  
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);  
    cout << "\t最大值：" << (numeric_limits<long double>::max)();  
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;  
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);  
    cout << "\t最大值：" << (numeric_limits<float>::max)();  
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;  
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);  
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();  
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;  
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;  
    // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************"<< endl;  
    return 0;  
}



/*
size_t 在 C 语言中就有了。

它是一种 整型 类型，里面保存的是一个整数，就像 int, long 那样。这种整数用来记录一个大小(size)。
size_t 的全称应该是 size type，就是说 一种用来记录大小的数据类型。

通常我们用 sizeof(XXX) 操作，这个操作所得到的结果就是 size_t 类型。

因为 size_t 类型的数据其实是保存了一个整数，所以它也可以做加减乘除，
也可以转化为 int 并赋值给 int 类型的变量。

类似的还有 wchar_t, ptrdiff_t。

wchar_t 就是 wide char type， 一种用来记录一个宽字符的数据类型 。

ptrdiff_t 就是 pointer difference type， 一种用来记录两个指针之间的距离的数据类型 。

通常，size_t 和 ptrdiff_t 都是用 typedef 来实现的。你可能在某个头文件里面找到类似的语句：

typedef unsigned int size_t;
而 wchar_t 则稍有不同。在一些旧的编译器中，wchar_t 也可能是用 typedef 来实现，
但是新的标准中 wchar_t 已经是 C/C++ 语言的关键字，wchar_t 类型的地位已经和
char, int 的地位等同了。

在标准 C/C++ 的语法中，只有 int float char bool 等基本的数据类型，
至于 size_t, 或 size_type 都是以后的编程人员为了方便记忆所定义的一些便于理解的由
基本数据类型的变体类型。
例如：typedef int size_t; 定义了 size_t 为整型。

int i;                   // 定义一个 int 类型的变量 i
size_t size=sizeof(i);   // 用 sizeof 操作得到变量i的类型的大小
// 这是一个size_t类型的值
// 可以用来对一个size_t类型的变量做初始化

i=(int)size;             // size_t 类型的值可以转化为 int 类型的值
char c='a';              // c 保存了字符 a，占一个字节
wchar_t wc=L'a';         // wc 保存了宽字符 a，占两个字节
// 注意 'a' 表示字符 a，L'a' 表示宽字符 a

int arr[]={1,2,3,4,5};   // 定义一个数组
int *p1=&arr[0];         // 取得数组中元素的地址，赋值给指针
int *p2=&arr[3];
ptrdiff_t diff=p2-p1;    // 指针的减法可以计算两个指针之间相隔的元素个数
// 所得结果是一个 ptrdiff_t 类型

i=(int)diff;             // ptrdiff_t 类型的值可以转化为 int 类型的值
*/


/* 


//*每个枚举元素在声明时被分配一个整型值，默认从 0 开始，逐个加 1。

/*
#include <iostream>
using namespace std;
int main()
{
  enum Weekend{Zero,One,Two,Three,Four};
  int a,b,c,d,e;
  a=Zero;
  b=One;
  c=Two;
  d=Three;
  e=Four;
  cout<<a<<","<<b<<","<<c<<","<<d<<","<<e<<endl;  // 0,1,2,3,4
  return 0;
}
*/

/*也可以在定义枚举类型时对枚举元素赋值，此时，赋值的枚举值为所赋的值，
而其他没有赋值的枚举值在为前一个枚举值加 1。*/

/*
#include <iostream>
using namespace std;
int main()
{
  enum Weekend{Zero,One,Two=555,Three,Four};
  int a,b,c,d,e;
  a=Zero;
  b=One;
  c=Two;
  d=Three;
  e=Four;
  cout<<a<<","<<b<<","<<c<<","<<d<<","<<e<<endl;  //0,1,555,556,557
  return 0;
}
*/

/*
*关于 typedef 的几点说明：

typedef 可以声明各种类型名，但不能用来定义变量。用 typedef 可以声明数组类型、字符串类型，使用比较方便。
用typedef只是对已经存在的类型增加一个类型名，而没有创造新的类型。
当在不同源文件中用到同一类型数据（尤其是像数组、指针、结构体、共用体等类型数据）时，常用 typedef 声明一些数据类型，把它们单独放在一个头文件中，然后在需要用到它们的文件中用 ＃include 命令把它们包含进来，以提高编程效率。
使用 typedef 有利于程序的通用与移植。有时程序会依赖于硬件特性，用 typedef 便于移植
*/

/*
typedef int Int;
当然，也可以使用 using：

using Int=int;
可以看到，第二种可读性更高。

另外，using 在模板环境中会更加强大。

假设有一个模板参数是 int 的类 grid，那么可以这么做：

using grid1=grid<1>;
那要声明一个指向返回 void，有一个 int 参数的函数的函数指针呢？

或许可以使用 typedef：

typedef void(*f1)(int);
可以看到，可读性很低，那使用 using 呢？

using f1=void(*)(int);
使用 using 明显更好理解：

所以，始终优先使用 using。

那如果将函数指针作参数呢？

void func(void(*f1)(int)){
//...
}
这无法使用 using 完成。

但是，使用 <functional> 中的 function 可以更好地完成任务：
void func(function<void(int)>f1){
//...
}
所以，尽量不去使用 typedef。
*/