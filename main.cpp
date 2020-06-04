#include "Cuenta.h"
#include "CuentaVip.h"
#include "CuentaAhorro.h"
#include <vector>
#include <memory>

int main(int argc, char** argv)
{
    std::vector<std::shared_ptr<Cuenta>> cuentas;
    std::vector<std::shared_ptr<Cuenta>>::iterator it;
    
    std::cout << "--- CREAMOS LAS CUENTAS ---" << std::endl;

    cuentas.push_back(std::make_shared<Cuenta>("Jaimito", 50));
    cuentas.push_back(std::make_shared<CuentaVip>("Jorjito", 75));
    cuentas.push_back(std::make_shared<CuentaAhorro>("Juanito"));
    
    std::cout << "--- MOSTRAMOS LAS CUENTAS ---" << std::endl;

    for(it = cuentas.begin(); it < cuentas.end(); it++)
    { 
        std::cout << **it;
    }
    
    std::cout << "--- TRANSFERENCIAS ---" << std::endl;
    
    cuentas[0]->transferir(100, *cuentas[2]);
    cuentas[1]->transferir(200, *cuentas[2]);

    std::cout << "--- MOSTRAMOS LAS CUENTAS ---" << std::endl;
    
    std::cout << *cuentas[0] << *cuentas[1] << *cuentas[2];
    
    std::cout << "--- SACAMOS DINERO ---" << std::endl;
    
    std::cout << "Retirado " << cuentas[2]->retirar(300) << std::endl;

    std::cout << "--- MOSTRAMOS LAS CUENTAS ---" << std::endl;
    
    std::cout << *cuentas[0] << *cuentas[1] << *cuentas[2];

    std::cout << "--- SALIMOS SIN ELIMINAR LAS CUENTAS  ---" << std::endl;

    return EXIT_SUCCESS;
}
