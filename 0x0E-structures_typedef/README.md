# Tasks DEscriptions
- **1 - dog.h: Define a new type struct dog with the following elements:**
* *name, type = char *
* age, type = float
* owner, type = char *
  
- ***2 - Write a function that initializes a variable of type struct dog**

- **3 - Write a function that prints a struct dog**
* *Format: 
Name: Poppy
Age: 3.500000
Owner: Bob
* You are allowed to use the standard library
* If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
* If d is NULL print nothing.

* ***4 - Define a new type dog__t as a new name for the type struct dog**

* **5 - Write a function that creates a new dog.**

* *Prototype: dog_t **new__dog(char *name, float age, char *owner);
* You have to store a copy of name and owner
* Return NULL if the function fails

* ***6 - Write a function that frees dogs.**
