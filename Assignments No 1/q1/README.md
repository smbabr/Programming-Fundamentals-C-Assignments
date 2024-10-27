# Reading Two Integers and Display Their Sum

### Problem Statement
This C program reads two integers from the keyboard, stores the values in variables `a` and `b`, and then displays their sum.

### Concepts Used
- **Variables**: Used to store the integer values entered by the user.
- **Operators**: The addition operator (`+`) is used to calculate the sum of the two integers.
- **Input/Output Functions**:
  - `scanf`: Used to read the input values from the keyboard.
  - `printf`: Used to display the output result.

# Code
```C
int main() {
    int a, b, sum;

    
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);
    
    
    sum = a + b;
    
    
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
```
## How to Use
1.Clone this repository to your local machine.

2.Compile the program and Run the Program.

3.Enter the integer when asked

4. The program will display the sum of two integers!

## Usage
```C
Enter the First integer : 15
Enter the  Second integer : 15

The sum of  15 and 15 is 30.
```
