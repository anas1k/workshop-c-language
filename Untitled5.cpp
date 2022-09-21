#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    int i, r1,r2;
    r1= 0;
    r2= 0;
    for(i=0;i<=arr_count-2;i++){
        r1+=arr[i];
    }
    for(i=1;i<=arr_count;i++){
        r2+=arr[i];
        
    }
    printf("%d %d",r1,r2);
        
}
int main(){
	int arr[]={1,2,3,4,5};
	int arr_count=5;
	
	miniMaxSum(arr_count,arr);
	
}
