#include "Cuenta.h"
#include "CuentaVip.h"
#include <vector>

int main(int argc, char** argv)
{
    std::vector<Cuenta*> cuentas;
    std::vector<Cuenta*>::iterator it;
    
    cuentas.push_back(new Cuenta("Jaimito", 10));
    cuentas.push_back(new CuentaVip("Jorjito", 5));
    cuentas.push_back(new Cuenta("Juanito"));
    
    for(it = cuentas.begin(); it < cuentas.end(); it++)
    {
        (*it)->mostrar();
    }
    
    cuentas[0]->retirar(5);
    cuentas[2]->ingresar(50);
    cuentas[2]->transferir(20, *cuentas[1]);
    
    for(it = cuentas.begin(); it < cuentas.end(); it++)
    {
        (*it)->mostrar();
    }
    
    return 0;
}
