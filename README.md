# Password Generator

This C++ project provides a simple and customizable password generator that allows me and you to generate strong and random passwords.

## Usage

### `generator.cpp`

The `generator.cpp` file contains the C++ code for the password generator. It utilizes the Mersenne Twister random number engine and provides options for generating passwords with a mix of uppercase letters, lowercase letters, numbers, and symbols.

#### How to Run:

1. Compile the C++ code:

    ```bash
    g++ generator.cpp -o generator
    ```

2. Run the compiled executable:

    ```bash
    ./generator
    ```

3. Enter the desired length for the password when prompted. A length of 12 or more is recommended for strong passwords.

4. The generated password will be displayed, and you can copy and paste it as needed.

### `run.sh - a simpler way to run the code` 

The `run.sh` Bash script simplifies the compilation and execution process for the C++ program. This is only for linux.

#### How to Run:

1. Make the script executable:

    ```bash
    chmod +x run.sh
    ```

2. Run the script:

    ```bash
    ./run.sh
    ```

The script compiles `generator.cpp` using `g++` and then executes the generated `generator` executable.

## Notes

- The password generation is based on a mix of alphabets (uppercase and lowercase), numbers, and symbols.
- The C++ code uses the Mersenne Twister random number engine for better randomness.
- Ensure you have a C++ compiler installed on your system before running the code.

Feel free to customize the code further or integrate additional features based on your requirements.
