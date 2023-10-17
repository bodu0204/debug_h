//version:1.0.0

#ifndef DEBUG_H
#define DEBUG_H
#include <iostream>
#include <unistd.h>
#include <sys/time.h>
#define TEST(msg) std::cout<<"[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<msg<<std::endl;
#define TEST_(msg) std::cout<<"---------------------------------------------[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<msg<<std::endl;
#define TESTv(msg, i) std::cout<<"[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<msg<<":"<<i<<std::endl;
#define T std::cout<<"[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<std::endl;
#define T_ std::cout<<"---------------------------------------------[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<std::endl;
#define Tv(i) std::cout<<"[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<#i<<":"<<i<<std::endl;
#define FOR(x,j) {std::cout<<"[("<< __FILE__<<"/"<<__LINE__<<") "<<__func__<<" ]"<<#x<<":";for(size_t i = 0; x + i != j; i++){std::cout<<x[i]<<","<<std::end;}std::cout<<std::endl;}
#define TAKE(i,j) {static size_t test_arg = 0; if(!(test_arg % j)){i} test_arg++;}
#define STOP {char c; read(STDIN_FILENO, &c, sizeof(char));}

#endif



/*ショートカット


#include "debug.h"

#ifndef _H 
#include ""
#endif





 */

/* 一定回数でプログラムを強制終了 */

//* test */static	size_t stc = 0;
//* test */const int stc_max = 10000;
//* test */const int onoff = 1;
//* test */stc++;
//* test */if (stc > stc_max && onoff)
//* test */{
//* test */	printf("the number is too big"); TEST
//* test */	exit(0);
//* test */}

/* 時間を計測 */
//* test */	double	time_diff(void)
//* test */	{
//* test */		static struct timespec	p = {0};
//* test */		struct timespec			n;
//* test */		unsigned int			sec;
//* test */		int						nsec;
//* test */
//* test */		if (!p.tv_sec)
//* test */		{
//* test */			clock_gettime(CLOCK_REALTIME, &p);
//* test */			return (0);
//* test */		}
//* test */		clock_gettime(CLOCK_REALTIME, &n);
//* test */		sec = n.tv_sec - p.tv_sec;
//* test */		nsec = n.tv_nsec - p.tv_nsec;
//* test */		p = n;
//* test */		return ((double)sec + (double)nsec / (1000 * 1000 * 1000));
//* test */	}
