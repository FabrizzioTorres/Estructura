//S02-Ejercicio3.4 Torres Gozalves Fabrizzio Miguel
#include <iostream>
using namespace std;
void Menu(int *&e){
  do{
    cout<<"\n======SIGNOS======"<<endl;
    cout<<"1. Aries"<<endl;
    cout<<"2. Tauro"<<endl;
    cout<<"3. Géminis"<<endl;
    cout<<"4. Cáncer"<<endl;
    cout<<"5. Leo"<<endl;
    cout<<"6. Virgo"<<endl;
    cout<<"7. Libra"<<endl;
    cout<<"8. Escorpio"<<endl;
    cout<<"9. Sagitario"<<endl;
    cout<<"10. Capricornio"<<endl;
    cout<<"11. Acuario"<<endl;
    cout<<"12. Piscis"<<endl;
    cout<<"13.Salir"<<endl;
    do{
      cout<<"Ingrese el número del signo: "<<endl;
      cin>>*e;
      if(*e<1 && *e>14)
        cout<<"Error. Vuelve a Ingresar"<<endl;
    }while(*e<1 && *e>14);
    switch(*e){
      case 1:{
        cout<<"Categoría: Fuego";
      }break;
      case 2:{
        cout<<"Categoría: Tierra";
      }break;
      case 3:{
        cout<<"Categoría: Aire";
      }break;
      case 4:{
        cout<<"Categoría: Agua";
      }break;
      case 5:{
        cout<<"Categoría: Fuego";
      }break;
      case 6:{
        cout<<"Categoría: Tierra";
      }break;
      case 7:{
        cout<<"Categoría: Aire";
      }break;
      case 8:{
        cout<<"Categoría: Agua";
      }break;
      case 9:{
        cout<<"Categoría: Fuego";
      }break;
      case 10:{
        cout<<"Categoría: Tierra";
      }break;
      case 11:{
        cout<<"Categoría: Aire";
      }break;
      case 12:{
        cout<<"Categoría: Agua";
      }break;
      default:{
        cout<<"Gracias. Vuelva pronto";
      }break;
    }
  }while(*e!=13);
}
int main() {
  int *opcion = new int;
  Menu(opcion);
  delete opcion;
  return 0;
}