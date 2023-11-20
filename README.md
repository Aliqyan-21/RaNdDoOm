# Password Generator

This C++ project provides a simple and customizable password generator that creates strong and random passwords.

## Unique Algorithm

The password generation algorithm in this project is a carefully crafted process designed to ensure the strength and randomness of generated passwords.

### Algorithm Steps:

1. **Initialize Character Sets:**
   - Define arrays `alphabets`, `nums`, and `symbols` representing lowercase letters, numbers, and symbols, respectively.

2. **Determine Parts of Password:**
   - Calculate three parts (`prt1`, `prt2`, `prt3`) based on the desired password length (`n`). These parts represent the distribution of characters in the password.

3. **Random Seed and Engine:**
   - Initialize a random seed using `random_device` and a Mersenne Twister engine (`mt19937`).

4. **Generate Lowercase Letters:**
   - For the first part (`prt3`), randomly select lowercase letters from the `alphabets` array.
   - If within the first third of this part, convert the letter to uppercase for added variety.

5. **Generate Numbers:**
   - For the second part (`prt2`), randomly select numbers from the `nums` array.

6. **Generate Symbols:**
   - For the third part (`prt1`), randomly select symbols from the `symbols` array.

7. **Shuffle Characters:**
   - Use `shuffle` to rearrange the characters in the password, providing additional randomness.

8. **Return Generated Password:**
   - The generated password is returned, ready to be displayed or copied.

This meticulous approach to password generation ensures a balanced mix of lowercase letters, numbers, and symbols, while the use of shuffling adds an extra layer of unpredictability. The result is a strong and unique password suitable for various security needs.

## Tested Password on kaspersky.com:

- **Length 8:** Despite being too short password, it was not found in any databases.

    <kbd>
    <img src="images/3.png" width="500px" height="auto" />
    </kbd>

- **Length 12:**

    <kbd>
    <img src="images/1.png" width="500px" height="auto" />
    </kbd>

- **Length 16:**

    <kbd>
    <img src="images/2.png" width="500px" height="auto" />
    </kbd>

## Usage

### generator.cpp

The `generator.cpp` file contains the C++ code for the password generator. It utilizes a unique algorithm along with the Mersenne Twister random number engine and provides options for generating passwords with a mix of uppercase letters, lowercase letters, numbers, and symbols.

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

### run.sh - a simpler way to run the code

The `run.sh` Bash script simplifies the compilation and execution process for the C++ program. This is only for Linux.

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

- The password generation algorithm is a unique creation designed for strong and random passwords.
- The C++ code uses the Mersenne Twister random number engine for better randomness.
- Ensure you have a C++ compiler installed on your system before running the code.

Feel free to customize the code further or integrate additional features based on your requirements.
