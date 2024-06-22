#include <stdio.h>

int isEvenOdd(int num){
	if(num%2==0) return 1;
	if(num%2!=0) return 0;
}
int main(){
	int toCheck = 7, i;
	for(i=toCheck; i=1;){
		if(isEvenOdd(i) == 1){
			i/=2;
			printf(i);
		}
		else{
			i = (i*3)+1;
			printf(i);
		}
	}
}