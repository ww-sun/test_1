#include<stdio.h>
//使用<>表示引用标准头文件
//#include"stdio.h"  使用双引号""时表示引用自定义头文件
// 
// 常量。
// 
#define PI 3.1415
int changliang()
{
	//常量：特点：运行期间，常量的值不能被改变
	//1.整型常量：即我们所理解的整数
	printf("%d\n", 3);
	//实型常量：即我们所理解的小数
	printf("%lf\n", 3.1415);
	//字符常量：''单引号括起来的字符，而且有且仅有一个
	printf("%c\n", 'c');
	//字符串常量：""由双引号括起来的字符，可以包含多个字符
	printf("%s\n", "china");
	//符号常量：由#define定义，位于引用头文件处，定义名必须大写，结尾不需要加分号，不占用内存
	printf("%lf\n", PI);
	return 0;

	//变量：运行过程中值可以改变，需要先定义后使用，变量定义的格式为（数据类型+变量名（+变量值））
	//变量的实质：变量对应的就是系统给分配的空间，空间大小由数据类型决定，可以通过变量名和地址访问到变量的值

	//常变量：本质还是变量，但值不能被改变；在变量的定义前加上const即可将变量定义为常变量
}
//
////转义字符是以'\'开头的特殊字符序列：\n  表示换行符     \r  表示回车    \t  表述制表符
////标识符：用来给变量、常量、函数、数组、类型等命名的有效字符序列
////命名规范：1、只能由字母、数字、下划线三种符号组成   2、必须由字母或者下划线开头   3、不能使用关键字

//
// 
// 进制
// 

int jinzhi()
{
	//进制：二进制，八进制，十进制，十六进制；
	//八进制数以数字0开头，输出使用%o（字母o）
	int a = 012;
	printf("%o\t", a);
	//十进制数以数字1-9开头，输出使用%d
	int b = 10;
	printf("%d\t", b);
	//十六进制数以0x开头，输出使用%x
	int c = 0x10;
	printf("%x\t", c);
	return 0;
	//不能直接输入二进制数
}
//计算机的数值储存方法：原码、补码、反码
//原码：1、一个数的原码为原始的二进制码  2、原码的最高位为符号位，0表示正，1表示负     问题： 1、0有两种表示方式       2、原码的正负数相加结果不正确
//反码：1、对于正数，反码和原码相同   2、对于负数，符号位不变，其他部分按位取反    解决了原码正负数相加结果不正确的问题     问题： 1、0有两种表示方式
//补码：1、对于正数，原码、补码、反码都相同  2、对于负数，其补码为反码加1  3、补码符号位不变，其他位囚犯最后整个数加1，得到原码
//sizeof()  输出数据类型的大小，单位字节。





//基本数据类型  整形、浮点型



int jibenleixing()
{
	//基本整形 int  占两个(short int )或者四个或八个字节(long long int )，以整数的补码形式存放  1字节=8位   1b=8bit
	//输出时 %d 输出 int 类型  %u 输出 unsigned int类型
	printf("int=%d\n", sizeof(int));
	printf("long int=%d\n", sizeof(long int));
	printf("short int=%d\n", sizeof(short int));
	printf("long long int=%d\n", sizeof(long long int));
	//longlong > long >= int > short
	//小类型 -> 大类型会自动转换
	//大类型 -> 小类型会损失高位

	//有符号数与无符号数的区别：
	//有符号数的最高位是符号位表正负，无符号数的最高位表示数值，都为正数
	//有符号数使用%d输出，无符号数使用%u输出


	//字符型数据  占用空间为1个字节  有符号数的取值范围为-128——+127，  无符号数的取值范围为0——255；赋值超过范围会发生错误
	//定义字符型数据使用char，输出使用%c，使用%d可以得到字符对应的ASCLL码值
	//大小字母之间的ASCLL码值差值为32  大写+32 = 小写；
	char cc = 'a';
	printf("%c\n", cc);
	printf("%d\n", cc);

	//浮点数据类型：单精度float  占四个字节 有六位有效数字       双精度 double  占八个字节 有十五位有效数字
	//float输出使用%f    double输出使用%lf；
	float a = 1.0f;
	double n = 1.00;
	printf("%f\n", a);
	printf("%lf\n",n);
	return 0;
}

//pritnf输出函数  对齐方式 printf（"a= %3d"，a）；3d表示一共输出三个字符，一般为右对齐    printf（"a =%-3d"，a)；加负号表示左对齐
//输出浮点型数据时 printf("a = %m.nf\n",a) m 表示输出多少位，n表示保留几位小数  例：printf("a = %6.2f\n",a) 表述输出6位 保留2位小数

//scanf输入函数，每次只能拿一个数，从输入缓冲区拿取

//putchar  getchar  用于字符的输出输入

//C语言三种基本结构：顺序结构、选择结构、循环结构

//顺序结构：
// 
//if（条件语句）  {执行语句}；  当if（）后面不加{}时，执行语句只有if（）后面的第一句；

//条件运算符：条件运算符的一般形式有两个问好组成，必须有三个操作数，因此也叫三目运算符,
//例如：表达式1？表达式2：表达式3   执行方法：执行1的值，若为真，给他返回2的值，若为假，返回3的值
int shunxu()
{
	int a = 30;
	int b = 20;
	int max;
	(a > b) ? (max = a) : (max = b);
	printf("%d\n", max);
	return 0;
}

