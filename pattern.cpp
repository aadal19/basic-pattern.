#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int r=1;r<=a;r++){
		for(int c=r;c<=a;c++){
			printf("* ");
		}
		printf("\n");
	}

printf("\n");
for(int r=1;r<=a;r++){
	for(int c=1;c<a;c++)
	printf(" ");
for(int col=1;col<=a;col++){
	printf("* ");
}
printf("\n");
}
printf("\n");



for(int r=1;r<=a;r++){
	for(int c=r;c<a;c++)
	printf(" ");
for(int col=1;col<=a;col++){
	printf("* ");
}
printf("\n");
}

printf("\n");


for(int r=1;r<=a;r++){
	for(int c=1;c<=a;c++){
		if(r==1 ||c==1 || r==a || c==a ){
			printf("* ");
		}
		else{
				printf("  ");
		}
	}
		printf("\n");

}
printf("\n");


for(int r=1;r<=a;r++){
	for(int c=1;c<=a;c++){
		if(r==1 ||c==1 || r==a || c==a || r==c||r+c==a+1){
			printf("* ");
		}
		else{
				printf("  ");
		}
	}
		printf("\n");

}
printf("\n");

int n=1;
	for(int r=1;r<=a;r++){
		for(int c=r;c<=a;c++){
			printf("%02d ",n++);
		}
		printf("\n");
	}
printf("\n");



//for(int r=1;r<=a;r++){
//	for(int c=1;c<=r;c++){
//		printf(" ");
//	}
//	for(int q=1;q<c;q++){
//		printf("*");
//	}
//	printf("\n");
//}
//
printf("\n");


for(int r=1;r<=a;r++){
	for(int c=1;c<=a;c++){
		if((r+c)%2==0){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
	}
	printf("\n");
}

printf("\n");


for(int r=1;r<=a;r++)
{
	for(int c=1;c<=a;c++){
		if(c==1 ||r==c){
			printf("* ");
		}else{
			printf(" ");
		}
	}
	printf("\n");
}




	return 0;
}
