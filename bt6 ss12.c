#include<stdio.h>
#include<stdlib.h>
int main(){
	int numbers[100];
	int currentIndex = 0;
		int size,addIndex,addValue,newValue,indexToChange,deleteIndex,select;
		int count,temp,findNumber,left,right;
	do{
		printf("***********MENU************\n");
		printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.In ra gia tri cac phan tu dang quan li\n");
		printf("3.Them mot phan tu vao vi tri chi dinh\n");
		printf("4.Sua mot phan tu o vi tri chi dinh\n");
		printf("5.Xoa mot phan tu tai vi tri chi dinh\n");
		printf("6.Sap xep cac phan tu\n");
		printf("7.Giam dan\n");
		printf("8.Tang dan\n");
		printf("9.Tim kiem phan tu vao\n");
		printf("10.Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap vao so phan tu cua mang:");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("numbers[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
					printf("Gia tri cac phan tu trong mang dang quan li:\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				printf("Nhap vao gia tri can them trong mang:");
				scanf("%d",&addValue);
				printf("Nhap vao chi so can chen vao mang:");
				scanf("%d",&addIndex);
				if(addIndex<0||addIndex>=99){
					printf("Khong the chen phan tu vao chi so %d\n",addIndex);
				}else{
					if(addIndex==currentIndex){
						numbers[currentIndex]=addValue;
						currentIndex++;
					}else if(addIndex>currentIndex){
						for(int i=currentIndex;i<addIndex;i++){
							numbers[i] = 0;
						}
						numbers[addIndex] = addIndex +1;
						
					}else{
						for(int i=currentIndex;i>addIndex;i--){
							numbers[i] = numbers[i-1];
						}
						currentIndex++;
						numbers[addIndex] = addValue;
						
					}
				}
				break;
			case 4:
				printf("Nhap vao gia tri can sua trong mang:");
				scanf("%d",&newValue);
				printf("Nhap vao chi so can sua vao mang:");
				scanf("%d",&indexToChange);
				if(indexToChange<0||indexToChange>=99){
					printf("Khong the chen phan tu vao chi so %d\n",indexToChange);
				}else{
					if(indexToChange==currentIndex){
						numbers[currentIndex]=newValue;
						currentIndex++;
					}else if(indexToChange>currentIndex){
						for(int i=currentIndex;i<newValue;i++){
							numbers[i] = 0;
						}
						numbers[addIndex] = newValue +1;
						
					}else{
						for(int i=currentIndex;i>newValue;i--){
							numbers[i] = numbers[i-1];
						}
						currentIndex++;
						numbers[indexToChange] = newValue;
						
					}
				}
				break;
			case 5:
				printf("Nhap vi tri muon xoa:");
				scanf("%d",&deleteIndex);
				for(int i=deleteIndex;i<currentIndex;i++){
					numbers[i]=numbers[i+1];
				}
				currentIndex--;
				break;
			case 6:
				printf("Sap xep cac phan tu:\n");
				printf("7. Giam dan:\n");
				printf("8. Tang dan:\n");
				printf("Lua chon:");
				scanf("%d",&select);
				if(select==7){
					for(int i=0;i<currentIndex;i++){
						for(int j=i+1;j<currentIndex;j++){
							if(numbers[i]<numbers[j]){
								temp=numbers[i];
								numbers[i]=numbers[j];
								numbers[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<currentIndex;i++){
							printf("%d\t",numbers[i]);
						}
					}else if(select==8){
						for(int i=0;i<currentIndex;i++){
							for(int j=i+1;j<currentIndex;j++){
								if(numbers[i]>numbers[j]){
									temp=numbers[i];
									numbers[i]=numbers[j];
									numbers[j]=temp;
								}
							}
						}
						printf("Sap xep:");
						for(int i=0;i<currentIndex;i++){
							printf("%d\t",numbers[i]);
						}
					}else{
						break;
					}
					break;
			case 9:
				{
					for(int i=0;i<currentIndex;i++){
						if(numbers[i]<numbers[i+1]){
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							int mid;
							while(left<=right){
							mid = (left+right)/2;
							if(numbers[mid] == findNumber){
								break;
							}else if(numbers[mid]<findNumber){
								left=mid+1;
							}else{
								right=mid-1;
							}
							}
						printf("Phan tu nums[%d] = %d la gia tri tim kiem.",mid,numbers[mid]);
						}else{
							printf("Nhap gia tri tim kiem:");
							scanf("%d",&findNumber);
							for(int i=0;i<currentIndex;i++){
								if(numbers[i]==findNumber){
									printf("Phan tu nums[%d] = %d la gia tri tim kiem\n",i,numbers[i]);
								}else{
									count++;
								}
						}
						if(count==currentIndex){
							printf("Khong co gia tri duoc tim kiem\n");
						}
							}
						}
					}
				break;
			case 10:
				break;
			default:
				printf("Nhap lai lua chon:");
				break;
           }
    }while(1==1);
}
