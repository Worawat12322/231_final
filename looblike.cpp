#include<stdio.h>
int main(){
	int num,a,b,c,d,chk=0,limit=0;
	scanf("%d",&num);
	int data[num];
	int max,mx_lo[num]={0};
	if(num>=2&&num<=1000)
	{
		for(a=0;a<num;a++)
		{
			scanf("%d",&chk);
			if(chk>=1&&chk<=10000)
			{
				data[a] = chk;
			}
			else return 0;
		}
		max=data[0]; mx_lo[0]=1 ;
		for(b=1;b<num;b++)
		{
			if(max<data[b])
			{
				max=data[b];
				mx_lo[0]=b;
			}
		}
		for(c=mx_lo[0];c<num;c++)
		{
			if(max==data[c])
			{
				limit++;
				mx_lo[limit] = c;
			}
		}
		for(d=0;d<=limit;d++)
		{
			printf("%d ",mx_lo[d]);
		}
	}
	return 0;
}
