#include<stdio.h>
#include<conio.h>

struct Diem
{
	float x;
	float y;
};

typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);
void NhapDiem(DIEM &d)
{
	float toado;
	printf("\nNhap x: ");
	scanf("%f", &toado);
	d.x = toado;

	printf("\nNhap y: ");
	scanf("%f", &toado);
	d.y = toado;
}

void XuatDiem(DIEM d)
{
	printf("(%f, %f)", d.x, d.y);
}

int main()
{
	DIEM d;
	NhapDiem(d);
	XuatDiem(d);

	getch();
	return 0;
}
