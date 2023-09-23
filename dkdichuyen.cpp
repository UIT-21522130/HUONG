while (1)
{
 if (kbhit())
{
 t = getch();
 if (t=='a' && Huong!=0) Huong = 2;
 if (t=='w' && Huong!=1) Huong = 3;
 if (t=='d' && Huong!=2) Huong = 0;
if (t=='s' && Huong!=3) Huong = 1;
 }

