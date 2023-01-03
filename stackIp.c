#include<stdio.h>
#include<stdlib.h>
#define MaxStack 10

int toCount=0;

struct stack
{
    /* data */
    int data[MaxStack];
    int top;
};
typedef struct stack stack;

void stackDisplay(stack*myStack);
void creatEmptyStack(struct stack*myStack);
void pushToStack(stack*myStack,int key);
int FullStack(stack*myStack);
int emptyStack(stack *myStack);

void popFromStack(stack* myStack);
int main(){
   struct stack*myStack;
   myStack = (stack*)malloc(sizeof(struct stack));

    creatEmptyStack(myStack);

   pushToStack(myStack,10);
    pushToStack(myStack,1);
     pushToStack(myStack,10);
    pushToStack(myStack,9);


    popFromStack(myStack);

    stackDisplay(myStack);
 
    return 0; 
}

void creatEmptyStack( stack*myStack){
    myStack->top=-1;
    
}
void pushToStack(stack*myStack,int key){

       if (FullStack(myStack))
    {
        /* code */printf("Stack is full\n");
    }else{
          myStack->top++;
     myStack->data[myStack->top]= key;
   
    }
 toCount++;
}

int FullStack(stack*myStack){
     if(myStack->top==MaxStack-1){
       return 1;
    }else{
        return 0;
    }
}

int emptyStack(stack*myStack){
    if(myStack->top==-1){
        return 1;
    }else{
        return 0;
    }
}

void popFromStack(stack*myStack){
    if(emptyStack(myStack)){
        printf("Stack is empty!");
    }else{
        printf("Pop from Stack data is %d\n",myStack->data[myStack->top]);

        myStack->top--;
    }
    toCount--;
}

void stackDisplay(stack*myStack){
    printf("Data from stack :");
    for (int i = myStack->top; i >=0 ; i--)
    {
        /* code */  printf(" %d ",myStack->data[i]);
    }
}


