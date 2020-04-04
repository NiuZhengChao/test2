#include <stdio.h>



int main(void) {
	int add[]={1,2,3,4,5,6,7,8,9,10};
	int len=sizeof(add)/sizeof(add[0]);
	printf("%d",len);
	int *p=add;
	
	for(;p<add+len;p++){
		printf("%d",*p);
		
	}
	return 0;
}