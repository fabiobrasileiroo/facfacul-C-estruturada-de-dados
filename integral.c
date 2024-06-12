#include <stdio.h>
#include <stdlib.h>

#define MAXN 1000005

typedef struct {
    int x, f;
} Point;

Point points[MAXN];
int interval[MAXN];

int cmp(const void *a, const void *b) {
    Point *pa = (Point *)a;
    Point *pb = (Point *)b;
    return (pa->x - pb->x);
}

int main() {
    int N, M, Y;
    while (scanf("%d %d %d", &N, &M, &Y) != EOF) {
        for (int i = 0; i < M; i++) {
            scanf("%d %d", &points[i].x, &points[i].f);
        }

        qsort(points, M, sizeof(Point), cmp);

        int area = 0;
        for (int i = 1; i < M; i++) {
            area += (points[i].x - points[i - 1].x) * points[i - 1].f;
        }

        if (area < Y) {
            printf("N\n");
        } else {
            printf("S");

            int remaining_area = Y;
            int last_x = 0;
            for (int i = 0; i < M; i++) {
                int width = points[i].x - last_x;
                int height = (remaining_area + width - 1) / width; // Correção
                interval[i] = height;
                remaining_area -= height * width;
                last_x = points[i].x;
            }

            for (int i = 0; i < M; i++) {
                for (int j = 0; j < interval[i]; j++) {
                    printf(" %d", points[i].f);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
