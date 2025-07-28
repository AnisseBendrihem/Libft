# libft

This project is part of the 42 school curriculum.  
Its goal is to **reimplement a subset of the standard C library** from scratch, with a focus on:

- Manual memory management
- Low-level string manipulation
- Function modularity and robustness
- Unix-style compilation with Makefiles

The project is split into several parts:

- 📁 `ft_lib/` – Core libc functions (e.g. `memcpy`, `strncpy`, `atoi`, etc.)
- 📁 `ft_printf/` – Custom formatted output implementation (like `printf`)
- 📁 `get_next_line/` – Line-by-line file reader using buffered system calls
- 📄 `libft.h` – Centralized header for all internal function prototypes
- 🛠️ `Makefile` – Full build system (including bonuses and utils)

## ✅ Features

- No use of standard C library (except `write`, `malloc`, `free`)
- Custom `ft_printf` implementation with `%c`, `%s`, `%d`, `%x`, `%p`, etc.
- Robust `get_next_line` with static buffers and FD handling
- Fully modular and integrable into any 42 project (pipex, so_long, etc.)

## 🧪 Build & Usage

```bash
make        # Build the libft.a archive
make bonus  # Build with linked list bonus functions
