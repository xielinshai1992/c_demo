#include "common.h"
void print_prime()
{
	int count = 0;
	for (int i = 1; count<50; i++)
	{
		int flag = 1;//素数标志位
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d\t", i);
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
}

int is_prime(int i)
{
	int ret = 1;
	int k;
	for (k = 2; k < i - 1; k++)
	{
		if (i%k == 0)
		{
			ret = 0;
			break;
		}
	}
	return ret;
}

int get_gcd(int a, int b)
{
	int t;
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	//printf("最大公约数为：%d", a);
	return a;
}

int reverse_num(int num)
{
	int last = 0;
	int res = 0;
	while (num !=0)
	{
		last = num % 10;
		//printf("%d", last);
		res = res * 10 + last;
		num /= 10;
	}
	//printf("%d\n", res);
	return res;
}

void get_shuixianhua(int n)
{
	int first= 1;
	int k = 1;
	if (n >= 3 && n <= 7)
	{
		for (int i = 1; i < n; i++)
		{
			first *= 10;
		}
		//printf("%d",first);
		k = first;
		while (k < first * 10)
		{
			int t = k;
			int sum = 0;
			do {
				int d = t % 10;
				t /= 10;
				sum += pow(d, n);
			} while (t >0);
			if (sum == k)
			{
				printf("%d\n", k);
			}

			k++;
		}
	}
	else
	{
		printf("请输入一个3到7的正整数");
	}
}

void guess_number()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100间的数。");
	do {
		printf("请输入这个1到100之前的数：");
		scanf_s("%d", &a);
		if (a > number) {
			printf("你猜的数大了\n");
		}
		else if(a<number) {
			printf("你猜的数小了\n");
		}
		count++;
	} while (a != number);
	printf("太好了，你用了%d次猜到了答案。\n", count);   
}

int tic_tac_toe_game()
{
	const int size = 3;
	int board[size][size] = { {0,1,1},
						      {1,1,0},
						      {1,0,1} };
	int i, j;
	int num0fX;
	int num0f0;
	int result = -1; //-1:没人赢、 1：X赢   0：0赢


	//检查行
	for (i = 0; i < size&&result == -1; i++)
	{
		num0fX = 0;
		num0f0 = 0;
		for (j = 0; j < size; j++)
		{
			if (board[i][j] == 1)
			{
				num0fX++;
			}
			else {
				num0f0++;
			}
		}
		if (num0f0 == size) {
			result = 0;
		}
		else if (num0fX == size)
		{
			result = 1;
		}
	}
	//检查列
	for (j = 0; j< size&&result == -1; j++)
	{
		num0fX = 0;
		num0f0 = 0;
		for (i = 0; i < size; i++)
		{
			if (board[i][j] == 1)
			{
				num0fX++;
			}
			else {
				num0f0++;
			}
		}
		if (num0f0 == size) {
			result = 0;
		}
		else if (num0fX == size)
		{
			result = 1;
		}
	}
	//检查对角线
	if (result == -1)
	{
		num0fX = 0;
		num0f0 = 0;
		for (i = 0; i < size; i++)
		{
			if(board[i][i]==1)
			{
				num0fX++;
			}
			else {
				num0f0++;
			}
		}
		if (num0f0 == size) {
			result = 0;
		}
		else if (num0fX == size)
		{
			result = 1;
		}
	}
	//检查反对角线
	if (result == -1)
	{
		num0fX = 0;
		num0f0 = 0;
		for (i = 0; i < size; i++)
		{
			if (board[i][size-i-1] == 1)
			{
				num0fX++;
			}
			else {
				num0f0++;
			}
		}
		if (num0f0 == size) {
			result = 0;
		}
		else if (num0fX == size)
		{
			result = 1;
		}
	}
	return result;
}

void minmax(int a[], int len, int *max, int *min)
{
	int i;
	*max = *min = a[0];
	for (i = 0; i < len; i++)
	{
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}

void delete_array(int *a, int len, int x)
{
	for (int i = 0; i < len; i++)
	{
		if (a[i] == x)
		{
			for (int j = i; j < len - 1; j++)
			{
				a[j] = a[j + 1];
			}
			break;
		}
	}
}