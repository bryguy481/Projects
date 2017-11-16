#include <stdlib.h>
#include <stdio.h>

int main(int argc,char ** argv){
    printf("Hello World\n\n");
    if(argc > 1){
        for(int i = 1; i < argc;i++){
	    printf("%s\n",argv[i]);
	}
    }

    swap(7,10);
    fibo(10);
    combo();

    return 0;
}

void combo(){

	printf("\nAll Combos of AAAA - ZZZZ\n");
	char buff[5] = "AAAA\0";

	printf("BUFF: %s\n",buff);
	int count = 0;

	for(int i = 0; i < 26; i++){
		for(int j = 0; j < 26; j++){
			for(int k = 0; k < 26;k++){
				for(int l = 0; l < 26; l++){
					
					printf("BUFF: %s\n",buff);
					count++;	
					buff[3] += 1;
				}
				buff[3] = 'A';
				buff[2] += 1;
			}
			buff[2] = 'A';
			buff[1] += 1;
		}
		buff[1] = 'A';
		buff[0] += 1;
	}

	printf("Count: %d\n\n", count);

}

void fibo(int n){
	int first  = 1;
	int second = 0;

	for(int i = 1; i <= n; i++){
		int cur = first + second;
		second = first;
		first = cur;
		printf("Fib #%d: %d\n", i,cur);
	}

}

void swap(int x, int y){
    printf("Before  SWAP x:%d y:%d\n",x,y); 
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After   SWAP x:%d y:%d\n\n",x,y); 
}
