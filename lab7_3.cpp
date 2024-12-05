#include<iostream>
using namespace std;

char before(char x) {
    // ตรวจสอบว่า x เป็นอักษรตัวใหญ่ระหว่าง A-Z หรือไม่
    if (x >= 'A' && x <= 'Z') {
        // ถ้าเป็น 'A' ให้คืนค่า 'Z'
        if (x == 'A') {
            return 'Z';
        }
        // ถ้าไม่ใช่ 'A' ให้คืนค่าตัวอักษรที่อยู่ก่อนหน้านั้น
        return x - 1;
    }
    // ถ้า x ไม่ใช่ตัวอักษร A-Z ให้คืนค่า '0'
    return '0';
}
