void binHex(char *src, char *dst, size_t max)
{
    size_t i = 0;
    size_t h = 0;

    while (src[i] != '\0' && src[i] != '\n' && h < max - 1)
    {
        if (src[i] == '0' && src[i + 1] == '0' && src[i + 2] == '0' && src[i + 3] == '0')
        {
            dst[h] = '0';
        }
        else if (src[i] == '0' && src[i + 1] == '0' && src[i + 2] == '0' && src[i + 3] == '1')
        {
            dst[h] = '1';
        }
        else if (src[i] == '0' && src[i + 1] == '0' && src[i + 2] == '1' && src[i + 3] == '0')
        {
            dst[h] = '2';
        }
        else if (src[i] == '0' && src[i + 1] == '0' && src[i + 2] == '1' && src[i + 3] == '1')
        {
            dst[h] = '3';
        }
        else if (src[i] == '0' && src[i + 1] == '1' && src[i + 2] == '0' && src[i + 3] == '0')
        {
            dst[h] = '4';
        }
        else if (src[i] == '0' && src[i + 1] == '1' && src[i + 2] == '0' && src[i + 3] == '1')
        {
            dst[h] = '5';
        }
        else if (src[i] == '0' && src[i + 1] == '1' && src[i + 2] == '1' && src[i + 3] == '0')
        {
            dst[h] = '6';
        }
        else if (src[i] == '0' && src[i + 1] == '1' && src[i + 2] == '1' && src[i + 3] == '1')
        {
            dst[h] = '7';
        }
        else if (src[i] == '1' && src[i + 1] == '0' && src[i + 2] == '0' && src[i + 3] == '0')
        {
            dst[h] = '8';
        }
        else if (src[i] == '1' && src[i + 1] == '0' && src[i + 2] == '0' && src[i + 3] == '1')
        {
            dst[h] = '9';
        }
        else if (src[i] == '1' && src[i + 1] == '0' && src[i + 2] == '1' && src[i + 3] == '0')
        {
            dst[h] = 'a';
        }
        else if (src[i] == '1' && src[i + 1] == '0' && src[i + 2] == '1' && src[i + 3] == '1')
        {
            dst[h] = 'b';
        }
        else if (src[i] == '1' && src[i + 1] == '1' && src[i + 2] == '0' && src[i + 3] == '0')
        {
            dst[h] = 'c';
        }
        else if (src[i] == '1' && src[i + 1] == '1' && src[i + 2] == '0' && src[i + 3] == '1')
        {
            dst[h] = 'd';
        }
        else if (src[i] == '1' && src[i + 1] == '1' && src[i + 2] == '1' && src[i + 3] == '0')
        {
            dst[h] = 'e';
        }
        else if (src[i] == '1' && src[i + 1] == '1' && src[i + 2] == '1' && src[i + 3] == '1')
        {
            dst[h] = 'f';
        }

        i += 4;
        h++;
    }

    dst[h] = '\0';
}

void hexBin(char *src, char *dst, size_t max)
{
    size_t i = 0;
    size_t h = 0;

    while (src[i] != '\0' && src[i] != '\n' && h < max - 4)
    {
        switch (src[i])
        {
        case '0':
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '0';
            break;
        case '1':
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '1';
            break;
        case '2':
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '0';
            break;
        case '3':
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '1';
            break;
        case '4':
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '0';
            break;
        case '5':
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '1';
            break;
        case '6':
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '0';
            break;
        case '7':
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '1';
            break;
        case '8':
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '0';
            break;
        case '9':
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '0';
            dst[h++] = '1';
            break;
        case 'a':
        case 'A':
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '0';
            break;
        case 'b':
        case 'B':
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '1';
            dst[h++] = '1';
            break;
        case 'c':
        case 'C':
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '0';
            break;
        case 'd':
        case 'D':
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '0';
            dst[h++] = '1';
            break;
        case 'e':
        case 'E':
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '0';
            break;
        case 'f':
        case 'F':
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '1';
            dst[h++] = '1';
            break;
        }
        i++;
    }

    dst[h] = '\0';
}