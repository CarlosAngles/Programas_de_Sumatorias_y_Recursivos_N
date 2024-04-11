// Nombre: Carlos Mauricio Angles Quispe
// Fecha: 11/04/2024
// El programa contiene un menu con el cual podemos elegir las siguientes opciones:
//(Sumatoria de 1, Sumatoria de i, Sumatoria de i al cuadrado,Factorial Recursivo y Fibonacci).

#include <iostream>

using namespace std;

void SumatoriaDe1(int n){
    int r=0;
    for(int i=1;i<=n;i++)
    {
        r=r+1;
        cout<<1;
        if (i < n)
            cout <<"+";

    }
        cout<<"="<<r<<endl;
}

void SumatoriaDe_i(int n){
    int r=0;
    for(int i=1;i<=n;i++)
    {
        r=r+i;
        cout<<i;
        if (i < n)
            cout <<"+";

    }
        cout<<"="<<r<<endl;
}
void Sum_i_AlCuadrado(int n){
    int r=0;
    for(int i=1;i<=n;i++)
    {
        r=r+(i*i);
        cout<<"("<<i<<"^2)";
        if (i < n)
            cout <<"+";
    }
    cout<<"="<<r<<endl;
}
int FactorialRecursivo(int a)
{
    if (a == 0) {
        return 1;
    } else if (a == 1) {
        cout << "1=";
        return 1;
    } else {
        cout << a << "*";
        return a * FactorialRecursivo(a - 1);
    }

    return a;
}
int Fibonacci(int n, int a = 0, int b = 1) {


    if (n == 0) {
        return a;
    }
    cout << a << " ";
    return Fibonacci(n - 1, b, a + b);
}


int main()
{
    cout<<"Opcion(1)-- Sumatoria de 1 "<<endl;
    cout<<"Opcion(2)-- Sumatoria de i"<<endl;
    cout<<"Opcion(3)-- Sumatoria de i al cuadrado"<<endl;
    cout<<"Opcion(4)-- Factorial de un numero"<<endl;
    cout<<"Opcion(5)-- Serie Fibonacci "<<endl;
    cout<<"Opcion(6)-- Salir "<<endl;
    int a,b;
    do{

        cout<<"---Digite una de las opciones:"<<endl;
        cin>>a;
        if(a==1){
            do{
            cout<<"Digite el valor de n:"<<endl;
            cin>>b;
            }while(b<1);
                SumatoriaDe1(b);
                cout<<endl;
        }
        else if(a==2){

            do{
            cout<<"Digite el valor de n:"<<endl;
            cin>>b;
            }while(b<1);
                SumatoriaDe_i(b);
                cout<<endl;
        }
         else if(a==3){
            do{
            cout<<"Digite el valor de n:"<<endl;
            cin>>b;
            }while(b<1);
                Sum_i_AlCuadrado(b);
                cout<<endl;
        }

         else if(a==4){
            do{
            cout<<"Digite el valor de n:"<<endl;
            cin>>b;
            }while(b<0);
            cout<<"El factorial de "<<b<<" es: "<<FactorialRecursivo(b);
            cout<<endl;

        }
         else if(a==5){
            do{
            cout<<"Digite el valor de n:"<<endl;
            cin>>b;
            }while(b<1);
            cout<<"Los primeros "<<b<<" terminos de la serie son: ";
            Fibonacci(b);
            cout<<endl;

        }

    }while(a!=6);
    return 0;
}
