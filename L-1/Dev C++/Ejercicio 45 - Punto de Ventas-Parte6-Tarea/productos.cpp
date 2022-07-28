#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)

{   system("cls");
	
	int opcionProducto = 0;
	switch (opcion)
	{
	    case 1:
	   {
			cout<<"BEBIDAS CALIENTES" << endl;
			cout<<"*****************" << endl;
        	cout<<"1 - Capuccino" << endl;
            cout<<"2 - Expresso" << endl;
            cout<<"3 - Cafe" << endl;
            cout<<endl;
            
            cout<<"Ingrese una opcion: ";
        	cin>>opcionProducto;
        	
        	switch (opcionProducto)
        	{
        	case 1: 
        	    agregarProducto("1 - Capuccino - L 40.00", 1, 40);
        	    break;
        	    
           	case 2: 
               agregarProducto("1 - Expresso - L 30.00", 1, 30);
        	    break;
        	
        	case 3:
        		agregarProducto("1 - Cafe - L 40.00", 1, 40);
        		break;
        	default:
        	{
				
        		cout<<"Opcion no valida";
        		return;
        		break;
        	}
        	
			}
			
			cout<<endl;
			cout<<"Producto agregado"<<endl <<endl;
			system("pause");
			
			break;
		}
		
	    case 2:
	   {
			cout<<"BEBIDAS FRIAS" << endl;
			cout<<"*****************" << endl;
        	cout<<"1 - Moca" << endl;
            cout<<"2 - Latte" << endl;
            cout<<"3 - Jugo de Mora"<<endl;
            cout<<endl;
            
            cout<<"Ingrese una opcion: ";
        	cin>>opcionProducto;
        	
        	switch (opcionProducto)
        	{
        	case 1: 
        	    agregarProducto("1 - Moca - L 52.00", 1, 52);
        	    break;
        	    
           	case 2: 
               agregarProducto("1 - Latte - L 55.00", 1, 55);
        	    break;
        	    
        	case 3:
        		agregarProducto("1 - Jugo de mora - L 40.00", 1, 40);
        		break;
        	default:
        	{
				
        		cout<<"Opcion no valida";
        		return;
        		break;
        	}
        	
			}
			
			cout<<endl;
			cout<<"Producto agregado"<<endl <<endl;
			system("pause");
			
			break;
		}
		
	    case 3:
	   {
			
			cout<<"REPOSTERIA" << endl;
			cout<<"**********" << endl;
        	cout<<"1 - Mousse de Mango" << endl;
            cout<<"2 - Tarta de Limon" << endl;
            cout<<"3 - Cheesecake"<<endl;
            cout<<endl;		
            
            cout<<"Ingrese una opcion: ";
        	cin>>opcionProducto;
        	
        	switch (opcionProducto)
        	{
        	case 1: 
        	    agregarProducto("1 - Mousse de Mango - L 80.00", 1, 80);
        	    break;
        	    
           	case 2: 
               agregarProducto("1 - Tarta de Limon - L 75.00", 1, 75);
        	    break;
        	    
        	case 3:
        		agregarProducto("1 - Cheesecake - L 60.00", 1, 60);
        		break;
        	default:
        	{
				
        		cout<<"Opcion no valida";
        		return;
        		break;
        	}
        	
			system("pause");
			break;
		    }
	    	}
			
			cout<<endl;
			cout<<"Producto agregado"<<endl <<endl;
			system("pause");
			
			break;
		}
	}
