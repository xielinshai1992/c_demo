#include"my_string.h"
/*模拟strlen函数,返回一个字符串长度 */
int mylen(const char*s)
{
	int index = 0;
	while (s[index]!='\0')
	{
		index++;
	}
	return index;
}
/*模拟strcmp函数,比较两个字符串大小 
  返回0 s1==s2  返回1 s1>s2  返回-1 s1<s2*/
int mycmp(const char*s1, const char*s2)
{
	int index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	return s1[index]-s2[index];
}

/*模拟strcpy函数,拷贝字符串
  把src的字符串拷贝到dst，返回dst*/
char* mycpy(char*dst, const char*src)
{
	int index=0;
	while (src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return dst;
}