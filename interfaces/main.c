#include <stdio.h>
#include "myclass.h"

int main(int argc, char *argv[])
{
	MyClass myClass;
	MyClassInit(&myClass);

	myClass.iExample.foo();
	myClass.iExample.bar(3);
}
