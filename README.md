# Cpp03: Inheritance and Polymorphism in C++

A comprehensive C++ project focusing on Object-Oriented Programming concepts, specifically inheritance, polymorphism, and class hierarchies. This is part of the 42 school curriculum.

## Overview

This project explores the fundamentals of inheritance in C++ through a series of four exercises, each building upon the previous one. The main theme revolves around robot-like characters (ClapTrap, ScavTrap, FlagTrap, and DiamondTrap) with increasing complexity and capabilities.

## Project Structure

### Exercise 0 (ex00) - Basic Class
**ClapTrap** - A simple robot character class with basic functionality:
- Attributes: hit points, energy points, and attack damage
- Methods: `attack()`, `takeDamage()`, `beRepaired()`
- Demonstrates basic class design with constructors (default, parametrized, copy) and assignment operators

### Exercise 1 (ex01) - Basic Inheritance
**ScavTrap** - Inherits from ClapTrap with specialized behavior:
- Extends the base ClapTrap functionality
- Overrides the `attack()` method with custom behavior
- New method: `guardGate()` - allows ScavTrap to guard a gate
- Demonstrates single inheritance and method overriding

### Exercise 2 (ex02) - Multiple Inheritance
**FlagTrap** - Another class inheriting from ClapTrap:
- Adds new functionality: `highFivesGuys()` method
- Shows the use of multiple classes inheriting from the same base class
- Demonstrates code reusability through inheritance

### Exercise 3 (ex03) - Diamond Inheritance
**DiamondTrap** - Inherits from both ScavTrap and FlagTrap:
- Uses virtual inheritance to resolve the diamond inheritance problem
- Combines features from multiple parent classes
- New method: `whoAmI()` - displays information about the robot
- Demonstrates advanced inheritance patterns and polymorphism

## Key Concepts Covered

- **Constructors & Destructors**: Default, parametrized, copy constructors, and proper cleanup
- **Inheritance**: Single and multiple inheritance patterns
- **Virtual Inheritance**: Resolving the diamond problem in multiple inheritance
- **Method Overriding**: Overriding parent methods with specialized implementations
- **Polymorphism**: Base class references/pointers to derived class objects
- **Copy Assignment Operators**: Proper object copying in inheritance hierarchies
- **Access Modifiers**: Public/private member organization

## Building and Running

Each exercise has its own directory with a Makefile. To compile an exercise:

```bash
cd ex00  # (or ex01, ex02, ex03)
make
./clapTrap  # or appropriate executable
```

To clean up compiled files:

```bash
make clean  # removes object files
make fclean # removes all compiled files and executables
```

To rebuild:

```bash
make re  # equivalent to fclean + make
```

## Compilation Requirements

- C++98 standard or later
- A C++ compiler (g++, clang++, etc.)
- GNU Make

## Learning Outcomes

Upon completing this project, you will understand:
- How inheritance allows code reuse and extension
- The difference between single and multiple inheritance
- How to properly handle virtual inheritance and the diamond problem
- How polymorphism enables flexible object-oriented design
- Best practices for designing class hierarchies
- Proper initialization and cleanup in complex inheritance scenarios

## Files Structure

Each exercise contains:
- `ClapTrap.hpp / ClapTrap.cpp` - Base class implementation
- `[SpecificTrap].hpp / [SpecificTrap].cpp` - Derived class implementations
- `main.cpp` - Test/demonstration code
- `Makefile` - Build configuration

## Notes

This project emphasizes proper C++ practices including:
- Const correctness
- Proper memory management
- Clean separation of interface and implementation
- Following the 42 school C++ coding standards