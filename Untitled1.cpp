#include<stdio.h>
int main(){
	int n,sum=0,max=-99; scanf("%d",&n);
	char l;	
	int a[n];
	for (int i=0;i<n;i++) {
	scanf("%d",&a[i]);
	sum+=a[i];
	if (a[i]>max) max=a[i]; 
	}
	scanf(" %c",&l);

	if (l == 's') printf("tong cac so la %d",sum);
	else printf("trung binh cong cac so la %.2f",float(sum/n));

	
	
}