#include <stdio.h>
int BinarySearch(int a[],const int& x,int n)
{
	int left=0,right=n-1;
	while(left<=right)
	{
		int middle=(left+right)/2;
		if(x==a[middle])
		return middle;
		if(x>a[middle])
		left=middle+1;
		else
		right=middle-1;
	}
	return -1;
}

int main()
{
	int a[]={1,3,5,7,9,11,13,15,17,19};
	printf("%d\n",BinarySearch(a,15,13));
}

