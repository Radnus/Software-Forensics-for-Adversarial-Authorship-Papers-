
#include<stdio.h>

int getNext(int num);

int main(){
    int i=0;

    while (i < 3){
      i = getNext(i);
      printf("%s", "Hello Earth!\n");
	}
	return 0;
}

int getNext(int num){
	return num+1;
}
