#include "linkedlist.h"
#include "stdlib.h"
#include "stdio.h"

void add_node(List* pList, int number)
{
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL; //���½ڵ�ӵ���������
	// �ҵ����һ���ڵ�last
	Node *last = pList->head;
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}
		// attach  
		last->next = p;
	}
	else {
		pList->head = p;
	}
}

void print_linkedlist(List *pList) 
{
	Node *p;
	for ( p = pList->head;p;p=p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
}

void delete_node(List* pList, int number)
{
	Node *q;//ǰһ���ڵ�
	Node *p;//Ҫɾ���Ľڵ�
	for (q = NULL, p= pList->head; p; q=p, p = p->next)
	{
		if (p->value == number) 
		{
			if (q)
			{
				q->next = p->next;
			}
			else
			{
				pList->head = p->next;
			}
			free(p);
			break;
		}
	}
}

void clear_list(List* pList) 
{
	Node *q;
	Node *p;
	for (p = pList->head; p; p = q)
	{
		q = p->next;
		free(p);
	}
}