#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <Windows.h>

#define MAX_LENGHT_LIST 100

void task_1();
void task_2();
void task_3();
void task_4();
void task_5();
void task_6();


void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	task_6();
}

void task_1() {
	printf("Rauf Fathutdinov\n");
	printf("Task one\n");

	int a, b, c, p;

	scanf_s( "%d %d %d", &a, &b, &c);
	printf("Input: %d, %d, %d\n", a, b, c);

	p = a * b * c;

	printf("p = %d\n", p);
}

void task_2() {
	printf("Rauf Fathutdinov\n");
	printf("Task two\n");

	int a, b, c, p;

	FILE* fin = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\input.txt", "rt");

	if (fin == NULL) {
		printf("File not found!");
		return;
	}
	fscanf(fin, "%d %d %d", &a, &b, &c);
	printf("Input: %d, %d, %d\n", a, b, c);
	fclose(fin);

	FILE* fres = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\result.txt", "wt");

	if (fres == NULL) {
		printf("File not found!");
		return;
	}
	p = a * b * c;

	fprintf(fres, "%d\n", p);

	printf("p = %d\n", p);

	fclose(fres);
}

void task_3() {
	printf("Rauf Fathutdinov\n");
	printf("Task three\n");

	int a, b, c, d, f, p;

	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &f);
	printf("Input: %d, %d, %d, %d, %d\n", a, b, c, d, f);

	p = a + b + c + d + f;

	printf("p = %d\n", p);
}

void task_4() {
	printf("Rauf Fathutdinov\n");
	printf("Task four\n");

	int a, b, c, d, f, p;

	FILE* fin = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\input4.txt", "rt");

	if (fin == NULL) {
		printf("File not found!");
		return;
	}
	fscanf(fin, "%d %d %d %d %d", &a, &b, &c, &d, &f);
	printf("Input: %d, %d, %d, %d, %d\n", a, b, c, d, f);
	fclose(fin);

	FILE* fres = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\result4.txt", "wt");

	if (fres == NULL) {
		printf("File not found!");
		return;
	}
	p = a + b + c + d + f;

	fprintf(fres, "%d\n", p);

	printf("p = %d\n", p);

	fclose(fres);
}

void task_5() {
	printf("Rauf Fathutdinov\n");
	printf("Task five\n");

	int a[MAX_LENGHT_LIST];
	int n;
	int summa = 0;
	float result;

	FILE* fin = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\input5.txt", "rt");

	if (fin == NULL) {
		printf("File not found!");
		return;
	}

	fscanf(fin, "%d", &n);
	printf("Input: %d\n", n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d ", &a[i]);
	}

	fclose(fin);

	printf("\nInput list a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
		summa += a[i];
	}

	result = summa / n;
	printf("\nAverage value = %f\n", result);

	FILE* fres = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\result5.txt", "wt");

	if (fres == NULL) {
		printf("File not found!");
		return;
	}
	printf("Input list a[%d] = ", n);

	fprintf(fres, "%d\n", n);

	for (int i = 0; i < n; i++) {
		if (a[i] > result) {
			a[i] *= 10;
		}
		printf("%d ", a[i]);
		fprintf(fres, "%d ", a[i]);
	}

	fclose(fres);
}

void task_6() {
	printf("Rauf Fathutdinov\n");
	printf("Task six\n");

	int a[MAX_LENGHT_LIST];
	int n;
	int summa = 0;
	float result;

	FILE* fin = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\input5.txt", "rt");

	if (fin == NULL) {
		printf("File not found!");
		return;
	}

	fscanf(fin, "%d", &n);
	printf("Input: %d\n", n);

	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d ", &a[i]);
	}

	fclose(fin);

	printf("\nInput list a[%d] = ", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
		summa += a[i];
	}

	result = summa / n;
	printf("\nAverage value = %f\n", result);

	FILE* fres = fopen("d:\\Учёба\\1 курс\\Основы алгоримизации и программирование (Власенко)\\лабораторная_18\\text_file\\result6.txt", "wt");

	if (fres == NULL) {
		printf("File not found!");
		return;
	}
	printf("Input list a[%d] = ", n);

	fprintf(fres, "%d\n", n);

	for (int i = 0; i < n; i++) {
		if (a[i] < result && a[i]%2==0) {
			a[i] /= 2;
		}
		printf("%d ", a[i]);
		fprintf(fres, "%d ", a[i]);
	}

	fclose(fres);
}