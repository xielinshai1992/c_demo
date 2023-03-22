#include"common.h"
#include "array.h"
#include "my_string.h"
#include "linkedlist.h"
#include <string.h>
#include <stdio.h>
#define MIN(a,b) ((a)>(b)?(b):(a))
#define MAX(a,b) ((a)>(b)?(a):(b))

int main()
{
	//print_prime();
	//printf("%d",is_prime(7));
	//printf("%d\n", get_gcd(84, 49));
	//printf("%d\n", reverse_num(53726));
	get_shuixianhua(3);
	//guess_number();

	//printf("%d",tic_tac_toe_game());

	//int a[] = { 1,2,3,4,-5,6,172,8,9,80 };
	//int min, max;
	//minmax(a,sizeof(a)/sizeof(a[0]), &max,&min);
	//printf("%d %d", min, max);

	//malloc测试
	//int number = 10;
	//int *p;
	//int i;
	//p = (int*)malloc(number * sizeof(int));
	//for (i = 0; i < number; i++)
	//{
	//	p[i] = i;
	//}
	//for (i = number - 1; i >= 0; i--)
	//{
	//	printf("%d\n", p[i]);
	//}
	//free(p);


	/*字符串操作函数测试
	char s[] = "hello";
	printf("%d\n", strlen(s));
	printf("%d\n", sizeof(s));
	printf("%d\n", mylen(s));
	char s1[] ="abc";
	char s2[] ="cba";
	char s3[10];
	printf("%d\n", 'x'-'a');
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", mycmp(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	printf("%s\n", mycpy(s1, s2));*/


	/*宏定义测试 __FILE__,__LINE__,__DATE__,__TIME__
	printf("%s,%d\n", __FILE__,__LINE__);
	printf("%s,%s\n", __DATE__,__TIME__);
	printf("%d\n", MIN(91, 19));*/

	/*读文件测试*/
	//FILE *fp = fopen("123.txt", "r");
	//if (fp)
	//{
	//	char str[7];
	//	fscanf(fp, "%s", str);
	//	printf("%s\n", str);
	//	fclose(fp);
	//}
	//else
	//{
	//	printf("无法打开文件\n");
	//}

	/*写文件测试*/
	/*FILE *fp = fopen("123.txt", "a");
	if (fp)
	{
		char str[5] = "xls\n";
		fprintf(fp, str);
		fclose(fp);
	}
	else
	{
		printf("无法打开文件\n");
	}*/

	/*变长数组测试
	Array a = array_create(3);
	printf("%d\n", array_size(&a));
	*array_at(&a, 0) = 10;
	array_set(&a, 1, 15);
	printf("%d\n", array_get(&a,1));
	int number = 0;
	int cnt = 0;
	while (number != -1) {
		scanf("%d", &number);
		if (number != -1)
		{
			*array_at(&a, cnt++) = number;
		}
	}
	print_array(&a);
	array_free(&a);*/

	//链表测试
	//List list;
	//list.head = NULL;
	//int number;
	//do {
	//	scanf("%d", &number);
	//	if (number != -1)
	//	{
	//		add_node(&list, number);
	//	}
	//} while (number != -1);
	//print_linkedlist(&list);
	//delete_node(&list, 6);
	//print_linkedlist(&list);
	//clear_list(&list);
	//int a[6] = { 1,2,3,4,5,6 };
	//int len = sizeof(a) / sizeof(a[0]);
	//delete_array(a, len, 2);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("a[%d]=%d\n", i, a[i]);
	//}
	//return 0;
}


