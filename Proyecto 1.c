#include <stdio.h>
#include <stdlib.h>
#include <gotoxy.h>
#include <string.h>


struct persona {
char nombre [40];
int edad;
float salario;
};

int main (){

//Bloque declarativo de varables
int i,j,opc=7,comp,compt,indi,espacios=0,cant,lineas, validos, remp;
char resp,op,nombre[40];
float suma,promedio, rempla;
struct persona empleado[10];

//Bloque de instrucciones

while(opc!=6){
    lineas=0;
    resp='s';
    for(i=5;i<50;i++){
        gotoxy(10,i);printf("                                                                                                                                                               ");
        }
    gotoxy(10,1);printf(" ");
    gotoxy(36,5);printf("Proyecto#1");
    gotoxy(10,7);printf("Creadores Gabriel Castillo, Roderic Martinez y Andra Ramirez ");
    gotoxy(10,10);printf("Introduzca una de las opciones que se muestra en pantalla");
    gotoxy(10,12);printf("1-A%cadir datos                        4-Vista y modificacion de un regsitro",164);
    gotoxy(10,13);printf("2-Nombres de los empleados            5-Registro ordenado por salarios");
    gotoxy(10,14);printf("3-Salarios superiores a 1000 balboas  6-Salir");
    gotoxy(10,15);printf(": ");
    scanf("%i", &opc);
    while (opc!= 1 && opc!= 2 && opc!= 3 && opc!= 4 && opc!= 5 && opc!= 6){
          if(opc!= 1 && opc!= 2 && opc!= 3 && opc!= 4 && opc!= 5 && opc!= 6){
             gotoxy(10,16);printf("La opcion escogida no esta dentro del listado intentelo nuevamente");
             gotoxy(11,15);printf("    ");
             gotoxy(10,15);printf(": ");
             scanf("%i", &opc);
             }
          else{
             gotoxy(10,16);printf("                                                                       ");
             }
          }


if(opc == 1){
    while(resp == 's' || resp =='S'){
         for(i=5;i<50;i++){
            gotoxy(10,i);printf("                                                                                                                                                      ");
            }
            gotoxy(10,1);printf(" ");
            gotoxy(80,5);printf("ESPACIOS LIBRES %i",10-espacios);
         if(espacios<10){
            gotoxy(10,6);printf("Introduzca la cantidad de empleados desea agragar al registro: ");
            scanf("%i",&cant);
            while (10-espacios < cant || cant < 0){
                   if(10-espacios < cant || cant < 0){
                     gotoxy(10,7);printf("La cantidad introducida esta fuera de los parametros, vuelva a intentarlo");
                     gotoxy(10,6);printf("                                                                         ");
                     gotoxy(10,6);printf("Introduzca la cantidad de empleados desea agragar al registro: ");
                     scanf("%i",&cant);
                     }
                   gotoxy(10,7);printf("                                                                               ");
                  }
            lineas=0;
            if(0 < cant){
               for (i=0; i<cant; i++){
                    gotoxy(10,8+lineas);printf("Introduzca el nombre, edad y salario del empleado en el registro %i", espacios+1);
                    gotoxy(10,9+lineas);printf("Nombre");
                    gotoxy(40,9+lineas);printf("Edad");
                    gotoxy(50,9+lineas);printf("Salario");
                    gotoxy(10,10+lineas);printf(": ");
                    fflush(stdin);
                    gets(empleado[espacios].nombre);
                    gotoxy(40,10+lineas);printf(": ");
                    scanf("%i",&empleado[espacios].edad);
                    gotoxy(50,10+lineas);printf(": ");
                    scanf("%f", &empleado[espacios].salario);
                    lineas=lineas+4;
                    espacios++;
                    gotoxy(80,5);printf("                              ");
                    gotoxy(80,5);printf("ESPACIOS LIBRES %i",10-espacios);
                   }
              }
            gotoxy(10,12+lineas);printf("Si desea agregar mas empleados introduzac la letra 's', si no es el caso introduzca cualquier otra letra");
            gotoxy(10,13+lineas);printf(": ");
            fflush(stdin);
            scanf("%c", &resp);
            gotoxy(10,11+cant);printf("                                                                                                           ");
        }
         else {
          gotoxy(10,7);printf("Lastimosamente no quedan mas espacion en el registo introduzca cualquier letra excepto la 's' para volver al menu");
          gotoxy(10,8);printf(": ");
          fflush(stdin);
          scanf("%c", &resp);
         }
        }
}


if(opc == 2){
   for(i=5;i<50;i++){
       gotoxy(10,i);printf("                                                                                                                                                      ");
       }
   gotoxy(10,1);printf(" ");
   if(espacios == 0){
      gotoxy(10,5);printf("Aun no se a agregado ningun empleado al registro, introduzca cualquier letra para volver al menu");
      gotoxy(10,6);printf(": ");
      fflush(stdin);
      scanf("%c", &resp);
      }
   else{
        gotoxy(10,5);printf("Los Empleados presentes en el registro son:");
        for(i=0;i<espacios; i++){
            gotoxy(10,7+lineas);printf("%s",empleado[i].nombre);
            lineas++;
            }
        gotoxy(10,9+lineas);printf("Introduzca cualquier letra para volver al menu");
        gotoxy(10,10+lineas);printf(": ");
        fflush(stdin);
        scanf("%c", &resp);
       }
}


if(opc == 3){
   for(i=5;i<50;i++){
       gotoxy(10,i);printf("                                                                                                                                                      ");
       }
   gotoxy(10,1);printf(" ");
   if(espacios == 0){
      gotoxy(10,5);printf("Aun no se a agregado ningun empleado al registro, introduzca cualquier letra para volver al menu");
      gotoxy(10,6);printf(": ");
      fflush(stdin);
      scanf("%c", &resp);
      }
   else{
       suma=0;
       validos=0;
       for(i=0;i<espacios;i++){
           suma=suma+empleado[i].salario;
           if(1000.00 < empleado[i].salario){
              validos++;
             }
           }
       promedio=suma/espacios;
       if(validos==0){
          gotoxy(10,5);printf("El salario de los empleados presentes en el Regitro es menor a 1000.00 Balboas");
          gotoxy(10,7);printf("El promedio de los salarios en el registro es de %.2f",promedio);
          gotoxy(10,9);printf("Introduzca cualquier letra para volver al menu");
          gotoxy(10,10);printf(": ");
          fflush(stdin);
          scanf("%c", &resp);
          }
        else{
          lineas=0;
          gotoxy(10,5);printf("Los registros de el o la o l@s empleados con sueldos mayores a 1000.00 Balboas son:");
          gotoxy(10,7);printf("Nombre                        Edad      Salario");
          for (i=0; i<espacios;i++){
               if(1000.00 < empleado[i].salario){
                   gotoxy(10,8+lineas);printf("%s",empleado[i].nombre);
                   gotoxy(40,8+lineas);printf("%i",empleado[i].edad);
                   gotoxy(50,8+lineas);printf("%.2f",empleado[i].salario);
                   lineas++;
                   }
              }
          gotoxy(10,9+lineas);printf("El promedio de los salarios en el registro es de %.2f",promedio);
          gotoxy(10,11+lineas);printf("Introduzca cualquier letra para volver al menu");
          gotoxy(10,12+lineas);printf(": ");
          fflush(stdin);
          scanf("%c", &resp);

        }



       }
}


 if(opc==4){

        for(i=5;i<50;i++){
       gotoxy(10,i);printf("                                                                                                                                                      ");
       }
        gotoxy(10,1);printf(" ");
      if(espacios == 0){
      gotoxy(10,5);printf("Aun no se a agregado ningun empleado al registro, introduzca cualquier letra para volver al menu");
      gotoxy(10,6);printf(": ");
      fflush(stdin);
      scanf("%c", &resp);
      }
      else{
            indi=-2;
            fflush(stdin);
            gotoxy(10,5);printf("Introduce el nombre de la persona de la cual desea visualizar el registro:");
            gotoxy(10,6);gets(nombre);

            for(i=0;i<10;i++){
           comp=strcmp(empleado[i].nombre,nombre);

           if(comp==0){
            indi=i;
           }

           /*for(j=0;j<40;j++){

            if(empleado[i].nombre[j]==nombre[j]){
             comp=comp+1;
            }
            compt=comp/39;

            if(compt==1){
              indi=i;
              gotoxy(10,7);printf("Nombre: %s",empleado[i].nombre);
              fflush(stdin);
            }
            else{
                comp=0;
            }
           } */
        }
        if (indi>=0){
            gotoxy(10,7);printf("Nombre: %s",empleado[indi].nombre);
            gotoxy(10,8);printf("Edad: %i",empleado[indi].edad);
            gotoxy(10,9);printf("Edad: %.2f",empleado[indi].salario);

            gotoxy(10,11);printf("Desea modificar este registro(S,N): \n");
            fflush(stdin);
            gotoxy(10,12);scanf("%c",&op);

            while(op=='s'||op=='S'){
                for(i=10;i<50;i++){
                    gotoxy(10,i);printf("                                                                                                                                                      ");
                }
                gotoxy(10,1);printf(" ");
                gotoxy(10,11);printf("Introduce la nueva edad:");
                gotoxy(10,12);scanf("%i",&empleado[indi].edad);
                    while(empleado[indi].edad<18){
                        gotoxy(10,12);printf("                              ");
                        gotoxy(10,11);printf("Introduce una edad valida:");
                        gotoxy(10,12);printf("                              ");
                        gotoxy(10,12);scanf("%i",&empleado[indi].edad);
                    }


                gotoxy(10,14);printf("Introduce el nuevo valor de salario: \n");
                gotoxy(10,15);scanf("%f",&empleado[indi].salario);

                while(empleado[indi].salario<600){
                        gotoxy(10,14);printf("                                         ");
                        gotoxy(10,14);printf("Introduce un valor de salario valido: \n");
                        gotoxy(10,15);printf("                                         ");
                        gotoxy(10,15);scanf("%f",&empleado[indi].salario);
                }
                gotoxy(10,17);printf("El nuevo arreglo posee los siguientes valores: ");
                gotoxy(10,19);printf("Nombre: %s",empleado[indi].nombre);
                gotoxy(10,20);printf("Edad: %i",empleado[indi].edad);
                gotoxy(10,21);printf("Edad: %.2f",empleado[indi].salario);

                gotoxy(10,22);printf("Si la informacion introducida es correcta, introduzca cualquier letra para volver al menu");
                gotoxy(10,23);printf("si no es el caso introdusca 's' nuevamente");
                fflush(stdin);
                gotoxy(10,24);scanf("%c",&op);
            }
        }
        if(indi==-2){
            gotoxy(10,8);printf("No existe un registro asignado con ese nombre.");
            getchar();
        }

      }
}


if(opc == 5){
   for(i=5;i<50;i++){
       gotoxy(10,i);printf("                                                                                                                                                      ");
       }
   gotoxy(10,1);printf(" ");
   if(espacios == 0){
      gotoxy(10,5);printf("Aun no se a agregado ningun empleado al registro, introduzca cualquier letra para volver al menu");
      gotoxy(10,6);printf(": ");
      fflush(stdin);
      scanf("%c", &resp);
      }
   else{

        for(i=1; i < 10; i++){
        for(j=0; j<(10-1); j++){
        if(empleado[j].salario < empleado[j+1].salario){
                rempla= empleado[j].salario;
                empleado[j].salario = empleado[j+1].salario;
                empleado[j+1].salario= rempla;

                strcpy(nombre,empleado[j].nombre);
                strcpy(empleado[j].nombre,empleado[j+1].nombre);
                strcpy(empleado[j+1].nombre,nombre);

                remp= empleado[j].edad;
                empleado[j].edad = empleado[j+1].edad;
                empleado[j+1].edad= remp;
             }
             }
             }
        gotoxy(10,5);printf("Lista ordenada de manera descendente en respecto al salario de los empleados");
        lineas=0;
        for(i=0;i < espacios; i++){
             gotoxy(10,9+lineas);printf("Nombre");
                    gotoxy(40,9+lineas);printf("Edad");
                    gotoxy(50,9+lineas);printf("Salario");
                    gotoxy(10,10+lineas);printf(": %s", empleado[i].nombre);
                    gotoxy(40,10+lineas);printf(": %i", empleado[i].edad);
                    gotoxy(50,10+lineas);printf(": %.2f", empleado[i].salario);
                    lineas=lineas+3;
        }
         gotoxy(10,12+lineas);printf("Introduzca cualquier letra para volver al menu");
            gotoxy(10,13+lineas);printf(": ");
            fflush(stdin);
            scanf("%c", &resp);

   }
}


}
return 0 ;}
