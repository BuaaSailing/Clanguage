#include <stdio.h>
int main(void)
{
	int length;
	int min_num;
	int num_group;
	float min_gap;
	printf("Please enter the length:");
	scanf("%d",&length);
	float tindes[length];

	printf("Please enter the min_num: ");
	scanf("%d",&min_num);

	printf("Please enter the min_gap: ");
	scanf("%f",&min_gap);

	printf("Please enter the num_group: ");
	scanf("%d",&num_group);
	//创建tindes数组，接受输入的数
	float average_num=length/min_num;
	//printf("The average_num is %.2f",average_num);
	for (int i=0;i<length;i++)
	{
		printf("enter a number: ");
		scanf("%f",&tindes[i]);
	}
	//Output初始化
	int Output[num_group];
	for (int i=0;i<num_group;i++)
	{
		Output[i]=0;
	}

	int j=0;
	float gap;
	//主要算法实现
	for (int i=0;i<length;i++)
	{
		if (Output[j]<min_num)
		{
			Output[j]+=1;
			continue;
		}
		else
		{
			//按gap定义赋值
			gap=(tindes[i]-tindes[i-1])/tindes[i];

			//printf("The gap is %f",gap);
			//如果组里现有数的个数小于average_num,必然要继续放进，才能保证更接近这个average_num
			if (Output[j]<average_num)
			{
				Output[j]++;
				continue;
			}
			else
			{	//如果不满足gap>min_gap,必然也不能放进一个新的组，只能留在当前的组里
				if (gap < min_gap)
				{
					Output[j]++;
					continue;
				}
				else 
				{	//只有满足gap>min_gap 且 Output[j]>=min_num 且 Output[j]>=average_num时，才能将这个数放进一个新的组里
					j++;
					Output[j]+=1;
					continue;
				}
			}
		}
	}
	printf("Num_elem: ");
	for (int i=0;i<num_group;i++)
	{
		printf("%d ",Output[i]);
	}
	int k=0;
	int flag=Output[k];
	printf("\n");
	//printf("%d",flag);
	for (int i=0;i<length;i++)
	{
		if (i < flag)
		{
			printf("%-4.1f ",tindes[i]);
		}
		else
		{
			k++;
			flag+=Output[k];
			printf("\n%-4.1f ",tindes[i]);
		}
	}
	return 0;
}