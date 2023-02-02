#include <stdio.h>

int main()
{
    FILE *fp = fopen("margin.css", "w");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".m-%d{margin:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  margin - top  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".m-top-%d{margin-top:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  margin - right  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".m-right-%d{margin-right:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  margin - bottom  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".m-bottom-%d{margin-bottom:%dpx;}\n", i, i);
    }

    fprintf(fp, "\n/* -------------------  margin - left  ------------------- */\n");

    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, ".m-left-%d{margin-left:%dpx;}\n", i, i);
    }
}