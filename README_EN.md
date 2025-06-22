# Pipex

This project replicates a basic Unix shell mechanism — **pipes** — using system calls in C.

---

## 🔧 What is Pipex?

**Pipex** is a C programming project from the 42 School curriculum.

The main goal is to reproduce the behavior of a shell command that uses a **pipe** (`|`) between two commands. Your program should simulate this shell expression:

```bash
< file1 command1 | command2 > file2
