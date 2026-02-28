#include <stdio.h>
int main(){
int arr[20],limit,i,choice,item,pos;
printf("\nEnter the array limit:\n");
scanf("%d",&limit);
printf("\nEnter the initial array elements:\n");
for(i=0;i<limit;i++){
scanf("%d",&arr[i]);
}
printf("\nMENU\n*********\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT");
printf("\nEnter your choice:\n");
scanf("%d",&choice);
switch(choice){
case 1 :printf("\nEnter the element you want to insert:\n");
        scanf("%d",&item);
        printf("\nEnter the position you want to insert:\n");
        scanf("%d",&pos);
        for(i=limit-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
        if(i==pos-1){
        arr[i]=item;
        }
        }
        printf("\nElement successfully inserted, New array:\n");
        for(i=0;i<=limit;i++){
	printf("%d\t",arr[i]);
	}
        break;
case 2 :printf("\nEnter the position of element to be deleted:\n");
	scanf("%d",&pos);
	for(i=pos-1;i<limit-1;i++){
	arr[i]=arr[i+1];
	}
	limit=limit-2;
	printf("\nElement successfully deleted, New array:\n");
        for(i=0;i<=limit;i++){
        printf("%d\t",arr[i]);
	}
        break;
case 3 :printf("\nArray elements are:\n");
        for(i=0;i<limit;i++){
	printf("%d\t",arr[i]);
	}
        break;
case 4 :return 0;
default :printf("\nInvalid Choice");
}
printf("\n");
return 0;
}
