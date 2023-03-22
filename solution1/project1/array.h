#ifndef _ARRAY_H_
#define _ARRAY_H_
//�䳤�������

/*����һ���䳤��������Array*/
typedef struct {
	int *array;
	int size;
}Array;

/*���鴴��*/
Array array_create(int init_size);

/*����ռ��ͷ�*/
void array_free(Array *a);

/*�������鳤��*/
int array_size(const Array *a);

/*�����������ָ��*/
int* array_at(Array *a, int index);

/*�����������*/
int array_get(const Array *a, int index);

/*��������*/
void array_set(Array *a, int index, int value);

/*��������*/
void array_inflate(Array *a, int more_size);

/*��ӡ����*/
void print_array(Array *a);

#endif 

