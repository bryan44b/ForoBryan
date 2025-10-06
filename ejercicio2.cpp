#include <iostream>

using namespace std;

int main(){


int alimento;

do
{
    
    cout << "Elige un articulo del menu"; cout << endl;
    cout << "1.Tortas" << endl;
    cout << "2.Palomitas" << endl;
    cout << "3.Agua" << endl;
    cout << "4.Salir" << endl;
    cin >> alimento;
    switch(alimento){
        case 1:
            cout <<"El precio de la torta es de $25" << endl;
            break;
        case 2:
            cout <<"El precio de las palomitas es de $35" << endl;
            break;
            case 3:
            cout <<"El precio del agua es de $15" << endl;
            break;
            case 4:
            cout <<"Saliendo..." << endl;
            break;
        
}

} while (alimento !=4);
{
    cout <<"Gracias por su compra, vuelva pronto" << endl;
}




}
