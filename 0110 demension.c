#include <stdio.h>
#define ROWS 10
#define COLS 10
#define WID 10
#define LEN 10

void init_ary(int a[ROWS][COLS], int b[WID][LEN]);
void print_ary(int a[ROWS][COLS]);
int main(void)
{
	int a[ROWS][COLS]={0};
	int b[WID][LEN]={0};
	
	init_ary(a, b);
	print_ary(a);
	print_ary(b);
	return 0;
}
void init_ary(int a[ROWS][COLS], int b[WID][LEN])
{
	int number, d, c ;
	srand((unsigned)time(NULL));
	
	for(int i=0;i<100;i++){
		int x=rand()%10;
		int y=rand()%10;
		d=x;
		c=y;
		printf("(x, y)=(%d %d)\n", d, c);
		number=rand()%100+1;
		printf("결과=%d\n", number);
		a[d][c]=number;
		if(a[d][c]>=1)
		{
		b[d][c]+=1;
		}
	}
}
void print_ary(int a [ROWS][COLS])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

