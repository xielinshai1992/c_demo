#ifndef _MY_STRING_H_
#define _MY_STRING_H_

/*ģ��strlen����,����һ���ַ������� */
int mylen(const char*s);

/*ģ��strcmp����,�Ƚ������ַ�����С */
int mycmp(const char*s1, const char*s2);

/*ģ��strcpy����,�����ַ���
��src���ַ���������dst������dst*/
char* mycpy(char*dst, const char*src);

#endif
