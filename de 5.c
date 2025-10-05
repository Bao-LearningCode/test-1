#include <stdio.h>

int main()
{
    int a;
    do
    {
        printf("nhap vao n>0 : ");
        scanf("%d",&a);
        if (a<1)
        {
            printf("gia tri nhap vao can lon hon 0!\n\n");
        }
    } while (a<1);
    printf("\ncac so tu 1->n la : ");
    for (int i = 1; i <= a; i++)//chú ý đơn vị chỗ này
    {
        printf("%d",i);
    }
    printf("\n");
    //xong
    /*
    Đúng yêu cầu	3 / 4(trước khi sửa làm sai 1 đơn vị,chú ý thêm)
    Cấu trúc vòng lặp	3 / 3
    Trình bày, chú thích	2 / 2
    Xuất kết quả đẹp, dễ đọc	1 / 1
    Tổng	9 / 10
    */

    return 0;
}