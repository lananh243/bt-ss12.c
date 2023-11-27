#include<stdio.h> 
int mul1(int a,int b){
	if(a<b){
		return a*b;
	}else{
		return b*a;
	}
}
int mul2(int b,int c){
	if(b<c){
		return b*c;
	}else{
		return c*b;
	}
}
int mul3(int a,int c){
	if(a<c){
		return a*c;
	}else{
		return c*a;
	}
}
int div1(int a,int b){
	if(a<b){
		return b%a;
	}else{
		return a%b;
	}
}
int div2(int b,int c){
	if(b<c){
		return c/b;
	}else{
		return b/c;
	}
}
int div3(int c,int a){
	if(c<a){
		return a/c;
	}else{
		return c/a;
	}
}
int main(){
	int a,b,c;
	printf("Nhap a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("Cap so thu 1 la\n");
	printf("%d * %d = %d\n",a,b,mul1(a,b));
	if(a<b){
		printf("(%d) % (%d) = %d\n",b,a,div1(b,a));
	}else{
		printf("(%d) % (%d) = %d\n",a,b,div1(a,b));
	}
	printf("Cap so thu 2 la\n");
	printf("%d * %d = %d\n",b,c,mul2(b,c));
	if(b<c){
		printf("(%d) / (%d) = %d\n",c,b,div2(c,b));
	}else{
		printf("(%d) / (%d) = %d\n",b,c,div2(b,c));
	}
	printf("Cap so thu 3 la\n");
	printf("%d * %d= %d\n",a,c,mul3(a,c));
	if(a<c){
		printf("(%d) / (%d) = %d\n",c,a,div3(c,a));
	}else{
		printf("(%d) / (%d) = %d\n",a,c,div3(a,c));
	}
	
}
