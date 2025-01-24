#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5,};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n");
	printValues(values);

	return(0);
}

//printValues works
void printValues(int * values){
	int i = 0;
	for (i = 0; i < MAX; i++){
		printf("%d ", values[i]);
	}
	printf("\n");
}

//swap works
void swap(int * xAdd, int * yAdd){
	int xVal = *xAdd;
	int yVal = *yAdd;
	*xAdd = yVal;
	*yAdd = xVal;	

}
// sort works
void sort(int * values){
	int i = 0;
	int j = 0;
	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++){
			if (values[j] > values[j + 1]){
				swap(&values[j], &values[j + 1]);
				printf("%d ", values[j]);
			}else{
				printf("%d ", values[j]);}
		}printf("\n");}

}
