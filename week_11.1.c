#include <stdio.h>

// ประกาศ Prototype

void inputAndShow() {
    int math, physics, chemistry;

    // รับค่าคะแนน 3 วิชา
    printf("--- [Part 1: No Return] ---\n");
    printf("Enter Math: ");
    scanf("%d", &math);
    printf("Enter Physics: ");
    scanf("%d", &physics);
    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // แสดงผลคะแนน
    printf("Scores -> Math: %d, Physics: %d, Chemistry: %d\n\n", math, physics, chemistry);
}

int main() {
    inputAndShow();
    return 0;
}