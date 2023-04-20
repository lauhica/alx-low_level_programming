0x0F. C - Function Pointers
This assignment looks at function pointers in the C language. According to the pre-defined tasks we will be applying the concept of function pointers in relation to function callback, passing arguments from one function to another and utilizing a number of functions through the use of an array of pointers to function.

Task 0. What is my name
Write a function that prints a name.
	Prototype: void print_name(char *name, void (*f)(char *))

Task 1. If you spend too much time thinking about a thing, you will never get it done
Write a function that executes a function given as a parameter on each element of an array.
	Prototype: void array_iterator(int *array, size_t size, void (*action)(int))

Task 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
	Prototype: int int_index(int *array, int size, int (*cmp)(int))

Task 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
	Prototypes:
	op_add: int op_add(int a, int b)
	op_sub: int op_sub(int a, int b)
	op_mul: int op_mul(int a, int b)
	op_div: int op_div(int a, int b)
	op_mod: int op_mod(int a, int b)
	get_op: int (*get_op_func(char *s))(int, int)

Task 4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program that prints the operation codes of its own main function.

