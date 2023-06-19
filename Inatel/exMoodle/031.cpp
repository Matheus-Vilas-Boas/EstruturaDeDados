using namespace std;

//Função média geometrica
void media(int x, int y, float &m)
{
    m = sqrt(x *y);
}
int main()
{
    cout << fixed << setprecision(2);
    // váriaveis de input e output
    int x, y; 
    float M = 0;
    //INPUT
    cin >> x >> y;
    //Chamando a função média geometrica
    media(x, y, M);
    // OUTPUT
    cout << M << endl;
    return 0;
}
// V 1.0.0