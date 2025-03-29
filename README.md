# Data Structure Practice in C

This repository contains implementation examples of various data structures using the C programming language.  
The code was written and organized during personal study of classic data structures such as stacks, queues, lists, and more.

## 📁 Structure
```
Datastructure/
├── Lists/
│   ├── List_Function.c
│   ├── MultipleQueues.c
│   ├── MultipleStacks.c
│   ├── Polynomials.c
│   ├── Lists.sln / .vcxproj / .filters / .user
├── StacksAndQueues/
│   ├── Stack.c
│   ├── Queue.c
│   ├── CircularQueue.c
│   ├── Maze(Stack).c
│   ├── StacksAndQueues.sln / .vcxproj / .filters / .user
│   └── Debug/ + .vs/ (Visual Studio 관련 파일)
```

> Project files (.sln, .vcxproj, .filters, .user) are for building in Visual Studio on Windows.

## 🛠️ How to Run

You can compile individual `.c` files using GCC or any C compiler.  
Example (Linux/macOS):

```bash
gcc Stack.c -o stack
./stack
```
Or use Visual Studio to build .sln files if you're on Windows.

## ✍️ Contents

- ✅ List operations (single, multiple, polynomial)
- ✅ Stack implementation (`StacksAndQueues/Stack.c`)
- ✅ Circular queue (`StacksAndQueues/CircularQueue.c`)
- ✅ Maze solving using stack (`StacksAndQueues/Maze(Stack).c`)
- 🚫 No external libraries or back-end logic

## 📚 Purpose
This repository serves as a personal learning log for fundamental data structure implementations during C language practice.

## License
This project is for educational use only.
