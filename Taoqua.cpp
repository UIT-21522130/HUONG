srand(time(NULL));
int a;
int b;
void taoqua()
{
a=(rand()%115)+1;
b=(rand()%28)+1;
gotoxy(a,b);
cout <<"@";
}
