#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include "Cuenta.h"

class CuentaAhorro : public Cuenta
{
	public:
		CuentaAhorro(std::string titular, int saldo = 0);
        ~CuentaAhorro();

		std::string nombre(void);
        int ingresar(int cantidad);
};

#endif
