#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Let's Play Rock,Paper Sizer \n\n");
    // what you want
    char u, ad;
    printf("Enter 'R' for Rock, 'P' for paper, 'S' for sezer: ");
    scanf("%c", &ad);

    // filter user input upercase and lower case
    if (ad == 'R' || ad == 'r')
    {
        u = 'r'; // user choose Rock
        printf("You chose Rock & ");
    }
    else if (ad == 'P' || ad == 'p')
    {
        u = 'p'; // user choose Paper
        printf("You chose Paper & ");
    }
    else if (ad == 'S' || ad == 's')
    {
        u = 's'; // user choose Sezer
        printf("You chose Sizer & ");
    }
    else
    {
        // usert marate pareni
    }

    // what computer want
    char c;
    srand(time(0));
    int num = rand() % 100 + 1;

    if (num <= 30)
    {
        c = 'r'; // computer chose Rock
    }
    else if (num > 30 && num <= 60)
    {
        c = 'p'; // computer  chose rock
    }
    else if (num > 60)
    {
        c = 's'; // computer chose sezer
    }

    // game================================================================

    char res;

    if (c == 'r' && u == 'p' || c == 'p' && u == 's' || c == 's' && u == 'r')
    {
        res = 'w'; // user win
    }

    else if (c == 'r' && u == 's' || c == 'p' && u == 'r' || c == 's' && u == 'p')
    {
        res = 'l'; // user lose
    }
    else if (c == u)
    {
        res = 'd'; // match draw
    }

    // result ===============================================================
    switch (c) // what chose computer
    {
    case 'r':
        printf("Computer choose Rock, ");
        break;
    case 'p':
        printf("Computer choose Paper, ");
        break;
    case 's':
        printf("computer chose Sizer, ");

    default:
        break;
    }
    // who wins
    if (res == 'w') // user win
    {
        printf("you are win :) \n\n");
    }
    else if (res == 'l') // user lose
    {
        printf("you are lose :(\n\n");
    }
    else if (res == 'd') // draw
    {
        printf("Match Draw!! \n\n");
        // break;
    }
    else
    {
        printf("Error");
    }

    return 0;
}
