#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	 scanf("%d",&x);
	 x=2;
	 for(one=1;one<=x*10;one++){
	 	for(two=1;two<=x*10/2;two++){
		 for(five=1;five<=x*10/5;five++){
		 	if(one+two*2+five*5==20)
		 	printf("%d个一角和%d个两角和%d个五角\n",one,two,five);
		 }
    }
}
return 0;
}
