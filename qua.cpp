void DiChuyen(int Huong){
 for (int i = DoDai; i>0;i--)
{
 A[i] = A[i-1];
 }
 if (Huong==0) A[0].x = A[0].x + 1;
if (Huong==1) A[0].y = A[0].y + 1;
 if (Huong==2) A[0].x = A[0].x - 1;
 if (Huong==3) A[0].y = A[0].y - 1;
 }
 void taoqua()
 {
a=rand()%99;
b=rand()%24;
gotoxy(a,b);
cout <<"@";
}
