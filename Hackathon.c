#include<stdio.h>
int main(){
		int arr[100];
		int n=0, choice, INT_MAX, INT_MIN;
	do {
		printf("\nMENU\n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra cac gia tri phan tu\n");
		printf("3.Dem so luong cac so hoan hao co trong mang\n");
		printf("4.Tim gia tri nho thu 2 trong mang\n");
		printf("5.Them phan tu vao mang o vi tri dau tien\n");
		printf("6.Xoa mot phan tu\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Tim kiem mot phan tu\n");
		printf("9.Sap xep lai mang (so le dung truoc, so chan dung sau)\n");
		printf("10.Dao nguoc thu tu phan tu \n");
		printf("11.Thoat chuong trinh\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch (choice){
			case 1: {
				printf("Nhap so phan tu: ");
				scanf("%d",&n);
				if(n<=0 || n>100){
					printf("So luong phan tu khong hop le !\n");
					break;
				}
				for(int i = 0; i < n; i++){
					printf("Phan tu tai vi tri %d: ",i);
					scanf("%d",&arr[i]);
				}
				break;
			}
			case 2: {
				printf("Cac phan tu trong mang: ");
				for(int i = 0; i < n; i++){
					printf("arr[%d]=%d \n",i,arr[i]);
				}
				printf("\n");
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				if (n < 2) {
                                printf("Mang khong du phan tu de tim gia tri nho thu hai.\n");
                                break;
                                }
                               int min1 = arr[0], min2 = __INT_MAX__;
                               for (int i = 1; i < n; i++) {
                                   if (arr[i] < min1) {
                                       min2 = min1;
                                       min1 = arr[i];
                                    } else if (arr[i] > min1 && arr[i] < min2) {
                                   min2 = arr[i];
                                    }
                                    }
                                 if (min2 == __INT_MAX__) {
                                    printf("Khong co gia tri nho thu 2 trong mang.\n");
                                   } else {
                                     printf("Gia tri nho thu 2 trong mang la: %d\n", min2);
                                      }
				break;
			}
			case 5:{
				int position, value;
				printf("Nhap vi tri ban muon them phan tu ");
				scanf("%d",&position);
				printf("Nhap vao gia tri moi");
				scanf("%d",&value);
				for(int i=n;i>position;i--){
					arr[i]=arr[i-1];
				}
				arr[position]=value;
				n++;
				break;
			}
			case 6:{
				int index;
				printf("Moi ban nhap vi tri muon xoa phan tu:  ");
				scanf("%d",&index);
				if(index<=0 || index>100){
					printf("Vi tri khong hop le");
					break;
				}
				for(int i=index;i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				break;
			}
			case 7:	{
				for(int i=0;i<n-1;i++){
					int maxIndex=i;
					for(int j=i+1;j<n;j++){
						if(arr[j]>arr[maxIndex]){
							maxIndex=j;
						}
					}
					if(maxIndex!=i){
						int temp = arr[maxIndex];
						arr[maxIndex]=arr[i];
						arr[i]=temp;
					}
				}
				for(int i=0;i<n;i++){
					printf("%d",arr[i]);
				}
				break;
			}
			case 8:{
				int index,found=0;
				printf("Nhap gia tri can tim: ");
				scanf("%d",&index);
				for(int i=0;i<n;i++){
					if(arr[i]==index){
						printf("Gia tri %d nam o vi tri %d",index,arr[i]);
						found=1;
					}
					if(found != 1){
						printf("Gia tri khong ton tai trong mang ");
					}
				}
				break;
			}
			case 9:{
				
				break;
			}
			case 10:{
				
				break;
			}
			case 11:{
				printf("Thoat chuong trinh \n");
				break;
			}
			default:
                printf("Lua chon khong hop le!\n");
                break;
		}
	} while (choice!= 11);
	return 0;
}
