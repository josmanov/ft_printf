# 🖨️ ft_printf - 42's Custom Printf

ft_printf is a **42 project** that involves recreating the standard `printf` function in C. 

It supports formatted output with a subset of the original `printf` functionalities.

---

## ⚙️ Installation

1. **Clone the repository**:

   ```bash
   git clone https://github.com/josmanov/ft_printf.git
   ```

2. **Enter the project directory**:

   ```bash
   cd ft_printf
   ```

3. **Compile the library**:

   ```bash
   make
   ```

   - To clean up compiled files:
     ```bash
     make clean
     ```
   - To fully clean up the repository:
     ```bash
     make fclean
     ```
   - To recompile from scratch:
     ```bash
     make re
     ```

---

## 🚀 Usage

To use `ft_printf` in your project, include the header file and link the compiled library:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! The number is %d.\n", "world", 42);
    return 0;
}
```

Compile your program with:

```bash
gcc main.c libftprintf.a -o my_program
```

Run it:

```bash
./my_program
```

---

## 📜 Supported Conversions

- `%c` – Character
- `%s` – String
- `%p` – Pointer address
- `%d` – Decimal (integer)
- `%i` – Integer
- `%u` – Unsigned integer
- `%x` – Hexadecimal (lowercase)
- `%X` – Hexadecimal (uppercase)
- `%%` – Percent sign

---

## 🌍 Built With

- **C** – The project is written in **pure C**.
- **Variadic Functions** – Used to handle a variable number of arguments.

---

## 📜 Additional Notes
- The project **does not support** floating-point numbers (`%f`).
