#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

/*输出1-1000的前50个的素数*/
void print_prime();

/*判断一个数是否为素数,是返回1，否则返回0*/
int is_prime(int i);

/*辗转相除计算两个数的最大公约数*/
int get_gcd(int a, int b);

/*整数逆序*/
int reverse_num(int num);

/*输出一个3-7位的水仙花数*/
void get_shuixianhua(int n);

/*猜数字游戏*/
void guess_number();

/*tic_tac_toe游戏 返回3*3棋盘的游戏结果 -1:没人赢、 1：X赢   0：0赢 */
int tic_tac_toe_game();

/*返回一个整型数组的最大值和最小值*/
void minmax(int a[], int len, int *max, int *min);

/*数组元素x删除*/
void delete_array(int *a, int len, int x);

#endif