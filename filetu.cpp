int main()
{
   CONRAN r;
    srand(time(NULL));
      for ( int x=2;x<116;x++)
    {
        gotoxy(x,0);
        cout << char(196);
        gotoxy(x,29);
        cout << char(196);
    }
      for ( int y=1;y<29;y++)
        {
        gotoxy(1,y);
        cout << char(179);
        gotoxy(116,y);
        cout << char(179);
        }
    gotoxy(1,0); cout <<char(218);
    gotoxy(116,0); cout <<char(191);
    gotoxy(1,29); cout <<char(192);
    gotoxy(116,29); cout <<char(217);
    int Huong = 0;
    char t;
    r.taoqua();
    while (1){
        if (kbhit()){
            t = getch();
            if (t=='a' && Huong!=0) Huong = 2;
            if (t=='w' && Huong!=1) Huong = 3;
            if (t=='d' && Huong!=2) Huong = 0;
            if (t=='s' && Huong!=3) Huong = 1;
            if (t==27) break;
        }
        gotoxy(r.A[r.DoDai].x,r.A[r.DoDai].y);
        cout <<" ";
        r.Ve();
        r.DiChuyen(Huong);
        Sleep(100);
        r.ktanqua();
        if (r.ktcham())
            break;
        if (r.kttuong())
            break;
        }
    gotoxy(50,15);cout << "GAME OVER";
    int score=r.DoDai-4;
    gotoxy(47,16); cout << "YOUR SCORE : " <<score;
    return 0;
