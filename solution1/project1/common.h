#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

/*���1-1000��ǰ50��������*/
void print_prime();

/*�ж�һ�����Ƿ�Ϊ����,�Ƿ���1�����򷵻�0*/
int is_prime(int i);

/*շת������������������Լ��*/
int get_gcd(int a, int b);

/*��������*/
int reverse_num(int num);

/*���һ��3-7λ��ˮ�ɻ���*/
void get_shuixianhua(int n);

/*��������Ϸ*/
void guess_number();

/*tic_tac_toe��Ϸ ����3*3���̵���Ϸ��� -1:û��Ӯ�� 1��XӮ   0��0Ӯ */
int tic_tac_toe_game();

/*����һ��������������ֵ����Сֵ*/
void minmax(int a[], int len, int *max, int *min);

/*����Ԫ��xɾ��*/
void delete_array(int *a, int len, int x);

#endif