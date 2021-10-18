/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here
int i,j,d,c,e,f,k,h;
	c=0;
	d=0;
	e=0;
	f=0;
	for(i=0,j=1;i<n-1 && j<n;i++,j++){

	if(in_arr[i]<in_arr[j]){
		c+=1;
		d=0;
		if (c>e){
		e=c;
		k=i;}

	}
	if(in_arr[i]>in_arr[j]){
		 d+=1;
		 c=0;
		 if (d>f){
		 f=d;
		 h=i;
		 }
	}

}   
    e+=1;
	f+=1;

	printf("Increasing");
	for (i=k+2-e;i<=k+1;++i){
		printf(" %d",in_arr[i]);
	}
	printf(" Decreasing");
	for (i=h+2-f;i<=h+1;++i){
		printf(" %d", in_arr[i]);
	}	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
