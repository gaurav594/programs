#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int index,n;
		scanf("%d %d",&index,&n);
		int pos ;
		switch(index){
			case 1:
				if(n==0)
					pos=1;
				else if(n%2==0)
					pos=1;
				else
					pos=0;
				break;
		 	case 0:
			case 2:
				if(n==0)
					pos=index;
				else if(n%2==0)
					pos = 0;
				else
					pos = 1;
				break;
		}
		printf("%d\n",pos);
	}
}