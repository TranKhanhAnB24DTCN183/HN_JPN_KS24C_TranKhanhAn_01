#include<stdio.h>
int main(){
	int n;
	int arr[100];
	int check;
	int sum=0;
	int pos,value;
	int i;
	int numbers;
	
	
	
do{
   printf("\n---MENU---\n");
   printf("1 . Nhap phan tu va gia tri cho mang\n");
   printf("2 . In gia tri cac phan tu trong mang\n");
   printf("3 . Dem so luong cac phan tu trong mang\n");
   printf("4 . Tim gia tri nho thu hai trong mang\n");
   printf("5 . Them phan tu vao mang\n");
   printf("6 . Xoa phan tu trong mang\n");
   printf("7 . Sap xep theo thu tu giam dan\n");
   printf("8 . Nhap vao phan tu va tim kiem trong mang\n");
   printf("9 . Xoa toan bo phan tu trung trong mang va hien thi mang\n");
   printf("10 . Dao nguoc thu tu cac phan tu trong mang\n");
   printf("11 . Thoat\n");
      printf("Nhap vao chuc nang :");
      scanf("%d",&check);
      
      if(check==11){
      	printf("Thoat chuong trinh !!!");
      	break;
	  }
	switch(check){
		case 1:
				{
				 printf("Nhap vao so phan tu co trong mang:");
				 scanf("%d",&n);
				 for(int i=0;i<n;i++){
				 	printf("Arr[%d]=",i);
				 	scanf("%d",&arr[i]);
				 }
				 break;
			    }
	    
		case 2:
            	{
                printf("Gia tri cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
				 }
                break;
	    
		case 3:
			     for(int i=0;i<n;i++){
				 	printf("%d\t",arr[i]);
					sum+=1;	 
			    }
			    printf("\nSo luong phan tu co trong mang: %d\n",sum);
			    break;
		    
		case 4:
		    	{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
					for(int i=1;i<n;i++){
							int key=arr[i];
							int j=i-1;
						while(j>=0&&key<arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
						
					}
					printf("\n");
					printf("Phan tu nho thu hai trong mang :");
					for(int i=0;i<n;i++){
						if(i=1){
							printf("%d\t",arr[i]);
							break;
						}
					}
                }
                break;
		   case 5:
		    {
			    printf("Nhap vi tri muon them phan tu : ");
			    scanf("%d", &pos);
			 
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			    printf("Nhap gia tri muon chen: ");
			    scanf("%d", &value);
					    
			    for (i = n; i > pos; i--) {
			        arr[i] = arr[i - 1];
			    } 
				    arr[pos] = value;
				    n++;
			
			    printf("Mang sau khi chen gia tri :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;
		   case 6:
		   	 {
                printf("Nhap vi tri muon xoa: ");
			    scanf("%d", &pos);
			
			   
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        break;
			    }
			
			     pos=pos-1;
			    
			    for (i = pos; i <n-1; i++) {
			        arr[i] = arr[i+1];
			    } 
				    n--;
			
			    printf("Mang sau khi xoa :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
                }
                break;
		   	
		   case 7:
		   		{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
					for(int i=1;i<n;i++){
							int key=arr[i];
							int j=i-1;
						while(j>=0&&key<arr[j]){
							arr[j+1]=arr[j];
							j--;
						}
						arr[j+1]=key;
						
					}
					printf("\n");
					printf("Mang sau khi sap xep theo thu tu giam dan la :\n");
					for(int i=n-1;i>=0;i--){
							printf("%d\t",arr[i]);
						}
                }
                break;
		   	
		   case 8:
		   	{
	            printf("Mang hien tai la");
				   for(int i=0;i<n;i++){
				     	printf("%d\t",arr[i]);
			    }
			     printf("\nNhap vao phan tu can tim ");
			     scanf("%d",&numbers);
			     int check=0;
			      for(int i=0;i<n;i++){
			      	if(arr[i]==numbers){
			      		printf("Phan tu co trong mang nam o vi tri thu %d\n",i);
			      		check=1;
					  }	 
			    }
			       if(check==0){
			       	printf("Mang khong chua phan tu can tim\n");
				   }
			}
                break;
		   case 9:
		   	 printf("Xoa phan tu trung lap trong mang ");
		       break;
		   	  
		   case 10:
		   		{
                    printf("Mang gom nhung phan tu la :\n");
		   			for(int i=0;i<n;i++){
						printf("%d\t",arr[i]);
					    }
				        printf("\n");
				    printf("Mang dao nguoc la :\n");
					for(i=n-1;i>=0;i--){
						printf("%2d\t",arr[i]);		
					}
					   
					break;
				}
					
		   case 11:
		   	 printf("Thoat chuong trinh !!!");
		default:
			printf("Loi vui long nhap lai...");
		   
}

}while(check<=11);


    return 0;
     
}
