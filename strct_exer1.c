#include <stdio.h>
#include <string.h>
#ifndef USER_COM_ENA
	#define USER_COM_ENA
#endif

#include "exer_com.h"

void str_copy(char *p1, char *p2){
  for(; *p1 != '\0'; ){
    *p2++ = *p1++;
  }
  *(p2 + 1) = '\0';
}

int main(int argv, char *argc[])
{
	int i=0;
	int size;
	st_exer array[2]={{1,2,"Good morning!!"},{3,4,"Good afternoon!!"}};
	st_exer *p_array;
	char pen[14]="This is a pen!";
	p_array=&array;//アドレス渡し

	printf("p_array_id=%x\n",p_array);
	
	printf("p_array=%d %d %s\n",p_array->from,p_array->to,p_array->msg);
	printf("p_array=%d %d %s\n",(p_array+1)->from,(p_array+1)->to,(p_array+1)->msg);

	//p_array=&array;//アドレス渡し

	(p_array+1)->from = 'A';
	(p_array+1)->to = 'B';
	strcpy((p_array+1)->msg,pen);
	//(p_array+1)->msg = pen;

	printf("p_array=%d %d %s\n",p_array->from,p_array->to,p_array->msg);
	printf("p_array=%c %c %s\n",(p_array+1)->from,(p_array+1)->to,(p_array+1)->msg);
	return 0;
}
