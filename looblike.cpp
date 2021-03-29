#include<stdio.h>
int main(){
	int num,a,b,c,d,e,chk=0,limit=0;
	scanf("%d",&num);
	int data[num];
	int max;
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
		max=data[0];
		for(b=1;b<num;b++)
		{
			if(max<data[b])
			{
				max=data[b];
			}
		}
		int f,most[max+1]={0},max2,lo_max[max+1]={0};
		for(e=0;e<num;e++)
		{
			most[data[e]]++;
		}
		max2=most[1];
		for(f=2;f<max+1;f++)
		{
			if(max2<most[f])
			{
				max2 = most[f];
				lo_max[0] = f;
			}
		}
		for(c=lo_max[0]+1;c<max+1;c++)
		{
			if(max2==most[c])
			{
				limit++;
				lo_max[limit]=c;
			}
		}
		for(d=0;d<=limit;d++)
		{
			if(d!=0)
			{
				printf(" ");
			}
			printf("%d",lo_max[d]);
		}
	}
	return 0;
}
