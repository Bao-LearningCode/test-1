#include <stdio.h>

int main()
{
    int a,b=0;
    do//điều kiện để giá trị nhập vào lớn hơn 0
    {
        printf("nhap vao n : ");
        scanf("%d",&a);
        if (a<1)//thông báo lỗi
        {
            printf("gia tri nhap vao can lon hon 0!\n\n");
        }
    } while (a<1);
    printf("\ngia tri 1->%d la : ",a);
    for (int i = 1; i <= a; i++)//in các giá trị 1->n
    {
        b+=i;//cộng dồng tổng
        printf("%d ",i);
    }
    printf("\ngia tri tong tu 1->%d la : %d",a,b);//in giá trị tổng từ biến b 
    printf("\n");
    //xong
    /*
    Đúng yêu cầu, không lỗi logic	4 / 4
    Kiểm tra điều kiện đầu vào	2 / 2
    Trình bày, chú thích, format	2 / 2
    Xuất kết quả dễ đọc, rõ ràng	2 / 2
    Tổng cộng	10 / 10 
    */
    
    return 0;
}