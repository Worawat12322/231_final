#include<stdio.h>
int main(){
	int num,a,chk;
	scanf("%d",&num);
	int data[num];
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
	}
	return 0;
}
