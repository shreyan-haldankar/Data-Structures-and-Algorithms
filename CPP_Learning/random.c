#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int m = 0, i, j, flag = 0;
char c, *s1, *s2, *s3, *s4, str[50] = " ", str1[50] = " ";
char mac[10][10];
void main()
{
    FILE *fpm = fopen("macro.txt", "r");
    FILE *fpi = fopen("minput.txt", "r");
    FILE *fpo = fopen("moutput.txt", "w");
    
    while (!feof(fpm))
    {
        fgets(str, 50, fpm);
        s1 = strtok(str, " ");
        printf("%s\n", s1);
        s2 = strtok(NULL, " ");
        printf("%s", s2);
        if (strcmp(s1, "MACRO") == 0)
        {
            strcpy(mac[m], s2);
            m++;
        }
        s1 = s2 = NULL;
    }
    fgets(str, 50, fpi);

    while (!feof(fpi))
    {
        flag = 0;
        strcpy(str1, str);
        for (i = 0; i < m; i++)
        {
            if (strcmp(str1, mac[i]) == 0)
            {
                rewind(fpm);
                while (!feof(fpm))
                {
                    fgets(str, 50, fpm);
                    s2 = strtok(str, " ");
                    s3 = strtok(NULL, " ");
                    if (strcmp(s2, "MACRO") == 0 && strcmp(s3, str1) == 0)
                    {
                        fgets(str, 50, fpm);
                        strncpy(s4, str, 4);
                        s4[4] = '\0';
                        while (strcmp(s4, "MEND") != 0)
                        {
                            fprintf(fpo, "%s", str);
                            printf("\n####%s", str);
                            fgets(str, 50, fpm);
                            strncpy(s4, str, 4);
                            s4[4] = '\0';
                        }
                    }
                }
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            fprintf(fpo, "%s", str);
            printf("%s", str);
        }
        fgets(str, 50, fpi);
    }
    fclose(fpm);
    fclose(fpi);
    fclose(fpo);
    getch();
}