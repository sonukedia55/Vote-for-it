#include<stdio.h>
#include<stdlib.h>
int n=6;
int nam[6][6];
int score[6];


void toadd(int i){
	int j,k;
	system("@cls||clear");
	printf("\nChoose \n 0. for Person 1 \n 1. for Person 2 \n 2. for Person 3\n 3. for Person 4 \n 4. for Person 5 \n 5. for Person 6 \n\n\n Enter Choice");
	printf("\nFirst Enter  %d then choose other linewise :\n",i);
	for(j=0;j<n;j++){
	scanf("%d",&nam[j][i]);
	
	}
	
}

int main(){

int i,j,k;
int ch;
int rank[n][2];

for(i=0;i<n;i++){
	toadd(i);
}
system("@cls||clear");
for(i=0;i<n;i++){
	
	ch=nam[0][i];
	score[i]=0;
	for(j=0;j<n;j++){
		for(k=1;k<n;k++){
			if(nam[k][j]==ch){
				score[i]+=k;
			}
			
		}
		
	}
	//printf("\nscore of %d is %d",ch,score[i]);
}
	printf("\n");
	
	for(i=0;i<n;i++){
		
		rank[i][0]=i;
		rank[i][1]=score[i];
		
	}
	
	int temp,temp2;
	
	for(j=0;j<n;j++){
		
	for(i=j+1;i<n;i++){
		if(rank[j][1]>rank[i][1])
		{
			temp=rank[j][1];
			temp2=rank[j][0];
			rank[j][1]=rank[i][1];
			rank[j][0]=rank[i][0];
			rank[i][1]=temp;
			rank[i][0]=temp2;
		}
	}	
	}
	for(i=0;i<n;i++)
	{
		//printf("id = %d  score = %d\n",rank[i][0],rank[i][1]);
	}
	
	int rnk[n];
	for(i=0;i<n;i++)
		rnk[i]=rank[i][0];
	
	int final[n];
	int l=0;
	int chck=1;
	int chck2=1;
	int pre;
	for(i=0;i<n;i++){
		chck=1;
		chck2=1;
		temp=rnk[i];
		for(j=0;j<l;j++)
			if(final[j]==temp){chck=0;break;}
		
	if(chck!=0){
		final[l]=temp;l++;
		for(k=1;k<n;k++){
			pre = nam[k][temp];
			for(j=0;j<l;j++)
			if(final[j]==pre){chck2=0;break;}
			if(chck2!=0){
				final[l]=pre;l++;
		}}
		
	}
		
	}
	
	char name[]="123456";
    for(i=0;i<n;i=i+2)
	{
		printf("grounp Person = %c  and %c\n",name[final[i]],name[final[i+1]]);
	}


}