#include <stdio.h>

int fifamenu();

int fifamenu()
{
    printf("\n<||*******####################################################******************||>");
    printf("\n<||>########### this is a fifa world cup player information ########<||>");
    printf("\n<||*******####################################################******************||>");
    printf("\n1  add");
    printf("\n<||******************||>");
    printf("\n2  see information");
    printf("\n<||******************||>");
    printf("\n3  exit");
    printf("\n<||******************||>");
}

int main()
{
    int number[4];
    char name[4][50];
    char country[4][50];
    int option;

    while (1)
    {
        fifamenu();

        printf("\nchose any option : ");
        scanf("%d", &option);

        if (option == 3)
        {
            break;
        }

        switch (option)
        {
        case 1:
            for (int i = 0; i < 4; i++)
            {
                for (int x = 0; x < 1; x++)
                {
                    printf("\nEnter a player id");
                    scanf("%d", &number[i]);

                    printf("Enter a player name");
                    scanf("%s", &name[i][x]);

                    printf("Enter a player country");
                    scanf("%s", &country[i][x]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < 4; i++)
            {
                printf("\n####################*****************");
                printf("\n player id :%d", number[i]);
                printf("\n player name :%s", name[i]);
                printf("\n player country :%s", country[i]);
                printf("\n###################*******************\n");
            }
            break;

        case 3:
            break;

        default:
            printf("\nnumber not valid ");
            break;
        }
    }
}