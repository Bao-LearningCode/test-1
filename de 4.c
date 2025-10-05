#include <stdio.h>

int main()
{
    int a;
    do//nhận diện điểm sinh viên không thể âm
    {
        printf("nhap diem cua sinh vien : ");
        scanf("%d",&a);
        if (a<0)//thông báo lỗi đến người dùng 
        {
            printf("diem snh vien khong the am dau,thua giang vien/sinh vien!\n\n");
        }
    } while (a<0);
    printf("\nsinh vien thuoc loai : ");//giúp trình bay đẹp hơn
    if (a>=8)
    {
        printf("gioi!");
    }
    else if (a>=6.5&&a<8)
    {
        printf("kha!");
    }
    else if (a>=5&&a<6.5)
    {
        printf("trung binh!");
    }
    else
    {
        printf("yeu,can than bi ban khoi server dai hoc!");
    }
    //xong
    /*
    Đúng yêu cầu & logic	10 / 10
    Kiểm tra đầu vào	10 / 10
    Trình bày & comment	9.8 / 10
    Cách xuất kết quả	9.5 / 10
    Hiểu và dùng cấu trúc điều kiện	10 / 10
    Tổng cộng	9.86 / 10
    */
    return 0;
}