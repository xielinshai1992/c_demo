#ifndef _ARRAY_H_
#define _ARRAY_H_
//变长数组操作

/*定义一个变长数组类型Array*/
typedef struct {
	int *array;
	int size;
}Array;

/*数组创建*/
Array array_create(int init_size);

/*数组空间释放*/
void array_free(Array *a);

/*返回数组长度*/
int array_size(const Array *a);

/*返回数组对象指针*/
int* array_at(Array *a, int index);

/*返回数组对象*/
int array_get(const Array *a, int index);

/*数组设置*/
void array_set(Array *a, int index, int value);

/*数组增长*/
void array_inflate(Array *a, int more_size);

/*打印数组*/
void print_array(Array *a);

#endif 

