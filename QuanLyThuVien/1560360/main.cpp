#include<stdio.h>
#include"DocGia.h"
#include"Sach.h"
#include<conio.h>
#include<string.h>
void main()
{
	int chucnangmenu;
	int chucnangmenucon1; /*quan li doc gia*/
	int chucnangmenucon2; /*quan li sach*/
	int chucnangmenucon5; /*thong ke co ban*/
	// thong tin du lieu doc gia.. chua duoc 100 doc gia
	int Soluong_docgia;
	int Ma_docgia[100];
	char Ten_docgia[100][30];
	char Cmnd_docgia[100][11];
	char Ngaysinh_docgia[100][11];
	int Gioitinh_docgia[100];
	char Email_docgia[100][50];
	char Diachi_docgia[100][200];
	char Ngaylapthe_docgia[100][11];
	char Ngayhethan_docgia[100][11];
	char cmndnhap[100][11]; // dung de tim thong tin doc gia qua cmnd
	// gia su khi mo cua thu vien se co 2 doc gia 
	Soluong_docgia = 2;
	// cho thong tin doc gia ma 1 la :
	Ma_docgia[0] = 1;
	strcpy_s(Ten_docgia[0], "Bui Huu Nghia ");
	strcpy_s(Cmnd_docgia[0], "321564789");
	strcpy_s(Ngaysinh_docgia[0], "12/10/1997");
	Gioitinh_docgia[0] = 1;
	strcpy_s(Email_docgia[0], "buihuunghia482@gmail.com");
	strcpy_s(Diachi_docgia[0], "An Giang");
	strcpy_s(Ngaylapthe_docgia[0], "12/10/2010");
	strcpy_s(Ngayhethan_docgia[0], "12/10/2014");
	// cho thong tin doc gia ma 2 la :
	Ma_docgia[1] = 2;
	strcpy_s(Ten_docgia[1], "Nguyen Thi Thuy Duyen ");
	strcpy_s(Cmnd_docgia[1], "321564779");
	strcpy_s(Ngaysinh_docgia[1], "10/07/1999");
	Gioitinh_docgia[1] = 0;
	strcpy_s(Email_docgia[1], "nguyenthithuyduyen@gmail.com");
	strcpy_s(Diachi_docgia[1], "An Giang");
	strcpy_s(Ngaylapthe_docgia[1], "10/07/2010");
	strcpy_s(Ngayhethan_docgia[1], "10/07/2014");
	// thong tin du lieu sach.. chua dc 1000 sach
	int Soluong_sach;
	int Ma_sach[1000];
	char Tensach_sach[1000][100];
	char Tentacgia_sach[1000][50];
	char Nhaxuatban_sach[1000][50];
	char Namxuatban_sach[1000][6];
	char Theloai_sach[1000][100];
	char Giasach_sach[1000][11];
	char Soquyensach_sach[1000][3];
	// vi du sach trong thu vien la 2 quyen
	Soluong_sach = 2;
	// sach 1 nhu sao :
	Ma_sach[0] = 1;
	strcpy_s(Tensach_sach[0], "Harry Potter ");
	strcpy_s(Tentacgia_sach[0], "J.K.Rowling");
	strcpy_s(Nhaxuatban_sach[0], "Nha xuat ban tre(phu de tieng viet)");
	strcpy_s(Namxuatban_sach[0], "2007");
	strcpy_s(Theloai_sach[0], "Gia tuong, giai doan tuoi moi lon, huyen bi, kinh di, phieu luu va lang man");
	strcpy_s(Giasach_sach[0], "500000");
	strcpy_s(Soquyensach_sach[0], "10");
	// sach thu 2 sao :
	Ma_sach[1] = 2;
	strcpy_s(Tensach_sach[1], " Doraemon ");
	strcpy_s(Tentacgia_sach[1], "Fujiko F. Fujio");
	strcpy_s(Nhaxuatban_sach[1], "Shogakukan");
	strcpy_s(Namxuatban_sach[1], "1996");
	strcpy_s(Theloai_sach[1], "Hai, Khoa hoc vien tuong");
	strcpy_s(Giasach_sach[1], "20000");
	strcpy_s(Soquyensach_sach[1], "30");
	/* hien thi cac chuc nang menu chinh*/
	printf("Chuong trinh quan li thu vien DH KHTN \n Co Cac chuc nang sau  \n");
	printf(" 1. Quan li doc gia \n");
	printf(" 2. Quan li sach \n");
	printf(" 3. Lap phieu muon sach \n");
	printf(" 4. Quan li tra sach \n");
	printf(" 5. Thong ke \n");
	printf(" 6. Thoat \n");
	printf("Moi chon chuc nang menu : ");
	scanf_s("%d", &chucnangmenu);
	if (chucnangmenu > 0 && chucnangmenu <= 6)
	{
		switch (chucnangmenu)
		{
		case 1: printf(" Chuc nang Quan li doc gia \n");
			printf(" 1. Danh sach doc gia trong thu vien \n");	/* hien thi cac chuc nang menu con cua quan li doc gia*/
			printf(" 2. Them doc gia \n");
			printf(" 3. Chinh sua thong tin doc gia  \n");
			printf(" 4. Xoa thong tin doc gia \n");
			printf(" 5. Tim kiem doc gia theo cmnd \n");
			printf(" 6. Tim kiem sach theo ho ten \n");
			printf("Moi chon Chuc nang trong Quan li doc gia : ");
			scanf_s("%d", &chucnangmenucon1);
			if (chucnangmenucon1 > 0 && chucnangmenucon1 <= 6)
			{
				switch (chucnangmenucon1)
				{
				case 1: printf(" Chuc nang xem danh sach doc gia trong thu vien \n");
					Hienthidocgia(Soluong_docgia, Ma_docgia, Ten_docgia, Cmnd_docgia, Ngaysinh_docgia, Gioitinh_docgia, Email_docgia, Diachi_docgia, Ngaylapthe_docgia, Ngayhethan_docgia);
					break;
				case 2: printf("Chuc nang Them doc gia \n");
					int vitrimoi;
					printf("Moi nhap vi tri ");
					scanf_s("%d", &vitrimoi);
					Themvaodocgia(vitrimoi, Soluong_docgia, Ma_docgia, Ten_docgia, Cmnd_docgia, Ngaysinh_docgia, Gioitinh_docgia, Email_docgia, Diachi_docgia, Ngaylapthe_docgia, Ngayhethan_docgia);
						break;
				case 3:	printf("Chuc nang Chinh sua thong tin doc gia  \n");
					break;
				case 4:	printf(" Chuc nang Xoa thong tin doc gia \n");
					int vitri; // vi tri can xoa
					printf("Moi ban chon vi tri can xoa : ");
					scanf_s("%d", &vitri);
					if (vitri > 0 && vitri <= Soluong_docgia)
					{
						printf("Thong tin doc gia se xoa nhu sao :");
						Hienthidocgiathui(vitri, Soluong_docgia, Ma_docgia, Ten_docgia, Cmnd_docgia, Ngaysinh_docgia, Gioitinh_docgia, Email_docgia, Diachi_docgia, Ngaylapthe_docgia, Ngayhethan_docgia);
						printf("Ban muon xoa chu \n 1.co\n 2.khong\n");
						int r; // chon xoa 2 khong
						scanf_s("%d", &r);
						if (r == 1)
						{
							Xoadocgia(vitri, Soluong_docgia, Ma_docgia, Ten_docgia, Cmnd_docgia, Ngaysinh_docgia, Gioitinh_docgia, Email_docgia, Diachi_docgia, Ngaylapthe_docgia, Ngayhethan_docgia);
							printf("Ban da xoa xong\n");
						}
						else
							printf("Ban da khong chon xoa : ");
					}
					else
						printf("Vi tri ban chon khong co ");
					break;
				case 5: printf(" Chuc nang Tim kiem doc gia theo cmnd \n");
					break;
				case 6: printf(" Chuc nang Tim kiem sach theo ho ten \n");
					break;
				}
			}
			else
				printf("chuc nang ban chon khong co moi ban chon lai neu can");
			break;
		case 2: printf(" Chuc nang Quan li sach \n");
			printf(" 1. Danh sach cac sach trong thu vien \n");	/* hien thi cac chuc nang menu con cua quan li sach*/
			printf(" 2. Them sach \n");
			printf(" 3. Chinh sua thong tin mot quyen sach \n");
			printf(" 4. Xoa thong tin sach \n");
			printf(" 5. Tim kiem sach theo ISBN \n");
			printf(" 6. Tim kiem sach theo ten sach \n");
			printf("Moi chon Chuc nang trong Quan li sach : ");
			scanf_s("%d", &chucnangmenucon2);
			if (chucnangmenucon2>0 && chucnangmenucon2<=6)
			{
				switch (chucnangmenucon2)
				{
				case 1: printf(" Chuc nang xem danh sach cac sach trong thu vien \n");
					Hienthisach(Soluong_sach, Ma_sach, Tensach_sach, Tentacgia_sach, Nhaxuatban_sach, Namxuatban_sach, Theloai_sach, Giasach_sach, Soquyensach_sach);
					break;
				case 2:	printf(" Chuc nang Them sach \n");
					int vitrisachmoi;
					printf("Nhap vi tri moi : ");
					scanf_s("%d", &vitrisachmoi);
					Themsach(vitrisachmoi, Soluong_sach, Ma_sach, Tensach_sach, Tentacgia_sach, Nhaxuatban_sach, Namxuatban_sach, Theloai_sach, Giasach_sach, Soquyensach_sach);
					break;
				case 3: printf("Chuc nang Chinh sua thong tin mot quyen sach \n");
					break;
				case 4:	printf(" Chuc nang Xoa thong tin sach \n");
					int vitrisach; // chon vi tri xem truoc khj xoa
					printf("Moi chon vi tri can xem thong tin sach ");
					scanf_s("%d", &vitrisach);
					Hienthisachthui(vitrisach, Soluong_sach, Ma_sach, Tensach_sach, Tentacgia_sach, Nhaxuatban_sach, Namxuatban_sach, Theloai_sach, Giasach_sach, Soquyensach_sach);
					printf("Moi ban chon lai lan nua \n 1.co \n 2.khong ");
					int s; // xac nhan xoa 2 khong
					scanf_s("%d", &s);
					if (s == 1)
					{
						Xoasach(vitrisach, Soluong_sach, Ma_sach, Tensach_sach, Tentacgia_sach, Nhaxuatban_sach, Namxuatban_sach, Theloai_sach, Giasach_sach, Soquyensach_sach);
					}
					break;
				case 5:	printf(" Chuc nang Tim kiem sach theo ISBN \n");
					break;
				case 6: printf(" Chuc nang Tim kiem sach theo ten sach \n");
					break;
				}
			}
			else
				printf("chuc nang ban chon khong co moi ban chon lai neu can");
			break;
		case 3: printf(" Chuc nang lap phieu muon sach \n");
			int ma, soluong;//ma doc gia, so luong sach muon them
			printf("nhap so luong sach can muon :");
			scanf_s("%d", &soluong);
			printf("nhap ma doc gia :");
			scanf_s("%d", &ma);
			char ngaymuon[100][11];
			char ngaytradukien[100][11];
			char ngaytrathucte[100][11];
			Phieumuon(soluong ,ma, Ma_docgia, Ma_sach, ngaymuon, ngaytradukien, ngaytrathucte);
			break;
		case 4: printf(" Chuc nang lap phieu tra sach \n"); 
			int madocgia, soluongtra;//ma doc gia, so luong sach muon them
			printf("nhap so luong sach tra :");
			scanf_s("%d", &soluongtra);
			printf("nhap ma doc gia :");
			scanf_s("%d", &madocgia);
			char ngaymuonsaxh[100][11];
			char ngaytradukienla[100][11];
			char ngaytrathuctela[100][11];
			Phieutra(soluong, madocgia,Ma_docgia, Ma_sach, ngaymuon, ngaytradukienla, ngaytrathuctela);
			// ktra sach koa muon qua han
			int ngaymuonsach, thangmuonsach, nammuonsach;
			int ngaytrathuc, thangtrathucte, namtrathuc;
			printf("Ban co mat sach khong : \n 1.co \n 2.khong ");
			int s; // chon mat 2 khong
			scanf_s("%d", &s);
			int soluongsachmat, giasach;
			if (s == 1)
			{
				printf("so luong sach mat la : ");
				scanf_s("%d", &soluongsachmat);
				int tien, s = 0;
				for (int i = 0; i < soluongsachmat; i++)
				{
					printf("nhap gia sach thu  %d : ", i + 1);
					scanf_s("%d", &giasach);
					s = s + giasach;
				}
				tien = s * 2;
				printf("tien phai tra : %d\n", tien);
				_getch();
			}
			else
			{
				printf("Nhap ngay muon : ");
				scanf_s("%d", &ngaymuonsach);
				printf("Nhap thang muon sach : ");
				scanf_s("%d", &thangmuonsach);
				printf("Nhap nam muon : ");
				scanf_s("%d", &nammuonsach);
				printf("Nhap ngay tra thuc te : ");
				scanf_s("%d", &ngaytrathuc);
				printf("Nhap thang tra thuc te : ");
				scanf_s("%d", &thangtrathucte);
				printf("Nhap nam tra thuc te : ");
				scanf_s("%d", &namtrathuc);
				ktrasachcoquahankhong(ngaymuonsach, thangmuonsach, nammuonsach, ngaytrathuc, thangtrathucte, namtrathuc);
			}
			break;
		case 5: printf("Chuc nang cac thong ke co ban  \n");
			printf(" 1. Thong ke so luong sach trong thu vien \n");	/* hien thi cac chuc nang menu con cua thong ke co ban*/
			printf(" 2. Thong ke so luong sach theo the loai \n");
			printf(" 3. Thong ke so luong doc gia \n");
			printf(" 4. Thong ke so luong doc gia theo gioi tinh \n");
			printf(" 5. Thong ke so sach dang duoc muon \n");
			printf(" 6. Thong ke danh sach doc gia bi tre hen \n");
			printf("Moi chon Chuc nang trong Thong ke co ban : ");
			scanf_s("%d", &chucnangmenucon5);
			if (chucnangmenucon5 > 0 && chucnangmenucon5 <= 6)
			{
				switch (chucnangmenucon5)
				{
				case 1: printf(" Chuc nang Thong ke so luong sach trong thu vien \n");
					break;
				case 2: printf(" Chuc nang Thong ke so luong sach theo the loai \n");
					break;
				case 3:	printf(" Chuc nang Thong ke so luong doc gia \n");
					break;
				case 4: printf(" Chuc nang Thong ke so luong doc gia theo gioi tinh \n");
					break;
				case 5: printf("Chuc nang Thong ke so sach dang duoc muon \n");
					break;
				case 6:	printf(" Chuc nang Thong ke danh sach doc gia bi tre hen \n");
					break;
				}
			}
			else
				printf("chuc nang ban chon khong co moi ban chon lai neu can\n");
			break;
		case 6: break;
		} 		
	}
	else
	{
		printf("chuc nang ban chon khong co moi ban nhap lai neu can\n");
	}
}
