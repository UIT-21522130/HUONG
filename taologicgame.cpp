 void ktanqua()
    {
        if (A[0].x==a && A[0].y==b)
        {
            DoDai++;
            taoqua();
        }
    }
    bool kttuong()
    {
        for (int i=1;i<DoDai;i++)
        {
            if (A[0].x==0 ||A[0].x==100 || A[0].y==0 ||A[0].y==25)
            {
            return true;
            }
            else
            return false;
        }
    }
