#include <stdio.h>

int main(void)
{
	int nums[] = {50, 10, 100, 60 ,70 ,30 ,20 ,40 ,90, 80};
	
	for(int i=9; i>0; --i)
		for(int j=0; j<i; ++j)
			if(nums[j] > nums[j+1]){
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;		
			}
			
	for(int i=0; i<10; ++i)
		printf("%d ", nums[i]);
	
	printf("\n");
	return 0;
}
