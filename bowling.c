#include <stdio.h>

int main(void)
{
	int one[9]={0};
	int two[9]={0};
	int bo[3]={0};
	int flag=0;					// 0 : open, 1 : spare, 2 : strike	
	int score=0;
	int i = 0;
	int count=1;
	
	for( ; i<9; ++i){
		printf("%d - 1 round : ", i+1);
		scanf("%d",&one[i]);
		if(flag == 1){											//before spare
			score = score + one[i-1] + two[i-1] + one[i];
			printf("%d round score5 : %d\n", count++, score);
		}
		if(i >= 1 && flag == 2 && one[i-2] == 10){			//strike - strike - spare or open
			score = score + one[i-1] + one[i-2] + one[i];
			printf("%d round score3 : %d\n", count++, score);			
		}
		
		if(one[i] != 10){
			printf("%d - 2 round : ", i+1);
			scanf("%d",&two[i]);
		}
		if(one[i] == 10){										//case: strike
			if(i >= 2 && flag == 2 && one[i-2] == 10){			//turky
				score = score + one[i-2] + one[i-1] + one[i];
				printf("%d round score1 : %d\n", count++, score);	
			}
			if(flag == 1 ){									//before spare
				score = score + one[i-1] + two[i-1] + one[i];
				printf("%d round score2 : %d\n", count++, score);
			}
			flag = 2;
		}	
		if(one[i] + two[i] == 10 && one[i] != 10){				//case: spare
			if(i >= 1 && flag == 2 ){							//before strike
				score = score + one[i-1] + one[i] + two[i];
				printf("%d round score4 : %d\n", count++, score);
			}
			flag = 1;
		}
		if(one[i] + two[i] < 10){								//case: open
			if(flag==2){										//before strike
				score = score + one[i-1] + one[i] + two[i];
				printf("%d round score7 : %d\n", count++, score);
				score = score + one[i] + two[i];
				printf("%d round score8 : %d\n", count++, score);
				
			}
			if(flag==1){										//before spare
				score = score + one[i] + two[i];
				printf("%d round score10 : %d\n", count++, score);
			}
			if(flag==0){										//before open
				score = score + one[i] + two[i];
				printf("%d round score11 : %d\n", count++, score);
				
			}
			flag = 0;
		}
	}
	
	printf("bouns round 1 : ");
	scanf("%d", &bo[0]);	
	if(one[7] == 10 && one[8] == 10){						//strike - strike 
		score = score + one[7] + one[8] + bo[0];
		printf("%d round score : %d\n", count++, score);
	}
	
	
	if(one[8] + two[8] == 10 && one[8] != 10){				//case: 9frame spare
		score = score + 10 + bo[0];
		printf("%d round score : %d\n", count++, score);
	}
	
	printf("bouns round 2 : ");
	scanf("%d", &bo[1]);
	
	if(one[8] == 10){										//case: 9frame strike
		score = score + 10 + bo[0] + bo[1];
		printf("%d round score : %d\n", count++, score);
	}
	
	if(bo[0] + bo[1] >= 10){								
		printf("bouns round 3 : ");
		scanf("%d", &bo[2]);
	}
	
	if(bo[0] == 10){										//case: 10frame strike
		score = score + bo[0] + bo[1] + bo[2];
		printf("%d round score : %d\n", count++, score);
	}
	
	if(bo[0] + bo[1] == 10){								//case: 10frame spare
		score = score + 10 + bo[2];
		printf("%d round score : %d\n", count++, score);
	}
	
	if(bo[0] + bo[1] < 10){								//case: 10frame open
		score = score + bo[0] + bo[1];
		printf("%d round score : %d\n", count++, score);
	}

	return 0;
}
