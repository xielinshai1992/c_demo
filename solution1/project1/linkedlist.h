#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
//�������

/*����һ�������еĽڵ�*/
typedef struct _node{
	int value;
	struct _node *next;
}Node;

/*����һ������ ���ñ�ͷ*/
typedef struct _list {
	Node* head;
}List;

/*������ĩβ��һ���ڵ�*/
void add_node(List* pList, int number);

/*ɾ���ڵ�*/
void delete_node(List* pList, int number);

/*����������ӡ���ڵ�*/
void print_linkedlist(List *pList);

/*�������*/
void clear_list(List* pList);

#endif 