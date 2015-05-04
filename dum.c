#include<stdio.h>
#include<string.h>
 
int main(){
	int T;
	scanf("%d", &T);
	while(T--){
		char str[200];
		scanf("%s", str);
		int i=0, j, count, k;
		while(str[i]!='\0'){
			if(str[i]=='#')
				i++;
			else{
				char c;
				c=str[i];
				j=i;
				count=0;
				while(c==str[i]){
					i++;
					count++;
				}
				switch(str[j]){
					case '0' :
						for(k=0; k<count; k++){
							printf(" ");
						}
						break;
					case '2' :
						switch(count){
							case 1: printf("A");
								break;
							case 2: printf("B");
								break;
							case 3: printf("C");
								break;
						}
						break;
					case '3' :
						switch(count){
							case 1: printf("D");
								break;
							case 2: printf("E");
								break;
							case 3: printf("F");
								break;
						}
						break;
					case '4' :
						switch(count){
							case 1: printf("G");
								break;
							case 2: printf("H");
								break;
							case 3: printf("I");
								break;
						}
						break;
					case '5' :
						switch(count){
							case 1: printf("J");
								break;
							case 2: printf("K");
								break;
							case 3: printf("L");
								break;
						}
						break;
					case '6' :
						switch(count){
							case 1: printf("M");
								break;
							case 2: printf("N");
								break;
							case 3: printf("O");
								break;
						}
						break;
					case '7' :
						switch(count){
							case 1: printf("P");
								break;
							case 2: printf("Q");
								break;
							case 3: printf("R");
								break;
							case 4: printf("S");
								break;
						}
						break;
					case '8' :
						switch(count){
							case 1: printf("T");
								break;
							case 2: printf("U");
								break;
							case 3: printf("V");
								break;
							
						}
						break;
					case '9' :
						switch(count){
							case 1: printf("W");
								break;
							case 2: printf("X");
								break;
							case 3: printf("Y");
								break;
							case 4: printf("Z");
								break;
						}
						break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
 