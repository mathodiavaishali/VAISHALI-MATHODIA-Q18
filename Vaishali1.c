#include<stdio.h>
void main()
{
	int msize=15;
	int psize,n;
	int p[100];
	int frameno,offset;
	int l_add,p_add;
	int i;
	int choice=0;
	//msize : memory size
	//psize : page size
	//n : number of pages
	//p : array for frame of page
	//frameno : frame number
	//offset : page offset
	//l_add : logical address
	//p_add : physical address 
    printf("\nYour memory size is %d ",msize);
	printf("\nEnter page size : ");
	scanf("%d",&psize);
	n=msize/psize;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the frame of page %d : ",i+1);
		scanf("%d",&p[i]);
	}

	do
	{
		printf("\nEnter a logical address : ");
		scanf("%d",&l_add);
		frameno=l_add/psize;
		offset=l_add%psize;
		p_add=(p[frameno]*psize)+offset;
		printf("\nPhysical address is : %d",p_add);
		printf("\nDo you want to continue(1/0)? : ");
		scanf("%d",&choice);
	}
	while(choice==1);
}
