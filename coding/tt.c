#include <stdio.h>
char square[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else

        return -1;
}

void box()
{
    printf("\n\nTic Tac Toe\n\n");

    printf("Player 1 (X) - Player 2 (O)\n\n");

    printf("  %c|%c|%c\n ", square[1], square[2], square[3]);
    printf(" %c|%c|%c\n ", square[4], square[5], square[6]);
    printf(" %c|%c|%c\n ", square[7], square[8], square[9]);
}

int main()
{
    int player = 1;
    int choice;
    int i;
    char mark;
    do
    {
        box(); // calling function

        printf("Enter a number ", player);
        scanf("%d", &choice);
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[2] == '9')
            square[9] = mark;

        else
        {
            printf("Invalid move ");

            player--;
        }

        i = checkwin(); // calling function

        player++;

    } while (i == -1);

    box(); // calling function

    if (i == 1)
    {
        printf("\n Player %d win ", --player);
    }
    else
    {
        printf("==Game draw ");
    }

    return 0;
}
