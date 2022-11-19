#include<stdio.h>
#include<stdlib.h>
void nhapmang(int *a,int n);
void xuatmang(int *a,int n);
void max(int *a,int n);
void tinhtich(int *a,int n);
void timx (int *a, int n, int x);
void sapxep (int *a,int n);
int main()
{
	int *a,n,x;
	a=(int*)malloc(25*sizeof(int));
	do
	{
    	printf("\tNhap so phan tu cua mang: ");
    	scanf("%d",&n);
    }while(n<0||n>20);
    printf("\n\tDia chi ten mang  %x \n",&a);
    printf("\n\tDia chi cua con tro phan tu dau tien %x",a);
    nhapmang(a,n);
    xuatmang(a,n);
    for(int i= 0; i < n; i++)
        printf("\n\tDia chi cua a[%d]: %x \n",i,&a[i]);
    max(a,n);
    tinhtich(a,n);
    timx (a,n,x);
    sapxep(a,n);
}
void nhapmang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n\tNhap phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int *a,int n)
{
    printf("\n\tMang vua nhap la:");
    {
    	for(int i=0;i<n;i++)
    	    printf("  %d  ",a[i]);
	}
	printf("\n\t");
}
void max(int *a,int n)
{
	int max=1;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		    	a[i]=max;
		    else
		        max=a[j];
		}
	}
	printf("\n\tGia tri lon nhat mang la: %d",max);
}
void tinhtich(int *a,int n)
{
	int tich=1;
	for(int i=0;i<n;i++)
	{
		tich=tich*a[i];
	}
	printf("\n\tTich cac phan tu trong mang la: %d\n",tich);
}
	void timx (int *a, int n ,int x)
{
   
	int i,dem=0;
	 printf(" nhap gia tri x: ");
    scanf("%d",&a);
	for (i=0;i<n;i++)
	{
		if (a[i]==x) 
		  printf("\n\t vi tri co gia tri bang x la: %x",&a[i]);
		if (a[i]==x) 
		  dem++;
	}
	if (dem==0) 
	printf("\n\t Khong co gia tri cua phan tu nao trong mang a bang x");
}
void sapxep (int *a,int n)
{
	
  int MIN;
  
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
     printf("\n a[%d]=%d",i,a[i]);
    }

    
}




