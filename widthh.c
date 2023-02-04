#include <stdio.h>

int main()
{
    FILE *fp = fopen("w-and-h.css", "w");

    for (int i = 0; i <= 1000; i++)
    {
        fprintf(fp, ".width-%dpx  {width:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - top  ------------------- */\n");

    for (int i = 0; i <= 1000; i++)
    {
        fprintf(fp, ".height-%dpx  {height:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - top  ------------------- */\n");
}