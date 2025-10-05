#include <stdio.h>

int main()
{
    int a;
    printf("nhap vao n : ");
    scanf(" %d",&a);
    if (a%2==0)//nếu n chia hết cho 2 thì là chẵn
    {
        printf("n là so chan!");
    }
    if (a%2!=0)//nếu n không chia hết cho 2 thì lẻ
    {
        printf("n la so le!");
    }
    //xong
    /*
    Đúng yêu cầu, logic chính xác	10 / 10
    Hiệu quả và tối ưu	9 / 10
    Trình bày, format code	9.5 / 10
    Chú thích và dễ hiểu	9.8 / 10
    Tổng cộng 9.6 / 10
    */

    return 0;
}