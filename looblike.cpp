#include<stdio.h>
int main(){
	int num,a,b,chk=0,limit=0;
	scanf("%d",&num);
	int data[num];
	int max,mx_lo[num]={0};
	if(num>=2&&num<=1000)
	{
		for(a=0;a<num;a++)
		{
			scanf("%d ",&chk);
			if(chk>=1&&chk<=10000)
			{
				data[a] = chk;
			}
			else return 0;
		}
		max=data[0];
		for(b=1;b<num;b++)
		{
			if(max<data[b])
			{
				max=data[b];
				mx_lo[0]=b+1;
			}
			
		}
	}
	return 0;
}
