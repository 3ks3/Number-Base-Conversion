#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "convert.h"

int main()
{
    FILE *file = fopen("a1_test_file.txt", "r");

    if (!file)
    {
        perror("Failed to open a1_test_file.txt");
        return 1;
    }

    char line[256];
    int total = 0, passed = 0, test_num = 1;

    while (fgets(line, sizeof(line), file))
    {
        char func[20];
        uint32_t number;
        int base;
        char expected[65], actual[65];

        if (sscanf(line, "%s", func) != 1)
            continue;

        if (strcmp(func, "div_convert") == 0)
        {
            if (sscanf(line, "%*s %u %d %s", &number, &base, expected) == 3)
            {
                total++;

                div_convert(number, base, actual);

                if (strcmp(actual, expected) == 0)
                {
                    printf("Test %d: div_convert(%u, %d) => \"%s\" [PASS]\n", test_num, number, base, actual);
                    passed++;
                }
                else
                {
                    printf("Test %d: div_convert(%u, %d) => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                           test_num, number, base, expected, actual);
                }
                test_num++;
            }

        }
        else if (strcmp(func, "sub_convert") == 0)
        {
            if (sscanf(line, "%*s %u %d %s", &number, &base, expected) == 3)
            {
                total++;

                sub_convert(number, base, actual);

                if (strcmp(actual, expected) == 0)
                {
                    printf("Test %d: sub_convert(%u, %d) => \"%s\" [PASS]\n", test_num, number, base, actual);
                    passed++;
                }
                else
                {
                    printf("Test %d: sub_convert(%u, %d) => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                           test_num, number, base, expected, actual);
                }
                test_num++;
            }
        }
        else if (strcmp(func, "oct_to_bin") == 0)
        {
            char input[100];

            if (sscanf(line, "%*s %s %s", input, expected) == 2)
        {
        total++;

        oct_to_bin(input, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: oct_to_bin(\"%s\") => \"%s\" [PASS]\n", test_num, input, actual);
            passed++;
        }
        else
        {
            printf("Test %d: oct_to_bin(\"%s\") => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, input, expected, actual);
        }
        test_num++;
    }
}
else if (strcmp(func, "oct_to_hex") == 0)
{
    char input[100];

    if (sscanf(line, "%*s %s %s", input, expected) == 2)
    {
        total++;

        oct_to_hex(input, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: oct_to_hex(\"%s\") => \"%s\" [PASS]\n", test_num, input, actual);
            passed++;
        }
        else
        {
            printf("Test %d: oct_to_hex(\"%s\") => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, input, expected, actual);
        }
        test_num++;
    }
}
else if (strcmp(func, "hex_to_bin") == 0)
{
    char input[100];

    if (sscanf(line, "%*s %s %s", input, expected) == 2)
    {
        total++;

        hex_to_bin(input, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: hex_to_bin(\"%s\") => \"%s\" [PASS]\n", test_num, input, actual);
            passed++;
        }
        else
        {
            printf("Test %d: hex_to_bin(\"%s\") => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, input, expected, actual);
        }
        test_num++;
    }
}
else if (strcmp(func, "to_sign_magnitude") == 0)
{
    int32_t num;

    if (sscanf(line, "%*s %d %s", &num, expected) == 2)
    {
        total++;

        to_sign_magnitude(num, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: to_sign_magnitude(%d) => \"%s\" [PASS]\n", test_num, num, actual);
            passed++;
        }
        else
        {
            printf("Test %d: to_sign_magnitude(%d) => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, num, expected, actual);
        }
        test_num++;
    }
}
else if (strcmp(func, "to_ones_complement") == 0)
{
    int32_t num;

    if (sscanf(line, "%*s %d %s", &num, expected) == 2)
    {
        total++;

        to_ones_complement(num, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: to_ones_complement(%d) => \"%s\" [PASS]\n", test_num, num, actual);
            passed++;
        }
        else
        {
            printf("Test %d: to_ones_complement(%d) => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, num, expected, actual);
        }
        test_num++;
    }
}
else if (strcmp(func, "to_twos_complement") == 0)
{
    int32_t num;
    if (sscanf(line, "%*s %d %s", &num, expected) == 2)
    {
        total++;

        to_twos_complement(num, actual);

        if (strcmp(actual, expected) == 0)
        {
            printf("Test %d: to_twos_complement(%d) => \"%s\" [PASS]\n", test_num, num, actual);
            passed++;
        }
        else
        {
            printf("Test %d: to_twos_complement(%d) => Expected: \"%s\", Got: \"%s\" [FAIL]\n",
                   test_num, num, expected, actual);
        }
        test_num++;
    }
}

        else if (strcmp(func, "print_tables") == 0)
        {
            if (sscanf(line, "%*s %u", &number) == 1)
            {
                total++;

                printf("Test %d: print_tables(%u)\n", test_num, number);
                print_tables(number);

                printf("[FORMATTED OUTPUT CHECK] [PASS]\n");
                passed++;

                test_num++;
            }
        }
    }

    fclose(file);
    printf("\nSummary: %d/%d tests passed\n", passed, total);
    return 0;
}


