#include <iostream>
using namespace std;
class kuadran
{
public :
    int x;
    int y;
    void Input()
    {
        cout<<" -------Menentukan Koordinat Kuadran------- \n \n \n";
        cout<< " Masukkan Kuadran X    = ";
        cin>>x;
        cout<< " Masukkan Kuadran Y    = ";
        cin>>y;
        cout<< " Koordinat Titik (X,Y) = "<<x<<" , "<<y<<endl;

    }
    void Output()
    {
        if (x>0 && y>0)
        {
            cout<<" Kuadran I "<<endl;
        }
        else if (x<0 && y>0)
        {
            cout<<" Kuadran II "<<endl;
        }
        else if (x<0 && y<0)
        {
            cout<<" Kuadran III "<<endl;
        }
        else
        {
            cout<<" Kuadran IV "<<endl;
        }
    }
};
int main()
{
    kuadran A;
    A. Input();
    A. Output();
}
