#include <stdio.h>
#include <string.h>

int main(void){
    int len;
	char c;
	while((c=getchar()) != EOF){
		len = strlen(&c);
        printf("%d\n", len);
	}
	return 0;
}