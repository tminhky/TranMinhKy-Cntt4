#include<stdio.h>
#include<conio.h>

struct HonSo
{
	int tu;
	int mau;
	int nguyen;
};
typedef struct HonSo HONSO;

void HamNhap(HONSO &);
void HamXuat(HONSO);

void HamNhap(HONSO &hso)
{
	printf("\nNhap so nguyen: ");
	scanf("%d", &hso.nguyen);

	printf("\nNhap tu so: ");
	scanf("%d", &hso.tu);

	printf("\nNhap mau so: ");
	scanf("%d", &hso.mau);
}

void HamXuat(HONSO hso)
{
	printf("%d(%d/%d)", hso.nguyen, hso.tu, hso.mau);
}

int main()
{
	HONSO hso;
	HamNhap(hso);
	HamXuat(hso);

	getch();
	return 0;
}
