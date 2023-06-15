#include<stdio.h>
struct point{
 int x;
 int y;
};

void input(int &n, struct point p[]) {
 printf("Nhap so diem: ");
 scanf("%d",&n);
 for (int i = 0; i < n; i++) {
  printf("Nhap diem thu %d (Nhap x truoc y sau): ",i);
  scanf("%d%d",&p[i].x,&p[i].y);
 }
}

int check (int n, struct point p[]) {
 int j,k = 0, k1 = 0;
 for (int i = 0; i < n-1; i++) { //chi chay toi diem n - 2
  j = 0;
  // TH1: Xb = Xa
  if (p[i].x == p[i+1].x) {
   k = p[i+2].x; // Lay 1 diem lam chuan, xem dt NAM TREN hay NAM DUOI.
   
   if (i == n-2) k = p[0].x; // Neu i = n-2, khong the lay diem i + 2 lam chuan vi mang chay tu 0-> n-1, nen lay diem 0 lam chuan.
   
   while (j < n) { // Kiem tra tung diem co cung 1 nua mp voi ptdt khong
    if (j == i || j == i + 1 || j == i + 2) {// Tranh viec vong lap kiem tra cac diem thuoc dt va diem lam chuan.
     j++;
     continue;
    } else if (i == n-2 && (j == i || j == i + 1 || j == 0)) {
     j++;
     continue;
    }
    if (k < p[i].x) { //NAM DUOI => cac diem con lai cung phai NAM DUOI
     if (p[j].x > p[i].x) // Neu NAM TREN tra ve "KHONG PHAI DA GIAC"
      return 0;
     else if (p[j].x == p[i].x) // 3 diem thang hang
      return -1;
    }
    j++;
   }

  } // HET TRUONG HOP 1.
  
  //TH2: Yb = Ya
  if (p[i].y == p[i+1].y) {
   k = p[i+2].y; // Lay 1 diem lam chuan, xem dt NAM TRAI hay NAM PHAI.
   
   if (i == n-2) k = p[0].y; // Neu i = n-2, khong the lay diem i + 2 lam chuan vi mang chay tu 0-> n-1, nen lay diem 0 lam chuan.
   
   while (j < n) { // Kiem tra tung diem co cung 1 nua mp voi ptdt khong
    if (j == i || j == i + 1 || j == i + 2) {// Tranh viec vong lap kiem tra cac diem thuoc dt va diem lam chuan.
     j++;
     continue;
    } else if (i == n-2 && (j == i || j == i + 1 || j == 0)) {
     j++;
     continue;
    }
    if (k < p[i].y) { //NAM TRAI => cac diem con lai cung phai NAM TRAI
     if (p[j].y > p[i].y) // Neu NAM PHAI tra ve "KHONG PHAI DA GIAC"
      return 0;
     else if (p[j].y == p[i].y) // 3 diem thang hang
      return -1;
    }
    j++;
   }
  } // HET TRUONG HOP 2.
  
  //TH3: Xa != Xb and Ya != Yb
  if (p[i].x != p[i+1].x && p[i].y != p[i+1].y) {
   k = (p[i+2].x - p[i].x)*(p[i+1].y - p[i].y) - (p[i+2].y - p[i].y)*(p[i+1].x - p[i].x); // (X - Xa)(Yb - Ya) = (Y - Ya)(Xb - Xa)
   if (i == n-2)  
    k = (p[0].x - p[i].x)*(p[i+1].y - p[i].y) - (p[0].y - p[i].y)*(p[i+1].x - p[i].x);
   
   while (j < n) {
    if (i == n-2 && (j == i || j == i + 1 || j == 0)) {// Tranh viec vong lap kiem tra cac diem thuoc dt va diem lam chuan.
     j++;
     continue;
    } else if (j == i || j == i + 1 || j == i + 2 ) {
     j++;
     continue;
    }
    
    if (k < 0) {
     k1 = (p[j].x - p[i].x)*(p[i+1].y - p[i].y) - (p[j].y - p[i].y)*(p[i+1].x - p[i].x);
     if (k1 > 0) 
      return 0; //KHONG PHAI DA GIAC LOI
     else if (k1 == 0) 
      return -1; // 3 diem thang hang
    }
    else if (k > 0) {
     k1 = (p[j].x - p[i].x)*(p[i+1].y - p[i].y) - (p[j].y - p[i].y)*(p[i+1].x - p[i].x);
     if (k1 < 0)
     return 0; //KHONG PHAI DA GIAC LOI
     else if (k1 == 0) 
      return -1; // 3 diem thang hang
    }
    else return -1;
    j++;
   }
  } // HET TRUONG HOP 3.
 }
 return 1;
}
