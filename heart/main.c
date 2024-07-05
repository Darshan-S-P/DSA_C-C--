#include <stdio.h>
#include <string.h>

int main() {
    int row = 6, col = 7;
    char text[] = "Hi"; // Your text here
    int text_row = 3; // Row to place the text
    int text_col_start = 2; // Column to start placing the text

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if ((r == 0 && c % 3 != 0) ||
                (r == 1 && c % 3 == 0) ||
                (r - c == 2) ||
                (r + c == 8)) {
                printf(" * ");
            } else if (r == text_row && c >= text_col_start && c < text_col_start + strlen(text)) {
                printf(" %c ", text[c - text_col_start]);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
