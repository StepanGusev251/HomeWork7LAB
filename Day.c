#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main() {
    int k, first_day;
    setlocale(LC_ALL, "RUS");

    // ���� ������
    printf("������� ����� ��� � ���� (k): ");
    scanf("%d", &k);

    printf("������� ���� ������ 1 ������ (1-�����������, 2-�������, ..., 7-�����������): ");
    scanf("%d", &first_day);

    // ���������� ��� ������ ��� k-�� ���
    int day = (first_day + k - 2) % 7 + 1;

    // ����� ���������� � �������������� switch
    printf("%d-� ���� ������������� ���� - ��� ", k);

    switch (day) {
    case 1: printf("�����������\n"); break;
    case 2: printf("�������\n"); break;
    case 3: printf("�����\n"); break;
    case 4: printf("�������\n"); break;
    case 5: printf("�������\n"); break;
    case 6: printf("�������\n"); break;
    case 7: printf("�����������\n"); break;
    default: printf("����������� ����\n"); break;
    }
    
    return 0;
}