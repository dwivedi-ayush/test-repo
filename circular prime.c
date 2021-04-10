#include<stdio.h>
#include<math.h>
int isprime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            
            return 0;}
    }
    
    return 1;
}
int main(){
    int n,count=0;
    float temp=1;
    int temp2;
    scanf("%d",&n);
    int arr[10];
    if(isprime(n)==0){
        printf("Not circular prime");
        return 0;
    }
    for(int i=0;pow(10,i)<n;i++){
        
        if(i!=0){
        temp2=pow(10,i+1);
        arr[i]=10*(n%temp2-arr[i-1])/temp2;}
        else{
            temp2=pow(10,i+1);
        arr[i]=n%temp2;
        }
        
        count+=1;
    }
    
	int arr1[count];
	for(int i=0;i<count;i++){
	    arr1[i]=arr[i];
	    //printf("%d\n",arr1[i]);
	}
	/*int arr2[count];
	for(int i=0;i<count;i++){
	    arr2[count-i-1]=arr1[i];
	    //printf("%d\n",arr2[count-i-1]);
	}*/
	
	int count1;
	int temp3,temp4;
	for(int i=0;i<count;i++){
	    printf("\n");
	    count1=0;
	    temp4=0;
	    for(int j=i;j<i+count;j++){
	        //printf("%d\n",arr2[j%count]);
	        temp2=arr1[j%(count)];
	        temp3=pow(10,count1++);
	        //printf("%d\n",temp3*temp2);
	        temp4+=temp2*temp3;
	        //printf("%d\n",temp);
	    }
	    if(isprime(temp4)==0){
	    printf("Not circular prime");
	    return 0;}
	    
	}
	printf("Circular prime");
    return 0;
}