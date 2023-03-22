#include"my_string.h"
/*ģ��strlen����,����һ���ַ������� */
int mylen(const char*s)
{
	int index = 0;
	while (s[index]!='\0')
	{
		index++;
	}
	return index;
}
/*ģ��strcmp����,�Ƚ������ַ�����С 
  ����0 s1==s2  ����1 s1>s2  ����-1 s1<s2*/
int mycmp(const char*s1, const char*s2)
{
	int index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	return s1[index]-s2[index];
}

/*ģ��strcpy����,�����ַ���
  ��src���ַ���������dst������dst*/
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