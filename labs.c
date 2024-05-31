#include "labs.h"
#include <stdio.h>
int lab1()
{
     float P;
   float A;
   float B;
   float C;
   printf("A = ");
   scanf("%f", &A);
   printf("B = ");
   scanf("%f", &B);
   printf("C = ");
   scanf("%f", &C);
   P = A / (B + C*C*C);
   printf("P = %f\n", P);
}
int lab2()
{
  float eps;
float sum = 0;
float x;
int i, sign = 1;
printf("vvedite tochnoct eps: ");
scanf("%f", &eps);
for (i = 1; ; i++) {
x = (float) (i + 2) / (i * (i + 1));
sum += sign * x;
if (x< 0) {
x =-x;
}
if (x < eps) {
break;
}
sign = -sign;
}
printf("summa rada c tochnoct eps=%.3f ravna %.3f\n", eps, sum);
}
int lab3()
{
     int c;
    int prev_c;
    int flag;
    int cnt;

    cnt = 0;
    flag = NO;
    prev_c = ' ';

    while( (c = getchar()) != EOF )
    {
        if( c >= '0' && c <= '9' )
        {
           if (flag == NO) {
                flag = YES;
            }
        }
        else
        {

            if (flag == YES && (c == ' ' || c == '\n' || c == '\t'))
            {

                cnt = cnt + 1;
                flag = NO;
            }
            else if (!(c == '.' && prev_c >= '0' && prev_c <= '9'))
            {
                flag = NO;
            }
        }

        prev_c = c;
    }

    if (flag == YES) {
        cnt++;
    }

    printf("kolichestvo desatichnih chisel = %d\n", cnt );
    return 0;
}
int ras(char* word) {
int c[26] = {0}; // ������ ��� �������� ������ ����
// ������������ ������� ������ �����
for (int i = 0; word[i] != '\0'; i++) {
if ((word[i] >= 'a' && word[i] <= 'z') || (word[i]>='A' && word[i]<='Z')) {
int index = word[i] - 'a';
c[index]++;
if (c[index] > 1) {
return 0; // ����������, ���� ����� ����������� ����� ������ ����
}
}
}
return 1; // ���������� 1, ���� ��� ����� ���������
}
int lab4(){
char str[100];
fgets(str, sizeof(str), stdin);
char word[50];
int i = 0, j = 0;
while (str[i] != '\0') {
// ��������� ������ ������ � ������ ��� ������������ ����
if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
word[j++] = str[i];
} else {
// ����� ����� �����������, ��������� �� ������������ ���� � ������� ���, ���� ����������
word[j] = '\0';
if (j > 0 && ras(word)) {
printf("%s ", word);
}
j = 0;
}
i++;
}
return 0;
}
int lab5(){
int arr[10];
int b,q,cnt=0,geom;
for (int i=0;i<10;i++){
scanf("%d", &arr[i]);
}
b=arr[0];
q=arr[1]/arr[0];
for (int j=0;j<10;j++){
int h=j;
int pow=1;
while(h>0){
pow*=q;
h--;
}
geom=b*pow;
if (arr[j]==geom){
cnt++;
}
}
if (cnt==10){
printf("YES");
}else{
printf("NO");
}
return 0;
}
int lab6(){
int n = 3,k = 4,min,x,y,i,j;
int arr[n][k];//����� ������ ������������ n �� k
for(i=0;i<n;i++){
for(j=0;j<k;j++){
scanf("%d", &arr[i][j]);//��������� ������
}
}
min=31000;
for(i=0;i<n;i++){
for(j=0;j<k;j++){
//���������� ������ ������� ������� � �����������
if(arr[i][j]<min){
//���� ������� ������� ������ ������������ ��������, �� ����������� ��� �������� �������� ������������ � ���������� �������
min=arr[i][j];
x=i;
y=j;
}
}
}


for(i=0;i<n;i++){
for(j=0;j<k;j++){
//�������� ������ � �������, �� ����������� ������� ��������� ����������� ������� �������
if(x==i || y==j){
arr[i][j]=0;
}
}
}
for(i =0;i<n;i++){
for(j=0; j<k;j++){
//������� �������� ������
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}
int lab7(){
    unsigned long n;
    int l = 0, ml = 0, mask = 1;
    scanf("%d", &n);
    do {
        if (n & mask) {
            if (++l > ml) ++ml;
        } else l = 0;
    } while (n >>= 1);
    printf("%d", ml);
return 0;
}
