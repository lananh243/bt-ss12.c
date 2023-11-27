#include<stdio.h> 
#include<math.h>
int main(){
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d",&m);
	int numbers[n][m];
	printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
	printf("Cac so nguyen to trong mang:\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int isPrime = 0;
				if(numbers[i][j]>=2){
						for(int t=2;t<=sqrt(numbers[i][j]);t++){
							if(numbers[i][j]%t==0){
							isPrime = 1;
							break;
						   	}
						}
						}else{
							isPrime = 1;
						}
						if(isPrime==0){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				printf("\n");
				return 0;
}
