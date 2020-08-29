#include "iexample.h"

#include <stdlib.h>

typedef struct
{
	IExample iExample;
} MyClass;

void MyClassFoo()
{
	printf("Let's foo.\r\n");
}

void MyClassBar()
{
	printf("Let's bar.\r\n");
}

void MyClassInit(MyClass *this)
{
	this->iExample.foo = MyClassFoo;
	this->iExample.bar = MyClassBar;
}

