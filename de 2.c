#include <stdio.h>

int main()
{
    float a,pi=3.14;
    do//thêm vòng lặp và điều kiện vì bán kính không thể =0 hoặc âm.
    {
        printf("nhap vao ban kinh r : ");
        scanf(" %f",&a);
        if (a<=0)//dòng này sẽ giúp thông báo người dùng nhập sai thông tin gì.
        {
            printf("ban kinh khong the am va khac 0!\n\n");
        }
    } while (a<=0);
    printf("\nchu vi : %.2f",(float)2*pi*a);
    printf("\ndien tich : %.2f",(float)pi*a*a);
    //xong
    /*
    Đúng logic, thuật toán	10 / 10
    Trình bày, format code	9.5 / 10
    Hiểu và giải thích bằng comment	10 / 10
    Chuẩn cú pháp, an toàn nhập liệu	9.8 / 10
    Tổng cộng	9.8 / 10
    */

    return 0;
}