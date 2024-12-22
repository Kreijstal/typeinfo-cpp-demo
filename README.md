# C++ TypeInfo Demonstration

This project demonstrates the usage of C++'s Runtime Type Information (RTTI) features using `typeid` and `typeinfo`.

## Features

- Basic type identification
- Dynamic type identification with polymorphic classes
- Type comparison using typeid
- Template type information demonstration

## Building the Project

### Prerequisites

- CMake (version 3.10 or higher)
- C++ compiler with C++17 support

### Build Instructions

```bash
# Configure the build
cmake -B build

# Build the project
cmake --build build
```

### Running the Demo

After building, run the demo:

```bash
./typeinfo_demo
```

## Understanding the Output

The program demonstrates several RTTI features:

1. Basic type information for primitive types
2. Dynamic type identification for polymorphic classes
3. Runtime type comparison
4. Template type information

Note: The exact output format of `typeid().name()` is compiler-dependent. On gcc/clang, the output is typically mangled.

## Examining Type Information in the Binary

You can examine the type information symbols in the compiled binary using:

```bash
nm --demangle typeinfo_demo | grep typeinfo
```

This will show the typeinfo symbols that the compiler generated for RTTI support.
