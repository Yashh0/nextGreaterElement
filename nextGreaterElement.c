#include<stdio.h>

int stack[10]; // initializing stack
int top = -1;

void push(int value) // Push Func to push element in stack 
{
    stack[++top] = value;
}

int pop() // Pop Func to pop element from stack 
{
    int value = stack[top];
    top--;
    return value;
}

int main()
{
    int array[10]; //initial array to take input
    int result[10]; // output array

    int size;
    
    printf("Enter size of your array\n");
    scanf("%d", &size); 

    printf("Please enter the elements\n");
    for(int i =0; i< size; i++)
    {
        scanf("%d", &array[i]);
    }

    int n = 0; 
    for(n = size-1; n >= 0; n--) //traversing from last element 
    {
        while(stack[top] < array[n] && top != -1) // if the current element is greater than the stack[top] , it will be popped
          {
            int ran = pop(); 
          }

        if(top != -1) 
            result[n] = stack[top]; 

        else
            result[n] = -1;
        
        push(array[n]);
    }
    
    n = 0;
    while(n<size) 
    {
        printf("%d\t",result[n]); // Printing the result array again in correct order
        n++;
    }

}