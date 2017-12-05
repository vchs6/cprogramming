
#include <string.h>

int stoi(const char * str)
{
    int r = 0;
    size_t len = strlen(str);
    size_t i;
    for(i = 0; i < len; i++) {
        r = r * 10 + (str[i] - '0');
    }
    return r;
}

void split(const char * str,  char strs[][10])
{
    int i;
    int j = 0;
    size_t len = strlen(str);
    i = 0;
    while(str[i] >= '0' && str[i] <= '9') {
        strs[0][j++] = str[i++];
    }
    strs[0][j] = '\0';
    strs[1][0] = str[i++];
    strs[0][1] = '\0';
    j = 0;
    while( i < len) {
        strs[2][j++] = str[i++];
    }
    strs[2][j] = '\0';
}