//switch（）语句：多分支选择结构  break表示跳出所有循环，这里表示跳出switch语句；continue表示跳出本次循环
//switch（）语句括号里面的表达式只能位整形或者字符型；
//如果不加break语句，则后面的执行语句无条件输出，直到遇到break语句或者执行完switch语句。
/*
 一般形式：
 switch（条件表达式） 
 case  常量1；
 执行语句1；
 break；
 case 常量2；
 执行语句2；
 break；
 default；     （default表示其他情况;执行default语句）
 等等
 */


//循环结构：for（）    while（）    do while（）  三种循环
//余下类容暂略


//数组：一个数组内的数具有相同数据类型、数组内的数（实质是指数的存储位置）是有序的




//函数： 局部变量与静态局部变量与全局变量
//当副函数在主函数后面时，主函数调用副函数显示未找到，使用定义声明
//局部变量：作用域为{ }之内的代码片段，在函数调用完之后释放变量内存，在不同函数内可以设置相同名称的变量


//静态局部变量： 在函数调用结束后不会释放内存，在程序结束后释放，函数调用结束后仍保持原始值，
// 但是静态局部变量的作用域仍是在对应函数{ }内，在其他地方无法使用此变量
//使用静态局部变量时  使用static修饰，，例如 ：static int a；
//静态局部变量的初始化只会执行一次，静态局部变量在函数调用之前就已经分配内存空间
//如果静态局部变量不初始化，则系统默认初始化静态局部变量的值为0.静态局部变量的初始值只能为常量
//
int jingtaijubu()
{
	int a = 1;
	printf("%d\n", a);
	show();
	show();
	show();
	show();
	show();
	show();
	return 0;
}
int show()
{
	int a = 2;
	static int b = 1;
	printf("%d\n", b++);
	return 0;
}




//普通全局变量：在函数外定义，可被本文件及其他文件中的函数所共用，若其他文件的函数调用此变量，使用extern声明
//全局变量的生命周期和程序运行周期一样，不同文件的全局变量不能重名。
//在使用全局变量时显示未找到变量，使用变量声明声明使用extern
//全局变量如果不进行初始化，默认全局变量的初始值为0.,全局变量与静态局部变量一样，在编译时就分配了内存空间
int putongquanju()
{
	extern int a;
	printf("%d\n", a);
	show2();
	return 0;
}

int a = 10;
int show2()
{
	printf("%d\n", a);
	return 0;
}
//

//静态全局变量
//在函数外定义，作用范围被限制在所定义的文件中，不同文件的静态全局变量可以重名，作用域不冲突
//static全局变量的生命周期和程序周期一样，同时static全局变量的值值初始化一次


//与普通全局变量的区别：作用域不一样、extern声明只适用于普通全局变量、一个文件只能有一个static全局变量的定义
//
static int ba = 10;
int jingtaiquanju()
{
	printf("%d\n", ba);
	return 0;
}





//指针和指针变量：指针实质就是地址、指针变量就是存放地址的变量  
//指针类型也是一种数据类型：如果指针类型未赋值，则系统赋予其随机值3

int zhizhen()
{
	int* p;
	int a = 10;
	p = &a;//将a的地址赋值给p    等同于  int* p = &a； 
	printf("p = %d\t,a = %d\n", *p, a);
	printf("p = %p\t,&a = %p\n", p, &a);
	*p = 100;//通过指针改变原地址内容
	printf("p = %d\t,a = %d\n", *p, a);
	printf("p = %p\t,&a = %p\n", p, &a);
	//p是指针指向的地址，*p是指针指向地址的内容 
	//指针变量不指向地址就是没有意义的，如果需要操作指针所指向地址的内容，需要使用*p；
	return 0;
}

//指针的大小，指针也是一种数据类型，也可以使用sizeof（）；
//在三十二位平台中，所有地址都是32位的，即其大小为四个字节 （）64位平台即八个字节大小
int zhizhendaxiao()
{
	int* p;
	int a = sizeof(int *);//8
	int b = sizeof(char *);//8
	int c = sizeof(p);//8
	int d = sizeof(*p);//4
	printf("a=%d\t,b=%d\t,c=%d\t,d=%d\n", a, b, c, d);

}

//空指针：给指针赋值变量位NULL（0），可以防止我们因任意赋值带来的错误 int* p = NULL；
//万能指针：由void* 定义
int wanneng()
{
	void* p = NULL;//万能指针的定义
	int a = 10;
	p = &a;
	printf("*p = %d\n", *(int*)p);//void类型的指针变量可以指向任意变量，在使用时，最好替换为它本来的类型
	return 0;
}


//指针和数组
int zhizhenshuzu()
{
	//数组名就是数组的第一个元素
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int* p = NULL;
	int i;
	p = &a[0];
	p = a;
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
		printf("%d\n", *(p + i));
		printf("%d\n", p[i]);//三种输出方式结果相同
	}
}

//字符指针：  定义：cahr* 指针变量名；

int zifuzhizhen()
{
	char str[] = "hello world";
	char* p = NULL;
	str[0] = '1';//改变其首元素的值
	//str[1] = '2';
	*(str + 1) = '2';//等同于语句str[1] = '2';
	printf("%s\n", str);
	
	//定义字符指针，指向首元素：
	p = &str[0];
	//p = str;
	*p = 'a';
	p++;
	*p = 'b';
	printf("str = %s\n", str);
	printf("p = %s\n", p);
	printf("%c", *p);
	return 0;
}


 




int main()
{
	/*changliang();
	jinzhi();
	jibenleixing();
	shunxu();
	jingtaijubu();
	putongquanju();
	jingtaiquanju();
	zhizhen();
	zhizhendaxiao();
	wanneng();
	zhizhenshuzu();*/
	zifuzhizhen();
}
