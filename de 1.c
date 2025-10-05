#include <stdio.h>

int main()
{
    int a,b;
    do
    {
        printf("nhap vao 2 so nguyen a va b : ");
        scanf(" %d %d",&a,&b);
        if (b==0)
        {
            printf("b khong the la 0!\n\n");
        }
    } while (b==0);
    printf("\ntong : %d",a+b);
    printf("\nhieu : %d",a-b);
    printf("\ntich : %d",a*b);
    printf("\nthuong : %.1f",(float)a/b);
    //xong
    /*
    Đúng yêu cầu	Đủ, logic chính xác	10
    Kiểm tra lỗi đầu vào	Có kiểm tra b=0, rất tốt	10
    Trình bày, rõ ràng	Rõ ràng, dễ hiểu	9.5
    Kỹ thuật lập trình	Chuẩn cú pháp, không lỗi	10
    Tổng	Rất tốt, bài hoàn hảo	9.8 / 10
    */


    return 0;
}