#include <stdio.h>
#include <stdlib.h>

void nhap		(int *a, int n);
void xuat		(int *a, int n);
void max		(int *a, int n);
void min		(int *a, int n);
int  check 		(int x);
void sapxep (int *a,int n);
void timx		(int *a, int n);
void tongdcc	(int *a, int n);
void chan 		(int *a, int n);
void avb  		(int *A, int *B, int *C, int M, int N);

void *calloc	(size_t nitems,size_t size);

int main()
{
	int n,*a,M,N;
	int *A,*B,*C;
	a=(int*)calloc(256,sizeof(int));
	A=(int*)calloc(256,sizeof(int));
	B=(int*)calloc(256,sizeof(int));
	C=(int*)calloc(256,sizeof(int));
	printf("Nhap so dong & cot cho ma tran: "); scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	max(a,n);
	min(a,n);
	sapxep(a,n);
	timx(a,n);
	tongdcc(a,n);
	chan(a,n);
	printf("\n\n\n\n\n\n\n");
	printf("\n\n                                XAY DUNG MA TRAN A & B VA TINH TONG TICH CUA A & B                   \n\n\n");
	printf("\n\nNhap so dong cho: "); scanf("%d",&M);
	printf("\n\nNhap so cot cho: ");  scanf("%d",&N);
	avb(A,B,C,M,N);
}



void nhap(int *a, int n)
{
	 printf("\nNhap cac phan tu: ");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("\nU[%d][%d]=",i,j); scanf("%d",a+i*n+j);
	 	 }
	 }
}


void xuat(int *a, int n)
{
	 printf("\nMa tran da nhap :\n");
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 printf("%d  ",*(a+i*n+j));
	 	 }
	 	 printf("\n");
	 }
}



void max(int *a, int n)
{
	 int max=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)>=max) max=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri lon nhat trong ma tran U la %d",max);
}


void min(int *a, int n)
{
	 int min=*(a);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (*(a+i*n+j)<=min) min=*(a+i*n+j);
	 	 }
	 }
	 printf("\n\nGia tri nho nhat trong ma tran U la %d\n",min);
}


int check(int x)
{
	int OK=1;
	if (x<2)
	{
		OK=0;
	}
	else
	{
		for (int i=2;i<x;i++)
		{
			if (x%i==0 && x!=2) 
			{
		   	   OK=0;
		  	   break;	
			}
		}
	}
	return OK;
}


void sapxep (int *a,int n)
{
  int MIN,j;
    for(int i=0; i<n-1; i++)
	{
        for(int j=i+1;j<n;j++)
		{
           if(a[i]>a[j])
			{
              MIN=a[i];
              a[i]=a[j];
              a[j]=MIN; 
            }
        }
    }
    printf("\n Sap xep lai mang theo gia tri tang dan :");
    for(int i=0;i<n;i++)
	{
printf("\n\n %d",*(a+i*n+j));
    }
}

void timx(int *a, int n)
{
	 int x,OK=0;
	 printf("\n\nNhap x can tim : x="); scanf("%d",&x);
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {
	 	 	 if (x==*(a+i*n+j))
	 	 	 {
	 	 	 	OK++;
	 	 	 	printf("\n\nx xuat hien tai dong thu %d, cot thu %d (vi tri U[%d][%d]) trong ma tran U",i+1,j+1,i,j);
	 	 	 }
	 	 }
	 }
	 if (OK==0) printf("\n\nx khong xuat hien trong ma tran U !");
}


void tongdcc(int *a, int n)
{
	 int x=0;
	 for (int i=0;i<n;i++)
	 {
	 	 for (int j=0;j<n;j++)
	 	 {  
		     if (i==j) x=x+*(a+i*n+j); 		
	 	 }
	 }
	 printf("\n\nTong cac phan tu nam tren duong cheo chinh cua ma tran U = %d",x);
}


void chan(int *a,int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
	 	for(int j=0;j<n;j++)
	 	{
		   if (i==j) 
		   {
		   	  for(int k=j+1;k<n;k++)
		   	  {
		   	  	 if (*(a+i*n+k)%2==0) dem++;
		   	  }
		   }
		}
    }
    if (dem==0) printf("\n\nKhong co phan tu nao la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U !");
    else        printf("\n\nCo %d phan tu la so chan nam trong tam giac tren cua duong cheo chinh cua ma tran U ma khong ke duong cheo chinh !",dem);
}


void avb(int *A, int *B, int *C, int M, int N)
{
	 printf("\n\nNhap ma tran A :");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("\n\nA[%d][%d]=",i,j); scanf("%d",A+i*N+j);
	 	 }
	 }
	 
	 printf("\n\nNhap ma tran B :");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("\n\nB[%d][%d]=",i,j); scanf("%d", B+i*N+j);
	 	 }
	 }
	 
	 printf("\n\nMa tran A :\n\n");
	  for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(A+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 printf("\n\nMa tran B :\n\n");
	  for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(B+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 *(C+i*N+j)=*(A+i*N+j)+*(B+i*N+j);
	 	 }
	 }
	 printf("\n\nTong hai ma tran A & B la :\n\n");
	 for (int i=0;i<M;i++)
	 {
	 	 for (int j=0;j<N;j++)
	 	 {
	 	 	 printf("%d  ",*(C+i*N+j));
	 	 }
	 	 printf("\n\n");
	 }
	 
	 if (M!=N) printf("\n\nKhong the tinh tich hai ma tran A va B do so dong cua ma tran A khong bang so cot cua ma tran B !");
	 else
	 {
	 	 for (int a=0;a<M;a++)
	 	 {
	 	 	 for (int b=0;b<N;b++)
	 	 	 {
	 	 	 	 *(C+a*N+b)=0;
	 	 	 }
	 	 }
	 	 for (int i=0;i<M;i++)
	 	 {
	 	 	 for (int j=0;j<N;j++)
	 	 	 {
	 	 	 	 for (int k=0;k<N;k++)
	 	 	 	 {
	 	 	 	 	 *(C+i*N+j)= *(C+i*N+j)+  (*(A+i*N+k) * *(B+k*N+j));
	 	 	 	 }
	 	 	 }
	 	 }
	 	 printf("\n\nGoi tich hai ma tran A & B la mot ma tran C. C la :\n\n");
	 	 for (int i=0;i<M;i++)
	 	 {
	 	 	 for (int j=0;j<N;j++)
	 	 	 {
	 	 	 	 printf("%d  ",*(C+i*N+j));
	 	 	 }
	 	 	 printf("\n\n");
	 	 }
	 	 
	 }
}

