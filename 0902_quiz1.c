/* 
1. ���ǽǿ� �ִ� �л��� �߿��� Ű�� ��� Ű���� ū �л��� ã�Ƴ��� �˰�����
��ü���̰� ��Ȯ�ϰ� �����. ��� Ű�� �� ���ǽǿ� �ִ� ��� �л����� Ű�� ��� ���̴�.
input : array_hight[N] // �л����� Ű�� ����Ǿ��ִ� �迭
output : result[M] // ��պ��� ū Ű�� ���� �л����� �迭

sum = 0 // ��� �л��� Ű�� ���� ����ϱ� ���� ����
avg = 0 // ��� Ű�� ����ϱ� ���� ����

for i=0 each element in array_hight[N] 
  sum = sum + arraay_hight[i]    // ��� �л����� Ű�� �� ���
avg = sum / N // Ű�� ��հ� ���

for i=0 each element in array_hight[N]
  if avg < array_hight[i] // ��� Ű ���� ū �л��� ������
    result[i] = array_hight[i] // ��� �迭�� �ش� �л��� Ű�� ����
  else
    continue // �ƴϸ� ���� �л����� �ǳʶڴ�.

2.
S = 0
for (i = 1; i <= n; i++)
    for(j = 1; j <= i; j++)
        S = S + i * j
(a)
�Է� ũ�� : n
�⺻ ���� : S = S + i * j

(b) Theta �ð����⵵
�м� : ���� Ƚ��(�⺻���� Ƚ��) = 1 + 2 + ... + N = n(n+1)/2
�ð� ���⵵ : ��(n^2)

*/

#include<stdio.h>

int main(void) {
    int arr_hight[3] = {160, 170, 180};
    int result[3] = {0};
    int sum = 0;
    int avg = 0;

    for (int i=0; i<3; i++) {
        sum = sum + arr_hight[i];
    }
    avg = sum / 3;

    for (int i=0; i<3; i++) {
        if (avg < arr_hight[i]){
            result[i] = arr_hight[i];
        } 
    }

    printf("�� �� : %d\n", sum);
    printf("��� Ű : %d\n", avg);

    printf("���Ű���� ū �л��� Ű : ");
    for(int i=0; i<3; i++) {
        printf("%d\t", result[i]);
    }
    return 0;
}