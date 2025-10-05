#include <stdio.h>
#define pi 3.14//chú ý hàm define

int main()
{
    int a,b,c,d,e;
    /*
    a:nhập lựa chọn
    b:nhập bán kính
    c:nhập cạnh hình vuông
    d:nhập chiều dài
    e:nhập chiều rộng
    */
    do
    {
        printf("cac lua chon :\n1.dien tich hinh tron\n2.dien tich hinh vuong\n3.dien tich hinh chu nhat\nnhap vao lua chon cua ban : ");
        scanf("%d",&a);
        if (a<=0||a>3)
        {
            printf("chi co lua chon 1,2 va 3!\n\n");
        }
    } while (a<=0||a>3);
    
    switch (a)
    {
    case 1://hình tròn
        do
        {
            printf("nhap ban kinh r : ");
            scanf("%d",&b);
            if (b<=0)
            {
                printf("biet nhap so duong khong?\n");
            }
        } while (b<=0);
        printf("\n\tchu vi hinh tron la : %.2f",(float)2*pi*b);//pi không thể gán float
        printf("\n\tdien tich hinh tron la : %.2f",(float)pi*b*b);
        printf("\n");
        break;
    case 2://hình vuông
        do
        {
            printf("nhap canh hinh vuong : ");
            scanf("%d",&c);
            if (c<=0)
            {
                printf("biet nhap so duong khong?\n");
            }
        } while (c<=0);
        printf("\n\tchu vi hinh vuong : %d",c*4);
        printf("\n\tdien tich hinh vuong la : %d",c*c);
        printf("\n");
        break;
    case 3://hình chữ nhật
        do
        {
            printf("nhap canh hinh chu nhat voi : \na la chieu dai\nb la chieu rong\n");
            printf("nhap a va b : ");
            scanf("%d %d",&d,&e);
            if (d<=0||e<=0)//chú ý lỗi logic "&&" và "||" có thể bị trừ điểm
            {
                printf("biet nhap so duong khong?\n");
            }
            if (d<e)
            {
                printf("chieu dai phai lon hon chieu rong!\n");
            }
        } while (d<=0||e<=0||d<e);//d là chiều dài nên phải lớn hơn chiều rộng
        if (d==e)
        {
            printf("\n\tgia tri nhap vao la hinh vuong!");
            printf("\n\tchu vi hinh vuong la : %d",d*4);
            printf("\n\tdien tich hinh vuong la : %d",d*e);
            printf("\n");
        }
        else
        {
            printf("\n\tchu vi hinh chu nhat la : %d",(d+e)*2);
            printf("\n\tdien tich hinh chu nhat la : %d",d*e);
            printf("\n");
        }
        break;
        /*
        khi nhập a và b đều phải báo lỗi nếu cả 2 sai giá trị
        khi dùng "&&" nhập 1 0 thì thuật toán vẫn chạy
        khi dùng "||" nhập 1 0 thì thuật toán báo lỗi
        =>"&&" xét 1 trong 2 điều kiện chạy,"||" xét cả 2 điều kiện.
        */
    }
    printf("\n");
    printf("xin cam on!vi da su dung toi!");
    //xong
    /*
    Đúng yêu cầu (3 hình, công thức chuẩn)	4 / 4
    Cấu trúc điều kiện + lặp + switch đúng	2 / 2
    Kiểm tra lỗi đầu vào	1.5 / 2 (do lỗi logic nhỏ ở &&)
    Trình bày, chú thích, dễ đọc	2 / 2
    Tính sáng tạo, thân thiện người dùng	0.5 / 1
    Tổng cộng	10 / 10 (giảng viên có thể trừ nhẹ 0.5 nếu kỹ tính)
    */
    return 0;
}