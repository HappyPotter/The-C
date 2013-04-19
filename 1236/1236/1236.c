#include<stdio.h>
#include<stdlib.h>
#define MAX 1008
#define TNUM 12
struct{
	int N;
	int M;
	int G;
}examroom;
typedef struct{
	char num[21];
	int m;
	int sum;
	int title[TNUM];
}student;
int main(void)
{
	int flag[TNUM];
	int i, j, count, apple;
	student stu[MAX], passed[MAX], sorted[MAX];

	while(scanf("%d", &examroom.N), examroom.N)
	{
		count = 0;
		apple = -1;

		scanf("%d%d", &examroom.M, &examroom.G);
		for(i = 1;i <= examroom.M;i++)
		{
			scanf("%d",&flag[i]);
		}
		for(j = 0;j < examroom.N;j++)
		{
			scanf("%s%d", stu[j].num, &stu[j].m);
			for(i = 0;i < stu[j].m;i++)
				scanf("%d",&stu[j].title[i]);
		}
		for(i = 0;i < examroom.N;i++)
		{
			stu[i].sum = 0;
			for(j = 0;j < stu[i].m;j++)
			{
				stu[i].sum+=stu[i].title[j]*flag[stu[i].title[j]];
			}
		}
		for(i = 0;i < examroom.N;i++)
		{
			if(stu[i].sum >= examroom.G){
				passed[++apple] = stu[i];
				count++;
			}
		}
		for(i = 0; i < apple; i++)
		{
			
		}
		printf("%d",count);
	}
	system("pause");
}