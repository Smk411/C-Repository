#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#define randomize() srand((unsigned int)time(NULL))
#define random(min,max)((rand()%((max)-(min)+1))+(min))

double power(double x, int n);
int main(){
	FILE *output;
	int min=0;
	int max=1000;
	int rand_num=0;
	int ran[100000];
	int i=0;
	clock_t start,finish;


	start=clock();
	randomize();
	output=fopen("num.txt","w");
	randomize();
	while(1){
	for(i=0; i<10000;i++){
		rand_num=random(min,max);
		fprintf(output," %d ",rand_num);
	}
	if(i==10000)
		break;
}
	
	finish=clock();
	printf("연산시간 : %.3lf msec %.3lf sec",(double)finish-start,(finish-start)/(double)1000);
	fclose(output);
	system("PAUSE");
	return 0;
}
double power(double x, int n){
	if(n==0){
		return 1;
	}
	else if((n%2)==0){
		return power(x*x,n/2);
	}
	else{
		return x*power(x*x,(n-1)/2);
	}
}