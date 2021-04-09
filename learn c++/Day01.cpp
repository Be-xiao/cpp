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

1、在 C++ 中，终端输出换行时，用 cout<<......<<endl 与 "\n" 都可以，这是初级的认识。但二者有小小的区别，用 endl 时会刷新缓冲区，使得栈中的东西刷新一次，但用 "\n" 不会刷新，它只会换行，盏内数据没有变化。但一般情况，二者的这点区别是很小的，在大的程序中可能会用到。建议用 endl 来换行。

2、endl 除了写 '\n' 进外，还调用 flush 函数，刷新缓冲区，把缓冲区里的数据写入文件或屏幕.考虑效率就用 '\n'。

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
//*!真正的开发过程中， 尽量避免使用 using namespace std; 等直接引入整个命名空间，否则会因为命名空间污染导致很多不必要的问题， 比如自己写的某个函数，名称正好和 std 中的一样， 编译器会不知道使用哪一个， 引起编译报错.
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