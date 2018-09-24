#include"DocGia.h"
//hien thi danh sach doc gia
void Hienthidocgia(int n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11])
{
		printf("Danh sach doc gia %d\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("Thanh vien thu %d ", i + 1);
		printf("Ma  : %d\n", ma[i]);
		printf("Ten : %s\n", ten[i]);
		printf("Cmnd : %s\n", cmnd[i]);
		printf("Ngay sinh %s \n: ", ngaysinh[i]);
		if (gioitinh[i] == 1)
			printf(" Gioi tinh : nam \n");
		else
			printf("Gioi tinh : nu \n ");
		printf("Email : %s\n", email[i]);
		printf("Dia chi : %s\n", diachi[i]);
		printf("Ngay lap the : %s\n", ngaylapthe[i]);
		printf("Ngay hit han : %s\n", ngayhithan[i]);
	}
}
// xoa doc gia
void Xoadocgia(int k, int &n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11])
{	
	for (int i = 0; i < n - 1; i++)
	{
		ma[i] = ma[i + 1];
		strcpy_s(ten[i], ten[i + 1]);
		strcpy_s(cmnd[i], cmnd[i + 1]);
		strcpy_s(ngaysinh[i], ngaysinh[i + 1]);
		gioitinh[i] = gioitinh[i + 1];
		strcpy_s(email[i], email[i + 1]);
		strcpy_s(diachi[i], diachi[i + 1]);
		strcpy_s(ngaylapthe[i], ngaylapthe[i + 1]);
		strcpy_s(ngayhithan[i], ngayhithan[i + 1]);
	}
	n = n - 1;
}
// hien thi doc gia dc chon 
void Hienthidocgiathui(int i, int n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11])
{	// int i : vi tri doc gia chon
	printf("Danh sach doc gia %d\n", n);
		printf("Thanh vien thu ", i + 1);
		printf("Ma  : %d\n", ma[i]);
		printf("Ten : %s\n", ten[i]);
		printf("Cmnd : %s\n", cmnd[i]);
		printf("Ngay sinh %s \n: ", ngaysinh[i]);
		if (gioitinh[i] == 1)
			printf(" Gioi tinh : nam \n");
		else
			printf("Gioi tinh : nu \n ");
		printf("Email : %s\n", email[i]);
		printf("Dia chi : %s\n", diachi[i]);
		printf("Ngay lap the : %s\n", ngaylapthe[i]);
		printf("Ngay hit han : %s\n", ngayhithan[i]);
}
// them doc gia
void Themvaodocgia(int i, int &n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11])
{	
	for (int i = 0; i < n; i++)
	{
		ma[i] = ma[i + 1];
		fflush(stdin);
		printf("nhap ten : ");
		gets_s(ten[i]);
		fflush(stdin);
		printf("nhap cmnd : ");
		gets_s(cmnd[i]);
		fflush(stdin);
		printf("ngay sinh : ");
		gets_s(ngaysinh[i]);
		fflush(stdin);
		printf("NHap gioi tinh : ");
		scanf_s("%d", &gioitinh[i]);
		fflush(stdin);
		printf(" nhap email : ");
		gets_s(email[i]);
		fflush(stdin);
		printf(" Nhap dia chi : ");
		gets_s(diachi[i]);
		fflush(stdin);
		printf("Nhap ngay lap the : ");
		gets_s(ngaylapthe[i]);
		fflush(stdin);
		printf("Nhap ngay hit han : ");
		gets_s(ngayhithan[i]);
		fflush(stdin);
	}
		n = n + 1;
}		

