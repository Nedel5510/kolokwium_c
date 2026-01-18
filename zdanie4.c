#include <stdio.h>

void matrix_transform(const int src[5][5], int dest[5][5]) {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int sum_sasiadow = 0;
            int count_sasiadow = 0;
            int is_strictly_largest = 1;

            int dx[4] = {-1, 1, 0, 0};
            int dy[4] = {0, 0, -1, 1};

            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];

                if (ni >= 0 && ni < 5 && nj >= 0 && nj < 5) {
                    int sasiadowy = src[ni][nj];
                    sum_sasiadow += sasiadowy;
                    count_sasiadow++;
                    if (sasiadowy >= src[i][j])
                        is_strictly_largest = 0;
                }
            }

            int avg = (count_sasiadow > 0) ? (sum_sasiadow / count_sasiadow) : 0;

            if (is_strictly_largest && count_sasiadow > 0)
                dest[i][j] = 1;
            else if (count_sasiadow > 0 && src[i][j] < avg)
                dest[i][j] = -1;
            else
                dest[i][j] = 0;
        }
    }
} 

int main(){
    int src[5][5];
    int dest[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", dest[i][j]);
        }
        printf("\n");
    }


return 0; 
}
