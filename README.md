# CPP MODULES

## Summary

This repository contains the modules of the C++ piscine from 42 School.

Each module is in a folder named `cppXX` where `XX` is the number of the module.

The higher the number, the more advanced the module is.

In all of these exercises, I have adhered to good coding practices, ensuring that my code is clean, readable, and efficient. All my code has been compiled using the `c++` compiler with the flags `-Wall -Wextra -Werror`, and it has been confirmed to compile with the `-std=c++98` flag as well.

## Module 04 - Subtype Polymorphism, Abstract Classes, Interfaces

This module focused on learning and implementing principles related to Polymorphism, Abstract Classes, and Interfaces in C++. It was designed to deepen the understanding of Object-Oriented Programming (OOP) in a C++ environment.

- **Sub-Typing Polymorphism**: The `Animal` exercise where `Dog` and `Cat` classes inherit from `Animal` and override the `makeSound()` function. This demonstrates how different types of the same base class (`Animal`) can have distinct behaviors (`Dog` and `Cat` making different sounds).
- **Abstract Classes**: The `Animal` class in the second exercise is made abstract to ensure it can't be instantiated directly. This is achieved by defining at least one pure virtual function in the `Animal` class. The `Dog` and `Cat` classes, which inherit from `Animal`, provide their own implementation of this function.
- **Interfaces**: While not explicitly present in these exercises, the concept of interfaces is similar to that of pure abstract classes (classes where all functions are pure virtual). An example could be a hypothetical `ISoundMaker` interface with a pure virtual function `makeSound()`, which would then be implemented by any classes (like `Dog` or `Cat`) that 'implement' this interface.
