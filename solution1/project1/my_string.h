#ifndef _MY_STRING_H_
#define _MY_STRING_H_

/*模拟strlen函数,返回一个字符串长度 */
int mylen(const char*s);

/*模拟strcmp函数,比较两个字符串大小 */
int mycmp(const char*s1, const char*s2);

/*模拟strcpy函数,复制字符串
把src的字符串拷贝到dst，返回dst*/
char* mycpy(char*dst, const char*src);

#endif
