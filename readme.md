# Algorithm for bubble sort

### Expectations for the code

* The code should take an already input array of numbers and sort them from smallest to largest. 

* Printing the before, after, and the steps inbetween.

## Code Overview

### Before Main

* We must, of course, include the \#include \<stdio.h\> as our very first line.

* Next, we want to add a "global variable." In this case we call it int MAX and set it equal to the total length of our array.

* Followed by our function prototyping, so we let C know that we promise to write these functions later. 
    * 3 function prototyping specifically called: *void pintValues()*,*void         sort()*, and *void swap()*

* This is what your code should look like before main:

\#include \<stdio.h\>
const int MAX=9;

void printValues(int\*);

void sort(int\*);

void swap(int\*, int\*);

### main

*main* will execute the entire code how and when we want it. This is also where we enter the sub-functions as well as the numbers in the array we are sorting/swapping/printing.

* **Do not forget to actually initalize** ***main*** **as it's own function!!!**

* *main* starts with us making an **integer array** "variable" called *values* and, setting it equal to a unique set of numbers
    * In this case: 7, 3, 9, 4, 6, 1, 2, 8, 5

* Following this we include a print line that prints: *Before: \n* 
    * \n meaning go to a new line

* Next, we need to include *printValues* function, with our array as the input
    * This function will be written later of course

* The fourth and fifth lines should include us creating **integer** "variables" called, *x* and *y*. These variables can be set to any number as long as they aren't the same.
    * These variables will be used later to test our swap function.

* The sixth line is another print statement that should print off what *x* and *y* are, followed by our new line character mentioned earlier

* The seventh line is calling the *swap* function that we will write later, using the **address** of *x* and the **adress** of *y*.

* The eigth line should be written exactly line the sixth, just copy and paste.

* The ninth line calls upon our *sort* function, using our array as the input
    * This function will be written later

* The tenth line should be exactly like our second line, except replacing "Before" with "After"
    * The \n should still be included

* The eleventh line is written exactly like our third line.
    * This line will print what happens after we finish our sort.

* This is what your code should look like:

int main(){

    int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5}; //any amount of unique numbers work, as long as your MAX is set to the amount of numbers your put in
    printf("Before: \n");
    printValues(values);
    int x = 3; //any number works
    int y = 5; //any number works as long as it isn't the same as above
    printf("x: %d, y: %d \n", x, y);
    swap(&x, &y);
    printf("x: %d, y: %d \n", x, y);
}

### printValues

printValues does exactly what the name implies, it prints the values we give it. As long as we give it a **pointer/address/array** and **not** a value.

* **Do not forget to initialize** ***printValues*** **as it's own function!!!**

* Our first line will create an integer "variable", that we will call *i*
    * We want to set *i* equal to **zero**, not just any number will do

* The second line will be a for loop that:
    * Checks to make sure *i* is being set to **zero** before starting, only the first time through though
    * Then checks to make sure *i* is less than our ***MAX*** "global integer variable" we set earlier
    * And finally, adds one to *i* after the loop has been run each time

* The third line is a simple print statement that prints our array at position *i*
    * This is inside the for loop

* Our final line for *printValues* is another print statement that prints a new line, also known as \n
    * This line will be outside the for loop, but also after it

* The code should look something like this:

void printValues(int \* values){

    int i = 0; //this **must** be zero
    for (i = 0; i < MAX; i++){
        printf("%d ", values[i]);
    }
    printf("\n")
}

### swap

swap also does what it says, it swaps any two values we give it with each other. Again though, it requires **two pointers/addresses/arrays** to work, so **no** values.

* **Do not forget to initialize** ***swap*** **as it's own function!!!**

* The first and second lines are creating two integer "variables" that we will call, *xVal* and *yVal*
    * We want to set the *xVal* equal to the **address value at** of the input regarding the *&x* we passed from the main function
    * Similiarly, we want to set the *yVal* to the same as above, although in this case to the input regarding the *&y* we passed from the main function

* Our second to last line of code for this function will set the **address value at** of the same input regarding *&x* and set it equal to our *yVal* we just created above 

* Finally, our last line of code will do exactly the same as above, except stting the **address value at** of the same input regarding *&y* and setting it equal to our *xVal* we created above

* Your code should look along the lines of this:

void swap(int \* xAdd, int \* yAdd){

    int xVal = \*xAdd;
    int yVal = \*yAdd;
    \*xAdd = yVal;
    \*yAdd = xVal;
}

### sort

sort is where most of the magic happens with our code. It takes a pointer/address/array and sorts it from the smallest to the largest numbers for any given length. In the sort code we take two variable integers (int i and int j), set them to 0; then place one (i) in a for loop that increments it's (i) values by 1 each time through the loop, and works only if i's value is less than the *MAX* number of items in our array. Inside this for loop we have another for loop following the same exact principle as the first, expect replacing i with j. Inside this for loop (the second one with j), we place an if statement that checks the if the values position at j is less than the values position at j + 1. If it is true, we swap the address value at j with the address value at j + 1 using our swap function, then we print said value at j. If it is false, we just print the value at j. Outside of the if statement but still in the second for loop (j's for loop), we must include a print statement to include a way to go to the next line for the next sort pattern.

* Let us disect what was just said in the summary shall we?

* **Do not forget to initialize** ***sort*** **as it's own function!!!**

* Our first line two lines of code will be creating two seperate integer "variables" called *i* and *j*
    * Both of these integer "variables" **must** each be set to **zero**

* Line three is our **first** for loop, this is what it checks for:
    * Set *i* equal to zero, the first time
    * If *i* is less than *MAX*
    * After the loop has gone through once, add one to *i*

* Line four is the **second** for loop, inside of the first, checking for:
    * Setting *j* equal to zero, the first time
    * If *j* is less than *MAX*
    * After the loop has gone through once, add one to *j*

* Line five is an if "loop", inside of the second for loop, checking for:
    * Is the value at our array at position *j* greater than the value at our array at position *j* + 1?

* Line six calls the *swap* function using the address of our array at position *j*, and using the address of our array at position *j* + 1
    * This essentially swaps them of course
    * This is still inside the if "loop"

* Line seven is a print statement that prints our array value at position *j*

* Line eight is an else statement outside of the if "loop" but still inside the second for loop
    * Make sure the else is specifically where it is supposed to be, outside the if "loop", inside the second for loop, but after the if statement and everything inside of it

* Line nine is another print statement that reads exactly like line seven
    * Just make sure this print statement is inside the else statement

* Our last line is just a print statement that prints another line, also known as \n
    * This line of code is written in a specific position
    * It must be inside the **first** for loop
    * It must be after all the other lines of code

* Your code should look somewhat like this:

void sort(int \* values){
    int i = 0;
    int j = 0;
    for (i = 0; i < MAX; i++){
        for (j = 0; j < MAX; j++){
            if (values[j] > values[j + 1]){
                swap(&values[j], &values[j + 1]);
                printf("%d ", values[j]);
            }else{
                printf("%d ", values[j]);
        }}pritnf("\n");
}}

