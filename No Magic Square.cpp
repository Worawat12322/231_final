#include<stdio.h>
int main(){
	int  a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int ar_a[a][a]={0},ar_b[b][b]={0},ar_c[c][c]={0};
	int d,d2,e,e2,f,f2,ans[2]={0};
	for(d=0;d<a;d++)
	{
		for(d2=0;d2<a;d2++)
		{
			scanf("%d",&ar_a[d][d2]);
		}
	}
	printf("\n");
	for(e=0;e<b;e++)
	{
		for(e2=0;e2<b;e2++)
		{
			scanf("%d",&ar_b[e][e2]);
		}
	}
	printf("\n");
	for(f=0;f<c;f++)
	{
		for(f2=0;f2<c;f2++)
		{
			scanf("%d",&ar_c[f][f2]);
		}
	}

	int chk1=0,chk2=0,num1,num2,num3;
	
	return 0;
}
