#include <stdio.h>

int main()
{
    FILE *fp = fopen("padding.css", "w");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".p-%d{padding:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - top  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".p-top-%d{padding-top:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - right  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".p-right-%d{padding-right:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - bottom  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".p-bottom-%d{padding-bottom:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  padding - left  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".p-left-%d{padding-left:%dpx;}\n", i, i);
    }
}