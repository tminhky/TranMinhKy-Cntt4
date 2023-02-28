#include<stdio.h>
#include<conio.h>

struct Diem
{
	float x;
	float y;
};

typedef struct Diem DIEM;

void HamNhap(DIEM &);
void HamXuat(DIEM);
void HamNhap(DIEM &d)
{
	float toado;
	printf("\nNhap x: ");
	scanf("%f", &toado);
	d.x = toado;

	printf("\nNhap y: ");
	scanf("%f", &toado);
	d.y = toado;
}

void HamXuat(DIEM d)
{
	printf("(%f, %f)", d.x, d.y);
}

int main()
{
	DIEM d;
	HamNhap(d);
	HamXuat(d);

	getch();
	return 0;
}

