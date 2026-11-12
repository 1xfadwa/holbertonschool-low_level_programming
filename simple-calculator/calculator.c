
#include <stdio.h>

int main(void)
{
    int choice;
    int a, b;

    printf("Simple Calculator\n");

    while (1)
    {
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
            return (1);

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }

        if (choice < 1 || choice > 4)
        {
            printf("Invalid choice\n");
            continue;
        }

        printf("A: ");
        if (scanf("%d", &a) != 1)
            return (1);

        printf("B: ");
        if (scanf("%d", &b) != 1)
            return (1);

        switch (choice)
        {
            case 1:
                printf("Result: %d\n", a + b);
                break;

            case 2:
                printf("Result: %d\n", a - b);
                break;

            case 3:
                printf("Result: %d\n", a * b);
                break;

            case 4:
                if (b == 0)
                {
                    printf("Error: division by zero\n");
                }
                else
                {
                    printf("Result: %g\n", (double)a / b);
                }
                break;
        }
        printf("\n");
    }

    return (0);
}
