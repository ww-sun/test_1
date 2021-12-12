
//int main()
//{
//	//指针是个变量，用来存放内存单元的地址，存放在指针中的值都被当成地址处理。
//	//int a;
//	//int* p = &a;//指针变量
//	//return 0;
//
//
//	//指针变量和指针类型
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	/*int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%d", pa);
//	printf("%d", pc);*/
//	//指针类型决定了指针进行解引用操作时，能够访问的空间大小
//	//int* p时，*p能够访问四个字节
//	//char* p时  *p能够访问一个字节
//	//double* p时  *p能够访问八个字节
//
//
//	return 0
//
//
//
//
//
//}




////判断年份是否为闰年。。
//#include<stdio.h>
//int main()
//{
//	int a  ,b;
//	printf("请输入年份：");
//	scanf("%d", &a);
//	b = a % 4;
//	if (b == 0)
//		printf("%d年是闰年\n", a);
//	else
//		printf("%d年不是闰年\n", a);
//	
//	//for (a = 2000; a <= 2500; a++)
//	//{
//	//	b = a % 4;
//	//	if (b == 0)
//	//		printf("%d年是闰年\n", a);
//	//	else
//	//		printf("%d年不是闰年\n", a);
//	//	
//	//}
//	return 0;
//}



////算法举例，求1-1/2+1/3-1/4+......+1/99-1/100.
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float  sum = 0.0;
//	int n;
//	for (n = 1; n <= 100; n++)
//	{
//		sum = sum+pow(-1,n+1) * (1 / n);
//	}
//	printf("所求和sum=%f", sum);
//	return 0;
//}




//给出一个正整数，判断它是不是一个素数（素数指除了1 和它本身外，不能被其他任何整数整除的数）
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	printf("请输入一个大于一的正整数：");
//	scanf_s("%d", &i);
//	for (j = 2; j < i; j++)
//	{ 
//		k = i % j;
//		if (k != 0 )
//		{
//			printf("%d是素数", i);
//		}
//		else 
//			printf("%d不是素数", i);
//		break;
//	}
//	return 0;
//}




//输入两个数比较大小(使用函数方法)
//#include<stdio.h>
//MAX(x, y)
//{
//	int max;
//	if (x > y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//
//int main()
//{
//	int a, b,c;
//	printf("请输入两个正整数：");
//	scanf_s("%d %d", &a, &b);
//	c = MAX(a, b);
//	printf("两数中较大的是%d", c);
//	return 0;
//}

//
//
////输入三个数比较大小（使用函数方法）
//#include<stdio.h>
//MAX(x, y)
//{
//	int max;
//	if (x > y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//
//int main()
//{
//	int a, b, c,d;
//	printf("请输入三个正整数：");
//	scanf_s("%d %d %d", &a, &b,&c);
//	d = MAX(a, b);
//	if (d > c)
//		printf("三个数中最大数为%d", d);
//	else
//		printf("三个数中最大数为%d", c);
//	return 0;
//}



////将一个数组中的数字按从小到大排序输出
//#include<stdio.h>
//int main()
//{
//	float arr[100];
//	printf("请输入数据");
//	scanf("%f", arr[100]);
//	return 0;
//
//}


//
////使用函数画图象
//#include<stdio.h>
//#include<math.h>
//int sishewuru(float a);
//void main()
//{
//	float minx = -2 * 3.14, maxx = 2 * 3.14, dx, x[500], y[2 * 500], k, r = 0.5 * maxx;
//	int lx = 500, i, j, Y[2 * 500];
//	dx = (maxx - minx) / 450;
//	x[0] = minx;
//	y[0] = 0.1 / sin(x[1]);
//	for (i = 1; i < lx; i++)
//	{
//		x[i] = x[i - 1] + dx;
//		y[i] = sqrt(r * r - x[i] * x[i]);
//		y[lx + i] = -1 * y[i];
//
//	}
//	k = 0.6 / dx;
//	for (i = 0; i < 2 * lx; i++)
//	{
//		Y[i] = sishewuru(k * y[i]);
//	}
//	for (i = 0; i < 136; i++)
//	{
//		for (j = 0; j < lx; j++)
//		{
//			if (i == -Y[j] + 68 || i == -Y[j + lx] + 68)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//
//	}
//}
//
//int sishewuru(float a)
//{
//	int m;
//	if (a - floor(a) < 0.5)
//	{
//		m = a;
//	}
//	else
//	{
//		m = a + 1;
//
//	}
//	return m;
//}


////输出乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			k = i * j;
//			if (i < (j + 1))
//				printf("%d*%d=%3d    ", i, j, k);//加3是为了让其结果占三个字节，方便对齐，美观
//
//			else
//				;
//		}
//		if (j = 9)
//			printf("\n");
//		continue;
//	}
//	return 0;
//}



//#include<stdio.h>
//main()
//{
//    long f1, f2;
//    int i;
//    f1 = f2 = 2;
//    for (i = 1; i <= 20; i++)
//    {
//        printf("%12ld %12ld", f1, f2);
//        if (i % 2 == 0) printf("\n");/*控制输出，每行四个*/
//        f1 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//        f2 = f1 + f2; /*前两个月加起来赋值给第三个月*/
//    }
//    system("pause");
//}

