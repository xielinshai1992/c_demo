#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
//链表操作

/*定义一个链表中的节点*/
typedef struct _node{
	int value;
	struct _node *next;
}Node;

/*定义一个链表 设置表头*/
typedef struct _list {
	Node* head;
}List;

/*向链表末尾加一个节点*/
void add_node(List* pList, int number);

/*删除节点*/
void delete_node(List* pList, int number);

/*遍历链表并打印各节点*/
void print_linkedlist(List *pList);

/*清空链表*/
void clear_list(List* pList);

#endif 