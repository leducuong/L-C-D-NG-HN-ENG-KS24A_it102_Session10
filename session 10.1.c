#include <stdio.h>

int main() {
    // Kh?i t?o m?ng
    int array[] = {10, 20, 30, 40, 50};
    int n,dem=0;
    printf("kiem tra phan tu trong mang ");
    scanf("%d",&n);
     for (int i = 0; i < 5; i++) {
        if (array[i] == n) {
        	printf("%d",i+1);
        	dem++;
        	
		}
	}
	if(dem==0){
			printf("ko co rong mang");
	}
	return 0;
}

	
