
//int main()
//{
//	//ָ���Ǹ���������������ڴ浥Ԫ�ĵ�ַ�������ָ���е�ֵ�������ɵ�ַ����
//	//int a;
//	//int* p = &a;//ָ�����
//	//return 0;
//
//
//	//ָ�������ָ������
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
//	//ָ�����;�����ָ����н����ò���ʱ���ܹ����ʵĿռ��С
//	//int* pʱ��*p�ܹ������ĸ��ֽ�
//	//char* pʱ  *p�ܹ�����һ���ֽ�
//	//double* pʱ  *p�ܹ����ʰ˸��ֽ�
//
//
//	return 0
//
//
//
//
//
//}




////�ж�����Ƿ�Ϊ���ꡣ��
//#include<stdio.h>
//int main()
//{
//	int a  ,b;
//	printf("��������ݣ�");
//	scanf("%d", &a);
//	b = a % 4;
//	if (b == 0)
//		printf("%d��������\n", a);
//	else
//		printf("%d�겻������\n", a);
//	
//	//for (a = 2000; a <= 2500; a++)
//	//{
//	//	b = a % 4;
//	//	if (b == 0)
//	//		printf("%d��������\n", a);
//	//	else
//	//		printf("%d�겻������\n", a);
//	//	
//	//}
//	return 0;
//}



////�㷨��������1-1/2+1/3-1/4+......+1/99-1/100.
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
//	printf("�����sum=%f", sum);
//	return 0;
//}




//����һ�����������ж����ǲ���һ������������ָ����1 ���������⣬���ܱ������κ���������������
//#include<stdio.h>
//int main()
//{
//	int i, j, k;
//	printf("������һ������һ����������");
//	scanf_s("%d", &i);
//	for (j = 2; j < i; j++)
//	{ 
//		k = i % j;
//		if (k != 0 )
//		{
//			printf("%d������", i);
//		}
//		else 
//			printf("%d��������", i);
//		break;
//	}
//	return 0;
//}




//�����������Ƚϴ�С(ʹ�ú�������)
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
//	printf("������������������");
//	scanf_s("%d %d", &a, &b);
//	c = MAX(a, b);
//	printf("�����нϴ����%d", c);
//	return 0;
//}

//
//
////�����������Ƚϴ�С��ʹ�ú���������
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
//	printf("������������������");
//	scanf_s("%d %d %d", &a, &b,&c);
//	d = MAX(a, b);
//	if (d > c)
//		printf("�������������Ϊ%d", d);
//	else
//		printf("�������������Ϊ%d", c);
//	return 0;
//}



////��һ�������е����ְ���С�����������
//#include<stdio.h>
//int main()
//{
//	float arr[100];
//	printf("����������");
//	scanf("%f", arr[100]);
//	return 0;
//
//}


//
////ʹ�ú�����ͼ��
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


////����˷��ھ���
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
//				printf("%d*%d=%3d    ", i, j, k);//��3��Ϊ��������ռ�����ֽڣ�������룬����
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
//        if (i % 2 == 0) printf("\n");/*���������ÿ���ĸ�*/
//        f1 = f1 + f2; /*ǰ�����¼�������ֵ����������*/
//        f2 = f1 + f2; /*ǰ�����¼�������ֵ����������*/
//    }
//    system("pause");
//}

//��ֵ������������Ҷ����˳�����
//int a = 3 ,b = 3 ,c = 3;(��ȷ)
//int a = b = c = 3;(����)
//int a,b,c;  a = b = c =3;(��ȷ)


//��ax^2+bx+c=0�ĸ���a,b,c�ɼ�������
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c,d;
//	double x1,x2;
//	printf("���������a,b,c:");
//	scanf_s("%d,%d,%d",&a,&b,&c);
//	d = b * b - 4 * a * c;
//	printf("d = %d", d);
//	if (d < 0)
//		printf("�˷���û��ʵ����\n");
//	else if (d = 0)
//	{
//		x1 = (-b) / (2.0*a);
//		printf("�˷���ֻ��һ��ʵ����x1=%7.2f\n", x1);
//	}
//	else
//	{
//		x1 = ((-b + sqrt(d)) / (2.0 * a));
//		x2 = ((-b - sqrt(d)) / (2.0* a));
//		printf("�˷��̵�����ʵ����x1=%f��x2=%f\n", x1, x2);
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



//do{ѭ�����} while��ѭ����������
//��whileѭ����ͬ����do while��ִ��������ж��Ƿ����ִ�С�
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;//����ʣ�µ�����ѭ����ֻ�ܴ�ӡ��4
//			continue;//��������ѭ�������ѭ��������5��ӡʣ�µ�
//		printf("%5d", i);
//		i = i++;
//	} while (i < 11);
//	return 0;
//
//}



 /*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ�������������� 6=1��2��3.���
�ҳ� 1000 ���ڵ����������� */
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
//			printf("%d������",a);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	static int k[10];
//	// static��ȫ�ֱ���������,������Ϊ��������ֻ���Ǳ��ļ����ô˱���
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
////a��ȫ�ֱ���,b��ջ����,c�Ƕѱ���
//}


/*��һ�� 4��4 �����������ʱ����ת 90 �Ⱥ������Ҫ��ԭʼ�����
����������룬�������� 4 �� 4 �еķ�ʽ���*/
//#include<stdio.h>
//int main()
//{
//	int a[4][4], b[4][4], i, j; /*a ���ԭʼ�������ݣ� b �����ת����������*/
//	printf("input 16 numbers: ");
//	/*����һ�����ݴ�ŵ����� a �У�Ȼ����ת��ŵ� b ������*/
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




// /*ͨ���������� 3 ��ѧ�� 4 �ſγ̵ĳɼ���
//�ֱ���ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ���
//Ҫ�����гɼ�������һ�� 4 �� 5 �е������У�����ʱͬһ�����ݼ��ÿո�,��ͬ���ûس�
//�������һ�к����һ�зֱ��ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ����༶��ƽ��
//�֡� */
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