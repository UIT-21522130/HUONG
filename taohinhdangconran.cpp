struct Point{
    int x,y;
};
class CONRAN{
public:
    struct Point A[100];
    int DoDai=4;
        int a;
        int b;

    CONRAN(){
        A[0].x = 10; A[0].y = 10;
        A[1].x = 9; A[1].y = 10;
        A[2].x = 8; A[2].y = 10;
        A[3].x = 7; A[3].y = 10;

    }
    void Ve(){
        for (int i = 0; i < DoDai; i++){
            gotoxy(A[i].x,A[i].y);
            cout<<"X";
        }
    }
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
