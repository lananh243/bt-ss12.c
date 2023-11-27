#include<stdio.h>
int sum1(int a,int b){
	if(a>b){
		return a+b;
	}else{
		return b+a;
	}
}
int sum2(int b,int c){
	if(b>c){
		return b+c;
	}else{
		return c+b;
	}
}
int sum3(int a,int c){
	if(a>c){
		return a+c;
	}else{
		return c+a;
	}
}
int difference1(int a,int b){
	if(a>b){
		return a-b;
	}else{
		return b-a;
	}
}
int difference2(int b,int c){
	if(b>c){
		return b-c;
	}else{
		return c-b;
	}
}
int difference3(int c,int a){
	if(c>a){
		return c-a;
	}else{
		return a-c;
	}
}
int main(){
	int a,b,c;
	printf("Nhap a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap so thu 1 la\n");
	printf("%d + %d = %d\n",a,b,sum1(a,b));
	if(a>b){
		printf("%d - %d = %d\n",a,b,difference1(a,b));
	}else{
		printf("%d - %d = %d\n",b,a,difference1(b,a));
	}
	printf("Cap so thu 2 la\n");
	printf("%d + %d = %d\n",b,c,sum2(b,c));
	if(b>c){
		printf("%d - %d = %d\n",b,c,difference2(b,c));
	}else{
		printf("%d - %d = %d\n",c,b,difference2(c,b));
	}
	printf("Cap so thu 3 la\n");
	printf("%d + %d= %d\n",a,c,sum3(a,c));
	if(a>c){
		printf("%d - %d = %d\n",a,c,difference3(a,c));
	}else{
		printf("%d - %d = %d\n",c,a,difference3(c,a));
	}
	
}


