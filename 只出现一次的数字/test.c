//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//˵����
//����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����
//ʾ�� 1:
//���� : [2, 2, 1]
//��� : 1
//	 ʾ�� 2 :
// ���� : [4, 1, 2, 1, 2]
//  ��� : 4

#include<stdio.h>
#include<Windows.h>

int singleNumber(int* nums, int numsSize) {
	int i = 0;
	int j = 0;
	for (i = 0; i < numsSize; i++)
	{
		j ^= nums[i];
	}
	return j;
}

int main()
{
	int nums[] = { 2,2,1 };
	int numsSize = sizeof nums / sizeof nums[0];
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	int ret=singleNumber(nums, numsSize);
	printf("\n");
	printf("%d ",ret);
	system("pause");
	return 0;
}