# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>

int main(){
    char positive[3][100]={"happy","joyful","excited"};
    char negatife[3][100]={"sad","angry","upset"};
    char neutre[3][100]={"ok","fine","normal"};
    char reponse_positive [3][200] = {"i am happy for you","that is great to hear","i am glad you feel that way"};
    char reponse_negatife [3][200] = {"i am sorry to hear that","i hop things geting better soon","stay strong"};
    char reponse_neutre [3][200] = {"i see how can i help you","is there anything you want to talk about","i am here to listen"};
    printf("ce chat bot peux comprendre ton etat\n");
    while (1)
    {
        char reponse[100];
        printf("you : ");
        fgets(reponse, 100, stdin);
        for (int i = 0; i <= 3; i++)
        {
            if (strstr(reponse,positive[i]))
            {
                srand(time(NULL));
                int random_index = rand() % 3;
                printf("%s\n", reponse_positive[random_index]);
                break;
            }
            else if (strstr(reponse,negatife[i]))
            {
                srand(time(NULL));
                int random_index = rand() % 3;
                printf("%s\n", reponse_negatife[random_index]);
                break;
            }
            else if (strstr(reponse,neutre[i]))
            {
                srand(time(NULL));
                int random_index = rand() % 3;
                printf("%s\n", reponse_neutre[random_index]);
                break;
            }
        }
    }
}