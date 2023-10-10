Task 0: Poppy
Description: In this task, you need to define a new structure type called struct dog. This structure should have the following members:

name, which is a pointer to a character (char *)
age, which is of type float
owner, which is also a pointer to a character (char *)
You are required to create an instance of this structure and initialize its members with specific values. Afterward, print the information about the dog.

Task 1: A dog is the only thing on earth that loves you more than you love yourself
Description: In this task, you need to write a function named init_dog that initializes a variable of type struct dog. This function takes three parameters:

d, a pointer to a struct dog
name, a pointer to a character (char *)
age, a float
owner, a pointer to a character (char *)
The function should set the name, age, and owner members of the struct dog pointed to by d with the values provided as arguments.

Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Description: Task 2 requires you to write a function named print_dog that prints the information contained within a struct dog. This function takes a pointer to a struct dog as an argument and should print the name, age, and owner members. If any of these members are NULL, you should print "(nil)" in place of the NULL value.

Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read
Description: In this task, you need to define a new type called dog_t, which is an alias for the struct dog type. This means that dog_t can be used interchangeably with struct dog.

Task 4: A door is what a dog is perpetually on the wrong side of
Description: Task 4 involves writing a function named new_dog that creates a new instance of a struct dog. This function takes three parameters:

name, a pointer to a character (char *) that represents the dog's name
age, a float that represents the dog's age
owner, a pointer to a character (char *) that represents the dog's owner
The function should create a new struct dog, copy the provided name and owner strings into it, set the age member, and return a pointer to the new struct dog. If the function fails, it should return NULL.

Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Description: The final task, Task 5, requires you to write a function named free_dog that frees the memory allocated for a struct dog. This function takes a pointer to a struct dog as an argument and should release the memory used by the name and owner members and then free the memory of the struct dog itself.