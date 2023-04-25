#include <stdio.h>
#include "exer_com.h"

int main(int argv, char *argc[]){
	union uni_exer uni={.exer={'C','D',"Good evening!!"}};
	union uni_exer *p_uni;
	char apple[20]="This is an apple!";
	int i=0;
	p_uni=&uni;
	printf("unit st from=%c\n",uni.exer.from);
	printf("unit st from=%c\n",uni.exer.to);
	printf("unit st from=%s\n",uni.exer.msg);

	printf("---pointer display---\n");
	
	p_uni->exer.from='E';
	p_uni->exer.to='F';
	while(apple[i]!='\0'){
		p_uni->exer.msg[i]=apple[i];
		i++;
	}
	printf("unit st from=%c\n",uni.exer.from);
	printf("unit st from=%c\n",uni.exer.to);
	printf("unit st from=%s\n",uni.exer.msg);
	return 0;
}
