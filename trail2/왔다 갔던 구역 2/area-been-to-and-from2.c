#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int visited[2005] = {0};
    int OFFSET = 1000;
    int cur = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        scanf("%d %c", &x, &dir);

        if (dir == 'R') {
            for (int j = cur; j < cur + x; j++) {
                visited[j]++;
            }
            cur += x;
        } 
        else if (dir == 'L') {
            for (int j = cur - 1; j >= cur - x; j--) {
                visited[j]++;
            }
            cur -= x;
        }
    }

    int answer = 0;

    for (int i = 0; i < 2005; i++) {
        if (visited[i] >= 2) {
            answer++;
        }
    }

    printf("%d", answer);

    return 0;
}