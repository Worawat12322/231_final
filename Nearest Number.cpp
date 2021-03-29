#include<stdio.h>
#include<string>
int main(){
	int n,c,k;
	int chk,mod,ans=0;
	scanf("%d %d",&n,&c);
	if((n>0&&n<32750)&&(n>0&&n<32750))
	{
		for(k=n+1;;k++)
		{
			chk = k;
			while(chk!=0)
			{
				mod = chk%10;
				chk = chk/10;
				if(mod == c)
				{
					ans = 1;
				}
			}
			if(ans==1)
			{
				break;
			}
		}
		printf("%d",k);
	}
	return 0;
}
