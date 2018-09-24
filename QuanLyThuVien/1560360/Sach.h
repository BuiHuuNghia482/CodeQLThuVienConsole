#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"DocGia.h"
// hien thi danh sach sach trong thu vien 
void Hienthisach(int n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3]);
//hien thi thong tin sach thu i
void Hienthisachthui(int i, int n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3]);
// xoa sach dc chon
void Xoasach(int k, int &n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3]);
// them sach
void Themsach(int m, int &n, int masach[], char tensach[][100], char tentacgia[][50], char nhaxuatban[][50], char namxuatban[][6], char theloai[][100], char giasach[][11], char soquyensach[][3]);
// phieu muon sach
void Phieumuon(int e, int &n, int ma[], int masach[], char ngaymuon[][11], char ngaytradukien[][11], char ngaytrathucte[][11]);
//tinh nam nhuan k de tinh tien khi tra wa han
int ktranamnhuan(int n);
// phieu tra
void Phieutra(int e, int &n, int ma[], int masach[], char ngaymuon[][11], char ngaytradukien[][11], char ngaytrathucte[][11]);
// ktra sach koa qua han k
void ktrasachcoquahankhong(int ngaymuonsach, int thangmuonsach, int nammuonsach, int ngaytrathuc, int thangtrathucte, int namtrathuc);
