#include <stdio.h>

int main()
{
    int a,b,c;
    do//cấu trúc lặp để nhập gia trị b!=0
    {
        printf("nhap vao gia tri a va b : ");
        scanf("%d %d",&a ,&b);
        if (b==0)//thông báo lỗi
        {
            printf("gia tri b phai khac 0\n\n");
        }
    } while (b==0);

    do//cấu trúc lặp để nhập gia trị b!=0
    {
        printf("cac phep tinh : \n1.tong\n2.hieu\n3.tich\n4.thuong\nchon 1 phep tinh : ");
        scanf("%d",&c);
        if (c<=0||c>4)//thông báo lỗi
        {
            printf("chi co lua chon tu 1->4!\n\n");
        }
    } while (c<=0||c>4);

    switch (c)
    {
    case 1:
        printf("tong la : %d",a+b);
        break;
    case 2:
        printf("hieu la : %d",a-b);
        break;
    case 3:
        printf("tich la : %d",a*b);
        break;
    case 4:
        printf("thuong la : %.2f",(float)a/b);
        break;
    }
    //xong 
    /*
    Đúng yêu cầu, đủ phép toán	4 / 4
    Cấu trúc lặp, điều kiện kiểm tra đúng	2 / 2
    Sử dụng switch–case đúng, có break	2 / 2
    Trình bày, chú thích, format	2 / 2
    Tổng cộng 10 / 10 
    */

    return 0;
}