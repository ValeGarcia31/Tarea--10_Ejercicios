#include <iostream>

using namespace std;

double subtotal;
double tp;
double impuesto;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
	listaProductos = listaProductos + descripcion + "\n";
	subtotal = subtotal + (cantidad * precio);
	impuesto = subtotal * 0.15;
	tp = subtotal + impuesto;
}

void imprimirFactura()
{
	system("cls");
	cout<<"*******"<<endl;
	cout<<"FACTURA"<<endl;
	cout<<"*******" <<endl;
	cout<<endl;
	
	cout<<"Productos:" <<endl;
	cout<<listaProductos;
	
	cout<<endl;
	cout<<"*******" <<endl;
	cout<<"Subtotal: "<<subtotal<<" lps"<<endl;;
	cout<<"*******" <<endl;
	cout<<endl;


	cout<<endl;
	cout<<"*******" <<endl;
	cout<<"Impuesto 15%: "<<impuesto<<endl;
	cout<<"*******" <<endl;
	cout<<endl;

	
	cout<<endl;
	cout<<"*******" <<endl;
	cout<<"TOTAL A PAGAR: "<<tp<< " lps" <<endl;
	cout<<"*******" <<endl;
	cout<<endl;
	
	system("pause");
}
