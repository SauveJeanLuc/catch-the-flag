#include <stdio.h>
int main() {

    //We declare a char:
    char c='S';
    //We declare a pointer to char, for that we use the *
    char *p;
    //Assign address of the char c, to pointer p. To get the address of a variable we use &
    p = &c;
    printf ("\n This is the value of char c: %c ", c);
    //As we said, we use & to get the address, We are printing the memory address in which c is located:
    printf ("\n This is the address of char c: %d ", &c);
    printf ("\n This is the address that pointer p is pointing at, which is the address of c: %d ", p);
    //Now, we can use pointers to point to the first character of an array of characters, and move through it
    char *p2 ;
    //We use malloc to allocate 6 bytes
    p2 = malloc(6);
    printf ("\n This is the address that pointer p2 is pointing at %d ", p2);
    //Note: memory allocated with malloc, is allocated in the heap, so you see
    //that its value is far from the other values we have printed that were local
    //variables and are allocated in the stack. You will learn more about the stack and heap later.
    //p2 is pointing to memory in the heap, but it's a local variable, so if we print
    //its address it should be close to the other local variables:
    printf ("\n This is the address of  p2: %d ", &p2);
    //Now we assign values to the bytes we have allocated:
    *(p2+0)='h';
    *(p2+1)='e';
    *(p2+2)='l';
    *(p2+3)='l';
    *(p2+4)='o';
    *(p2+5)=0;
    printf("\n This is p2 printed as a string: %s ",p2);
    //Note that 0 (the ASCII for NULL), is the end of the string.
    //Also note that 0 is different from '0', '0' is actually 48, if you print it as an int
    printf("\n This is the value of the zero char, different from null char: %d ",'0');
    //See what happens if we put a 0 in the middle of our char array:
    *(p2+2)=0;
    printf("\n This is the string we just created: %s ",p2);
    //It prints only "he"
    //
    //Of course a string can be created in a shorter way, for instance:
    char *p3=&"hello";
    printf("\n This is the content pointed by p3: %s ", p3);
    //Now, let's make a pointer to pointer to char, we will use the pointer p that points to the char c we declare previously
    char **pp;
    pp=&p;
    //So, imagine pp is a box (the first box), that contains an address that points to a second box, that contains an address that points to a third box, that contains a char
    printf("\n This is the address in which pp is allocated, the address of the first box: %d ", &pp);
    printf("\n This is the address  pp points at, the content of the first box: %d ", pp);
    printf("\n This is the content of the second box: %d ", *pp);
    printf("\n This is the content of the third box: %c ", **pp);
    //we can create as many pointers to pointers as we need:
    char ***ppp;
    ppp=&pp;
    printf("\n This is the content of ***ppp: %c ", ***ppp);
    //Let's see how we could implement a list of words
    char **pp2=malloc(100);
    //pp is the first address
    *pp2=&"hi";
    *(pp2+1)=&"carnegie";
    *(pp2+2)=&"mellon";
    printf("\n This is hi: %s ", *pp2);
    printf("\n This is carnegie: %s ", *(pp2+1));
    printf("\n This is mellon: %s ", *(pp2+2));

    //You might be wondering about the relation between arrays and pointers. Some people say in c, the use of [] is just syntactic sugar.
    //But there are not actual arrays on C.
    //In this expression it is created a pointer to the first element of the array. In fact, arr is pointer to the first element:
    char arr[5]="hello";
    //these expressions are the same:
    printf("\n This is arr[0]: %c ", arr[0]);
    printf("\n This is *arr: %c ", *(arr+0));
    //as well as:
    printf("\n This is arr[0]: %c ", arr[1]);
    printf("\n This is *(arr+0): %c ", *(arr+1));
    printf("\n This is arr[1]: %c ", arr[2]);
    printf("\n This is *(arr+1): %c ", *(arr+2));
    printf("\n This is arr[2]: %c ", arr[3]);
    printf("\n This is *(arr+2): %c ", *(arr+3));
    printf("\n This is arr[3]: %c ", arr[4]);
    printf("\n This is *(arr+3): %c ", *(arr+4));
    //understanding that, you can see now why in C, a thing that looks very weird as the following, makes sense:
    printf("\n This is 1[arr]: %c ", 1[arr]);
    //As you see, it printed 'e', because that expression is just *(1+a), which is the same as *(a+1)
    //People says that proves that in C there are not actual arrays. What is our opinion? As long as you clearly
    //understand how it works in the languages you are using
    printf("\n SEE YOU!  keep on the good work! \n ");
}