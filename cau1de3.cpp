#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
	int n,max=INT_MIN,s,dh;
	printf("hay nhap bac cua da thuc ");
	scanf("%d", &n);
	int a[n+1];
	for (int i = 0; i <= n; i++){
		printf("Hay nhap he so thu %d ", i );
		scanf("%d", &a[i]);
		if ( i % 2 == 1 || a[i] > max  ) max = a[i];
	}
	int t; printf("hay nhap t = ");
	scanf("%d",&t); 
	for (int i = 0; i <= n; i++){
		s+=pow(t,i)*a[i];	
	}
	dh=0;
	for (int i = 1; i <= n; i++){
		dh+=a[i]*i*pow(t,i-1);}
	int tam;
	for (int i = 0;i < n ; i++){
		for (int j = i+1; j <=n ;j++){ 
		if (a[i]>a[j]){
		
		tam=a[i];
		a[i]=a[j];
		a[j]=tam;	
		}
	}}
	printf("Da thuc la: %d", a[0]);
		for (int i = 1; i <= n; i++){ printf("+ %d*(x^%d)", a[i], i);}	
	if (s==0) printf("\nt la nghiem cua da thuc");
	else printf("\nt khong la nghiem");
	printf("\ndao ham cua da thuc tai t la: %d", dh);
	printf("\ngia tri lon nhat cua cac he so bac le la: %d",max);
	printf("\nday so giam dan la: ");
	for (int i = n; i >= 0; i--){
		printf("%d ",a[i]);
}
return 0;
}
	