//赋值运算符按照自右而左的顺序计算
//int a = 3 ,b = 3 ,c = 3;(正确)
//int a = b = c = 3;(错误)
//int a,b,c;  a = b = c =3;(正确)


//求ax^2+bx+c=0的根，a,b,c由键盘输入
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c,d;
//	double x1,x2;
//	printf("请输入参数a,b,c:");
//	scanf_s("%d,%d,%d",&a,&b,&c);
//	d = b * b - 4 * a * c;
//	printf("d = %d", d);
//	if (d < 0)
//		printf("此方程没有实数根\n");
//	else if (d = 0)
//	{
//		x1 = (-b) / (2.0*a);
//		printf("此方程只有一个实数根x1=%7.2f\n", x1);
//	}
//	else
//	{
//		x1 = ((-b + sqrt(d)) / (2.0 * a));
//		x2 = ((-b - sqrt(d)) / (2.0* a));
//		printf("此方程的两个实数根x1=%f，x2=%f\n", x1, x2);
//	}
//	return 0;
//
//}
//

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a, b, c, d, x1, x2, p, q;
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	d = b*b - 4 * a * c;
//	p = -b/(2.0 * a);
//	q = sqrt(d) / (2.0 * a);
//	x1 = p + q;
//	x2 = p - q;
//	printf("x1=%7.2f\nx2 = %7.2f\n%d", x1, x2,d);
//	return 0;
//
//}



//do{循环语句} while（循环条件）；
//与while循环不同的是do while先执行语句再判断是否继续执行。
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;//跳出剩下的所有循环，只能打印到4
//			continue;//跳出本次循环后继续循环，跳过5打印剩下的
//		printf("%5d", i);
//		i = i++;
//	} while (i < 11);
//	return 0;
//
//}



 /*一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如 6=1＋2＋3.编程
找出 1000 以内的所有完数。 */
//#include<stdio.h>
//#include<math.h>
//
//int main()
//
//{
//	int a, b, c,wanshu ;
//	for (a = 2; a < 1000; a++)
//	{
//		wanshu = 0;
//		for(b = 1;b<a;b++)
//		{
//			c = a % b;
//			if (c == 0)
//				wanshu = wanshu + b;
//		}
//		if (wanshu == a)
//			printf("%d是完数",a);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	static int k[10];
//	// static对全局变量的修饰,可以认为是限制了只能是本文件引用此变量
//	int i, j, n, s;
//	for (j = 2; j < 1000; j++)
//	{
//		n = -1;
//		s = j;
//		for (i = 1; i < j; i++)
//		{
//			if ((j % i) == 0)
//			{
//				n++;
//				s = s - i;
//				k[n] = i;
//			}
//		}
//		if (s == 0)
//		{
//			printf("%d is a wanshu: ", j);
//			for (i = 0; i < n; i++)
//				printf("%d,", k[i]);
//			printf("%d\n", k[n]);
//		}
//	}
//	system("pause");
//}


//#include<stdio.h>
//int a; 
//int main() 
//{ int b; 
//int* c = (int*)malloc(sizeof(int));
////a是全局变量,b是栈变量,c是堆变量
//}


/*将一个 4×4 的数组进行逆时针旋转 90 度后输出，要求原始数组的
数据随机输入，新数组以 4 行 4 列的方式输出*/
//#include<stdio.h>
//int main()
//{
//	int a[4][4], b[4][4], i, j; /*a 存放原始数组数据， b 存放旋转后数组数据*/
//	printf("input 16 numbers: ");
//	/*输入一组数据存放到数组 a 中，然后旋转存放到 b 数组中*/
//	for (i = 0; i < 4; i++)
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//			b[3 - j][i] = a[i][j];
//		}
//	printf("array b:\n");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("%6d", b[i][j]);
//		printf("\n");
//	}
//	return 0;
//}




// /*通过键盘输入 3 名学生 4 门课程的成绩，
//分别求每个学生的平均成绩和每门课程的平均成绩。
//要求所有成绩均放入一个 4 行 5 列的数组中，输入时同一人数据间用空格,不同人用回车
//其中最后一列和最后一行分别放每个学生的平均成绩、每门课程的平均成绩及班级总平均
//分。 */
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	float a[4][5], sum1, sum2;
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			scanf("%f", &a[i][j]);
//	for (i = 0; i < 3; i++)
//	{
//		sum1 = 0;
//		for (j = 0; j < 4; j++)
//			sum1 = sum1 + a[i][j];
//		a[i][4] = sum1 / 4;
//	}
//	for (j = 0; j < 5; j++)
//	{
//		sum2 = 0;
//		for (i = 0; i < 3; i++)
//			sum2 = sum2 + a[i][j];
//		a[3][j] = sum2 / 3;
//
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++) 
//		{
//			printf("%6.2f", a[i][j]);
//			printf("\n");
//		}
//	}
//	return 0;
//}