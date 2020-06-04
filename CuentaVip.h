#ifndef CUENTAVIP_H
#define CUENTAVIP_H

#include "Cuenta.h"

class CuentaVip : public Cuenta
{
	public:
		CuentaVip(std::string titular, long saldo = 0);
		virtual void mostrar(void);
};

#endif

