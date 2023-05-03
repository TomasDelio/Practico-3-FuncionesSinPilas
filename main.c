#include <stdlib.h>
#include <stdio.h>


int ran (int num);
void mayormenor(int num, int num2,int num3);
int sumam (int num );
void tabla(int num);
void suma(float num1, float num2);
void resta(float num1,float num2);
void multi(float num1, float num2);
void divi(float num1, float num2);
int negativizador(int *vari);
int cargainador (int *num, int *num2);

int main()
{
    int var, num, num2, num3, num4;
    printf("Bienvenido a la guia 3bis, funciones sin pilas, por favor, elija el ejercicio q quiere realizar: ");
    scanf("%i", &var);
    switch(var)
    {
    case 1:
        num = ran(num);

        // mostrar();
        printf("El numero Random Del 1 al 100 es : %i\n", num);
        break;

    case 2:
        printf("Cargue el primer numero: \n");
        scanf("%i", &num);
        printf("Cargue el segundo numero que debe ser distinto al anterior: \n");
        scanf("%i", &num2);
        printf("Cargue el tercer numero, recuerde poner un numero distinto a los anteriores: \n");
        scanf("%i", &num3);
        mayormenor(num, num2, num3);
        break;
    case 3:
        printf("Ingrese un numero entero, a continuacion le mostraremos\nla suma de los numeros menores que este\n");
        scanf("%i",&num);

        num2= sumam(num);
        printf("\nLa suma de los numeros enteros positivos menores a %i es : %i ", num,num2);
        break;

    case 4:
        printf("Ingrese un numero entero: ");
        scanf("%i",&num);
        tabla(num);
        break;
    case 5:
        menu();
        break;
    case 6:
        printf("ingrese un numero: ");
        scanf("%i", &num);
        negativizador(&num);

        printf("\nEl numero negativizado es: %i", num);
        break;
    case 7:
        cargainador(&num, &num2);
        printf("\nLos numeros del cargainador son %i y %i", num, num2);

        break;
    }


    return 0;
}


int ran (int num)
{
    srand(time (NULL));
    num =rand()%100;

    return num;

}

void mayormenor(int num, int num2,int num3)
{

    if(num>num2 && num>num3)
    {
        printf("El numer mayor es el primer numero, el %i\n", num);
    }
    else if(num2>num && num2>num3)
    {
        printf("El numer mayor es el segundo numero, el %i\n", num2);
    }
    else
    {
        printf("El numer mayor es el tercer numero, el %i\n", num3);
    }

    if(num<num2 && num<num3)
    {
        printf("El numer menor es el primer numero, el %i\n", num);
    }
    else if(num2<num && num2<num3)
    {
        printf("El numer menor es el segundo numero, el %i\n", num2);
    }
    else
    {
        printf("El numer menor es el tercer numero, el %i\n", num3);
    }

}

int sumam (int num )
{
    int num2;
    for(int i=0; i<num; i++)
    {
        num2=num2 +i;
    }
    return num2;
}

void tabla(int num)
{
    int multi, resul;
    printf("----------\nTABLA DEL %i\n----------", num);

    for(multi=1; multi<=10; multi++)
    {
        resul = num * multi;
        printf("\n%ix%i=%i", num, multi, resul);
    }
}

int menu()
{
    float num1,num2, total;
    int opera;
    int cuenta=1;

    printf("INGRESE UNA OPERACION QUE QUIERA REALIZAR \n\n1=suma\n2=resta\n3=multiplicacion\n4=divicion: ");
    scanf("%i",&opera);
    printf("\nIngese el primer numero: ");
    scanf("%f",&num1);
    printf("\nIngrese el segundo numero: ");
    scanf("%f",&num2);

    switch (opera)
    {
    case 1:
        suma(num1,num2);
        break;
    case 2:
        resta(num1,num2);
        break;
    case 3:
        multi(num1,num2);
        break;
    case 4:
        divi(num1,num2);
        break;
    }
    return 0;
}

void suma(float num1,float num2)
{
    float total= num1+num2;
    printf("El resultado es %.2f\n", total);

}

void resta(float num1,float num2)
{
    float total= num1-num2;
    printf("El resultado es %.2f\n", total);
}

void multi(float num1,float num2)
{
    float total= num1*num2;
    printf("El resultado es %.2f\n", total);
}

void divi(float num1, float num2)
{
    float total= num1/num2;
    if(num2==0)
    {
        printf("No sabias que no se ouede divdir por 0 boludito??");
    }
    else
    {
        printf("El resultado es %.2f\n", total);
    }

}

int negativizador(int *vari)
{
    *vari = *vari*(-1);
}

int cargainador (int *num, int *num2)
{
    printf("ingrese el primer numero: ");
    scanf("%i", num);
    printf("ingrese el segundo numero: ");
    scanf("%i", num2);

return 0;
}
//\\\\\\\\\\\\\\\\\\\\\\\\\\\
