#include <stdio.h>
#include <stdlib.h>
#define N_STUDENT 5

int main(void)
{
	int i,average;
	int sum;
	int grade[N_STUDENT];
	printf("5명의 점수를 입력하세요.\n");
	
	sum=0;
	for(i=0;i<N_STUDENT;i++){
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	
	average=sum / N_STUDENT;
	printf("score average: %i \n",average);
		
	return 0;
	
}
