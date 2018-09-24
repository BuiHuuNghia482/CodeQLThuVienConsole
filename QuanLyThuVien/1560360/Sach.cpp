#include"Sach.h"
void Hienthisach(int n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3])
{
		printf("Danh sach sach trong thu vien %d\n : ", n);
	for (int i = 0; i < n; i++)
	{
		printf("Sach thu : %d\n ", i + 1);
		printf("Ma  : %d\n", masach[i]);
		printf("Ten sach : %s\n", tensach[i]);
		printf("Ten tac gia : %s\n", tentacgia[i]);
		printf("Nha xuat ban : %s\n ", nhaxuatban[i]);
		printf("The loai : %s\n", theloai[i]);
		printf("Gia sach : %s\n", giasach[i]);
		printf("So quyen sach : %s\n", soquyensach[i]);
	}
}
// hien thi thong tin sach duoc chon
void Hienthisachthui(int i, int n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3])
{
	printf("Sach thu : %d\n ", i + 1);
	printf("Ma  : %d\n", masach[i]);
	printf("Ten sach : %s\n", tensach[i]);
	printf("Ten tac gia : %s\n", tentacgia[i]);
	printf("Nha xuat ban : %s\n ", nhaxuatban[i]);
	printf("The loai : %s\n", theloai[i]);
	printf("Gia sach : %s\n", giasach[i]);
	printf("So quyen sach : %s\n", soquyensach[i]);
}
// xoa sach duoc chon
void Xoasach(int k, int &n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3])
{
	for (int i = 0; i < n - 1; i++)
	{
		masach[i] = masach[i + 1];
		strcpy_s(tensach[i], tensach[i+1]);
		strcpy_s(tentacgia[0],tentacgia[i+1]);
		strcpy_s(nhaxuatban[0], nhaxuatban[i+1]);
		strcpy_s(namxuatban[0], namxuatban[i+1]);
		strcpy_s(theloai[0], theloai[i+1]);
		strcpy_s(giasach[i], giasach[i+1]);
		strcpy_s(soquyensach[i], soquyensach[i+1]);
	}
}
// them sach
void Themsach(int m, int &n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3])
{
	for (int i = 0; i < n; i++)
	{
		masach[i] = masach[i + 1];
		fflush(stdin);
		printf("nhap ten sach : ");
		gets_s(tensach[i]);
		fflush(stdin);
		printf("nhap ten tac gia : ");
		gets_s(tentacgia[i]);
		fflush(stdin);
		printf(" nha xuat ban : ");
		gets_s(nhaxuatban[i]);
		fflush(stdin);
		printf(" nam xuat ban : ");
		gets_s(namxuatban[i]);
		fflush(stdin);
		printf(" the loai : ");
		gets_s(theloai[i]);
		fflush(stdin);
		printf(" gia sach: ");
		gets_s(giasach[i]);
		fflush(stdin);
		printf(" So quyen sach: ");
		gets_s(soquyensach[i]);
		fflush(stdin);
	}
	n = n + 1;
}
//tinh nam nhuan k de tinh tien khi tra wa han
int ktranamnhuan(int n)
{
	if (n % 4 != 0)
	{
		return 0;
	}
	else if (n % 400 == 0)
	{
		return 1;
	}
	else if (n % 100 == 0)
	{
		return 0;
	}
	else {
		return 1;
	}
}
// phieu muon sach
void Phieumuon(int e, int &n, int ma[], int masach[], char ngaymuon[][11], char ngaytradukien[][11], char ngaytrathucte[][11])
{
	for (int i = 0; i < e; i++)
	{
		printf("moi nhap ma sach thu %d : ", i+1);
		scanf_s("%d", &masach);
		fflush(stdin);
		printf("Moi nhap ngay muon : ");
		gets_s(ngaymuon[i]);
		fflush(stdin);
		printf("ngay tra du kien  : ");
		gets_s(ngaytradukien[i]);
		fflush(stdin);
		printf("ngay tra thuc te : ");
		gets_s(ngaytrathucte[i]);
		fflush(stdin);
	}
}
//phieu tra 
void Phieutra(int e, int &n, int ma[], int masach[], char ngaymuon[][11], char ngaytradukien[][11], char ngaytrathucte[][11])
{
	for (int i = 0; i < e; i++)
	{
		printf("moi nhap ma sach thu %d : ", i + 1);
		scanf_s("%d", &masach);
		fflush(stdin);
		printf("Moi nhap ngay muon : ");
		gets_s(ngaymuon[i]);
		fflush(stdin);
		printf("ngay tra du kien  : ");
		gets_s(ngaytradukien[i]);
		fflush(stdin);
		printf("ngay tra thuc te : ");
		gets_s(ngaytrathucte[i]);
		fflush(stdin);
	}
}
// ktra sach koa muon qua han k 
void ktrasachcoquahankhong(int ngaymuonsach, int thangmuonsach, int nammuonsach, int ngaytrathuc, int thangtrathucte, int namtrathuc)
{
	int tien; // khi tra wa han
	int ngay; // co muon wa han k 
	int k = thangmuonsach; // khoi tao thang =0
		if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12)
		{
			ngay = 31;
		}
		if (k == 4 || k == 6 || k == 9 || k == 11)
		{
			ngay = 30;
		}
		if (k == 2 && ktranamnhuan(nammuonsach) == 1)
		{
			ngay = 29;
		}
		if (k == 2 && ktranamnhuan(nammuonsach) == 0)
		{
			ngay = 28;
		}
	int a = ngay - ngaymuonsach;
	int thang2 = 0, sothang = 0, songay = 0;
	int m = thangmuonsach + 1;
	while (m < thangtrathucte)
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			songay = songay + 31;
		}
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			sothang = sothang + 30;
		}
		if (m == 2 && ktranamnhuan(namtrathuc) == 1)
		{
			thang2 = thang2 + 29;
		}
		if (m == 2 && ktranamnhuan(namtrathuc) == 0)
		{
			thang2 = thang2 + 28;
		}
		m = m + 1;
	}
	ngay = songay + sothang + thang2 + a + ngaytrathuc;
	if (ngay > 7)
	{
		tien = 5000 * ngay;
		printf("tra tien : %d\n", tien);
	}
	if (ngay <= 7)
	{
		printf("khong wa han : ");
	}
}
