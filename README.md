# macro based loop execution using preprocessor directives

This program uses preprocessor directives—`ALL`, `INNER_LOOP`, and `OUTER_LOOP`—to control which segments of code are compiled. By toggling these definitions, you can precisely manage the inclusion of specific logic:

*   **`ALL`**: When defined, the preprocessor embeds all code blocks, ensuring both the inner and outer loops are included in the final executable.
*   **`INNER_LOOP` / `OUTER_LOOP`**: When defined individually, the preprocessor selectively includes only the logic associated with that specific tag while stripping away the others.

This approach offers a modular way to handle conditional compilation. It allows you to optimize performance or isolate segments for debugging without the need to manually comment out code. By adjusting these definitions at the top of the source file or through compiler flags, you can efficiently generate multiple versions of the program from a single codebase.

## How to use it

- Select one of the defined directives—ALL, INNER_LOOP, or OUTER_LOOP—to control the compilation behavior.
```c
// Case of whole flow
#define ALL

// or ->
// #define INNER_LOOP

// or ->
// #define OUTER_LOOP
```

- Compile:
```bash
gcc app.c -o app
```

- Run:
```bash
./app
```