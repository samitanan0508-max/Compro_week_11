#include <stdio.h>

// ประกาศ Prototype
float average(int a, int b, int c) {
    // นำคะแนนทั้ง 3 วิชา มาคำนวณและส่งค่าคืนกลับ
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;
    float avg;

    printf("---[Part 2: Return Value] ---\n");
    // รับค่าใน main()
    printf("Enter Math: ");
    scanf("%d", &math);
    printf("Enter Physics: ");
    scanf("%d", &physics);
    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชัน average โดยส่งค่ะแนน 3 วิชาไปและรับผลลัพธ์มาเก็บที่ avgavg = average(math, physics, chemistry);
    avg = average(math, physics, chemistry);
    // แสดงผลคะแนนแต่ละวิชาพร้อมค่าเฉลี่ย
    printf("\nScores -> Math: %d, Physics: %d, Chemistry: %d\n", math, physics, chemistry);
    printf("Average Score: %.2f\n", avg);

    return 0;
}