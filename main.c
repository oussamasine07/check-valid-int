#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop through characters!\n");
    /*
    char id[20] = "1,2,3,4,5,6,7,8,9";
    int length = strlen(id);  // Get the length of the string
    int numbers[20];
    int index = 0;

    char num;
    printf("please enter a number ");
    scanf("%d", &num);
    printf("character size %d\n", sizeof(num));

    for (int i = 0; i < length; i++) {
        if (id[i] != ',') {
            numbers[index] = id[i] - '0';  // Convert char to int
            printf("<<%d>>", numbers[index]);  // Print the integer
            index++;
        }
    }
    */

    char input[20];
    int isValid = 1;

    printf("Enter an integer: ");
    scanf("%s", input);

    // Check if all characters in the input are digits
    for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        int number = atoi(input);  // Convert string to integer if valid
        printf("You entered a valid integer: %d\n", number);
    } else {
        printf("Invalid input! Please enter an integer.\n");
    }





















    return 0;
}
