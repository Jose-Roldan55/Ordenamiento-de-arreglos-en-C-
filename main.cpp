#include <iostream>
using namespace std;

int main()
{
int num;
     int respuesta,longitud; //declaracion de variables (8, 9)
     string respuesta2;
     bool repetido = false; //declaracion e inicializacion de variables (10, 11)
    cout<<"~~~~~~~~~~~~~~~~BIENVENIDO AL ORDENADOR DE ARREGLOS~~~~~~~~~~~~\n"; //impresion de bienvenida
    cout<<"---------------------------------------------------------------\n"; //separacion
    do{
    cout<<"Solo acepto entre 2 y 20 elementos"; //advertencias al usuario
    cout<<"\n¿De cuantos elementos sera tu arreglo?"<<endl; //solicitud de datos al usuario
    cin>>longitud; //asignacion de valor
    while(longitud<2||longitud>20){ //validacion de datos dentro del rango permitido (18, 22)
      cout<<"Tu numero de elementos no es valido";
      cout<<"\n¿De cuantos elementos sera tu arreglo? "<<endl;
      cin>>longitud;
    }
    int arr[longitud]; //declaracion e inicializaion de arreglo
    cout<<"\nComienza a llenar tu arreglo\n"; //asignacion de valores al arreglo
    for(int i=0;i<longitud;){ //validacion de datos diferentes (25, 39)
      repetido=false;
      cout<<"Ingresa el elemento "<<(i+1)<<": ";
      cin>>num;
      for(int j=0;j<longitud && !repetido; j++){
        if (arr[j] == num) 
        {
          repetido=true;
        }
      }
    if (repetido){
        cout<<"El número Ingresado ya existe\n";
      }
    else{
        arr[i] = num;
        i++;
        }
    }
    cout<<"Este es tu arreglo de acuerdo al orden en que lo llenaste: \n"; //arreglo de acuerdo al orden en que el usuario lo lleno
    cout<<"[ ";
    for(int y=0;y<longitud;y++){
   cout<<arr[y]<<" ";
    }
    cout<<"]\n";
  cout<<endl;
   cout<<"\t\nMenu de ordenadores\n"; //menu
    cout<<"1.-Metodo de ordenamiento de burbuja\n2.-Metodo de ordenamiento de insercion\n3.-Metodo de ordenamiento de seleccion\n";
    cout<<"¿Que opcion quieres?";
    cout<<endl;
    cin>>respuesta;
  switch(respuesta){
   case 1: //inicio del metodo por burbuja
   cout<<"Hagamoslo por el metodo de burbuja";
   cout<<endl;     
    for(int x=0;x<longitud;x++){ 
      int ayuda1;
     cout<<"\nVuelta "<<(x+1)<<" ";
     cout<<"[ ";
       for(int numero:arr)
         cout<<numero<<" ";
       cout<<" ]\n";
       cout<<endl;
      for(int y=x+1;y<longitud;y++){
        if(arr[x]>arr[y]){
           ayuda1=arr[x];
          arr[x]=arr[y];
          arr[y]=ayuda1;
        }
        }
      }
    cout<<"Arreglo ordenado por metodo de burbuja"; //orden final
    cout<<endl;
    cout<<"[  ";
    for(int x=0;x<longitud;x++){
      cout<<arr[x]<<" ";
    }
    cout<<" ]";
    cout<<endl;
        break;
      case 2: //inicio de metodo por insercion
        cout<<"Hagamoslo por el metodo de insercion";
        int s,ayuda2;
    for(int i=0;i<longitud;i++){ 
      s=i;
    ayuda2=arr[i];
       cout<<"\nVuelta "<<(i+1)<<" ";
       cout<<"[ ";
       for(int numero:arr)
         cout<<numero<<" ";
       cout<<" ]";
       cout<<endl;
  while(s>0 && (arr[s-1]>ayuda2)){
    //Intercambiamos y la posicion ira disminuyendo si el numero a la izquierda es mayor al numero actual
      arr[s]=arr[s-1];
      s--;
    }
      arr[s]=ayuda2;
    }
    cout<<"El arreglo ordenado por metodo de insercion\n"; //orden final
    cout<<"[ ";
    for(s=0;s<longitud;s++){
      cout<<arr[s]<<" ";
    }
      cout<<" ]";
        cout<<endl;
        break;
      case 3: //inicio de metodo por seleccion
        cout<<"Hagamoslo por el metodo de seleecion";
        int m,p,ayuda3;
   //El -1 representa la cantidad de numeros al buscar el numero menor
        for(int i=0;i<longitud-1;i++){
          m=arr[i];
          p=i;
          cout<<"\nVuelta "<<(i+1)<<" ";
          cout<<"[ ";
          for(int numero:arr)
          cout<<numero<<" ";
          cout<<" ]";
          cout<<endl;
          cout<<endl;      
      for(int h=i+1;h<longitud;h++){
            if(arr[h]<m){
              m=arr[h];
              p=h;
            }
          }
  //Si el numero en la posicion es diferente a i osea es difernte de posiciones para hacer el intercambio el cual compararemos la posicion en el que se encontro el numero mas pequeño   
          if(p!=i){
            ayuda3=arr[i];
            arr[i]=arr[p];
            arr[p]=ayuda3;
          }
         }
        cout<<"Arreglo ordenado por metodo de seleccion\n"; //orden final
        cout<<endl;
        cout<<"[ ";
        for(int z=0;z<longitud;z++){
          cout<<arr[z]<<" ";
        }
        cout<<" ]";
        cout<<endl;
        break;
      default: //inicio de lineas de codigo si no se cumple ninguna anerior
        cout<<"No elegiste ningun metodo"<<endl;
        break; //fin de default
}
      cout<<"\n¿Deseas hacer otra ordenacion s/n?";
      cout<<endl;
      cin>>respuesta2;
      if(respuesta2=="n"){
        cout<<"Gracias por usar el programa"; //mensaje de despedida
      }
    }while(respuesta2=="s"); //ciclo si se cumple la condicion
return 0;
  }