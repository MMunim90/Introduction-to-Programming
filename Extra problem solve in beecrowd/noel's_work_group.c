#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char e[101][101];
    char g[101][101];
    int h[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", e[i]);
        scanf("%s", g[i]);
        scanf("%d", &h[i]);
    }
    int total_bonecos_hour = 0;
    int total_arquitetos_hour = 0;
    int total_musicos_hour = 0;
    int total_desenhistas_hour = 0;

    int bonecos = 8;
    int arquitetos = 4;
    int musicos = 6;
    int desenhistas = 12;

    int bonecos_produce = 0;
    int arquitetos_produce = 0;
    int musicos_produce = 0;
    int desenhistas_produce = 0;

    int total_amount_of_gifts = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(g[i], "bonecos") == 0)
        {
            total_bonecos_hour += h[i];
        }
        else if (strcmp(g[i], "arquitetos") == 0)
        {
            total_arquitetos_hour += h[i];
        }
        else if (strcmp(g[i], "musicos") == 0)
        {
            total_musicos_hour += h[i];
        }
        else if (strcmp(g[i], "desenhistas") == 0)
        {
            total_desenhistas_hour += h[i];
        }
    }

    bonecos_produce = total_bonecos_hour / bonecos;

    arquitetos_produce = total_arquitetos_hour / arquitetos;

    musicos_produce = total_musicos_hour / musicos;

    desenhistas_produce = total_desenhistas_hour / desenhistas;

    total_amount_of_gifts = bonecos_produce + arquitetos_produce + musicos_produce + desenhistas_produce;

    printf("%d\n", total_amount_of_gifts);

    return 0;
}