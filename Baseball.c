#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int	 nums[3],user_nums[3];
	int flag=1,check=0,data;
	int strike=0,ball=0;
	
	for(int i=0; i<3; ++i)
		nums[i] = rand() % 10;
	
	//nums[0] = 3;
	//nums[1] = 3;
	//nums[2] = 0;
	
	printf("%d %d %d\n",nums[0],nums[1],nums[2]);
	
	for(int i=0; i<2; ++i)
		for(int j=i+1; j<3; ++j)
			if(nums[i] == nums[j]){
				check++;
				data=nums[i];
			}
	
	while(flag){
		printf("putin numer : ");
		for(int i=0; i<3; ++i)
			scanf("%d", &user_nums[i]);
		
		for(int i=0; i<3; ++i){
			for(int j=0; j<3; ++j){
				if((nums[i] == user_nums[j]) && check == 0){
					if(i == j)
						strike++;
					else
						ball++;
				}
			}
		}
		
		if(check==1){
			for(int i=0; i<3; ++i)
				if(nums[i]==user_nums[i] && nums[i]==data)
					strike++;
			
			if(strike == 1)
				ball++;	
			for(int i=0; i<3; ++i)
				for(int j=0; j<3; j++)
					if( nums[i] == user_nums[j] && nums[i] != data)
						if(i == j)
							strike++;
						else
							ball++;
		}
		if(check==3){
			for(int i=0; i<3; ++i)
				if(nums[i]==user_nums[i] && nums[i]==data)
					strike++;
			if(strike==2)
				ball = 1;
			if(strike==1)
				ball = 2;
		}
		
			printf("strike : %d ball : %d\n", strike, ball);
		if(strike == 3)
			flag = 0;
		strike = 0;
		ball = 0;
		
	}
	
	
	return 0;
}
