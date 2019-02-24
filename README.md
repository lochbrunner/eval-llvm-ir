# Evaluation of LLVM-IR

## Generating IR Code

### C++

```sh
clang -emit-llvm -S main.cpp
```

### Rust

```sh
cargo rustc -- --emit=llvm-ir
```

## Generating binaries

```sh
llc -filetype=obj main.ll
gcc main.o
```
