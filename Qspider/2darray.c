#include<stdio.h>
void main()
{
	int n,i,j,a[n][3],total,diff,add;
	scanf("%d",&n);
	printf("Enter array ele:");
	for(i=0;i < n;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	total=a[0][0]+a[0][1];
	int total_time=a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			if(a[i][0] >= total){
				diff = a[i][0] - total;
				add = total + diff;
				total = total + a[i][1];
			}
			else if(a[i][0] < total){
				add = a[i][2] - (total - a[i][0]);
				total = add + a[i][1] + total;
			}
	printf("%d\n",total);		
}
