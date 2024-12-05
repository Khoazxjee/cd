#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Hay nhap so diem ");
    scanf("%d",&n);
    int a[n],b[n];
    for (int i = 0; i < n; i++){
    	printf("Hay nhap x va y cua diem thu %d ", i+1);
        scanf("%d",&a[i]);
        scanf("%d",& b[i]);
}
int x,y,demt=0,demd=0;
float kq;
printf("Hay nhap a va b ");
scanf("%d%d",&x,&y);
for (int i = 0; i < n; i++){
    if (x*a[i]+y - b[i] >= 0) demt++;
    else demd++;

}
for (int i = 0; i < n-2; i++){
    if (i%2==0){
        kq+=sqrt(pow(a[i]-a[i+2],2) + pow(b[i]-b[i+2],2));

    }

}
int cat = (demd*demt);
int kqq=0,demkq=0;
for (int i = 0; i < n-1; i++){
	if (sqrt(pow(a[i]-a[i+1],2) + pow(b[i]-b[i+1],2)) > 10) {
	kqq+=sqrt(pow(a[i]-a[i+1],2) + pow(b[i]-b[i+1],2));
	demkq++ ;}}
printf("So doan thang cat duong thang ax+b la: %d", cat);
printf("\ndo dai duong gap khuc la: %.2f", kq); 
printf("\nDo dai trung binh la: %.2f", float(kqq/demkq));
return 0;
}
