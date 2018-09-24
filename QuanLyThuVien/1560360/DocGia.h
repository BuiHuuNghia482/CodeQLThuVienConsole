#include<stdio.h>
#include<string.h>
#include<conio.h>
// chuc nang hien thi doc gia
void Hienthidocgia(int n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11]);
// xoa doc gia 
void Xoadocgia(int k, int &n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11]);
// hien thi doc gia thu i la
void Hienthidocgiathui(int i, int n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11]);
//them vao vi tri
void Themvaodocgia(int i, int &n, int ma[], char ten[][30], char cmnd[][11], char ngaysinh[][11], int gioitinh[], char email[][50], char diachi[][200], char ngaylapthe[][11], char ngayhithan[][11]);
