#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10


int main(){

int op,op2,cima,i, aux1, aux2, aux3, multi, sum, res, cupos, hora, minuto, hora1, minuto1, frente, fin;
int pila[TAM];
int *cola;

op=0;
while(op==0||op==1||op==2||op==3){
    system("cls");
    system("color 3F");
    printf("\n\n***************************************************\n");
    printf("*********************Men%c**************************\n",163);
    printf("***************************************************\n");


    printf("\n1.Presentaci%cn\n",162);
    printf("2.Pila\n");
    printf("3.Cola\n");
    printf("4.Salir\n\n");

    scanf("%i",&op);

    //PRESENTACION
    if(op==1){
        system("cls");
        printf("\n\t\t\tUniversidad Tecnol%cgica de Panam%c",162,160);
        printf("\n\t\tFacultad de Ingenier%ca de Sistemas Computacionales",161);
        printf("\n\t\t   Lic. En Ingenier%ca de Sistemas y Computaci%cn",161,162);
        printf("\n\t\tDepartamento de Computaci%cn y Simulaci%cn de Sistemas",162,162);
        printf("\n\n\n\t\t\t   Estructuras De Datos 1",162);
        printf("\n\n\t\t\t\tProyecto N%c2",248);
        printf("\n\t\t\t\"Estructura De Datos Lineales\"",160);
        printf("\n\n\n\t\t\t\tIntegrantes:");
        printf("\n\t\t\t   Gabriel Castillo 8-983-725");
        printf("\n\t\t\t  Roderic Mart%cnez 8-993-2273",161);
        printf("\n\t\t\t    Andrea Ram%crez 8-960-823",161);
        printf("\n\n\n\t\t\t\tGrupo: 1IL122");
        printf("\n\n\n");
        printf("Explicaci%cn del programa: \nEste programa consta de un men%c de 4 opciones. La primera opci%cn se encuentra esta pagina de presentaci%cn , tal como se muestra arriba. La segunda opci%cn muestra la operaci%cn de pila, en la cual se pueden almacenar 10 elementos, y se pueden ingresar valores de tipo enteros hasta que uno desee o hasta llenar la pila; teniendo esto se toman 2 valores de la pila y dependiendo si es par o impar se hacen cierto tipos de operaciones; para esto se realizaron condiciones en dado caso ambos valores sean pares, impares o combinacion de ambas. Si ambos son pares se suman; si ambos son impares se restan; o si uno es par y el otro impar, se multiplican. En la tercera opción tenemos una operacion de cola simple que simula la fila de atencion de pacientes en una clinica, en el cual el usuario debe establecer un horario de atencion y si dentro de ese horario hay cupos (la cantidad de cupos lo establece el usuario). Teniendo esto se muestra otro menú que tiene 3 opciones, uno para atender al paciente, otro para ingresar al paciente a la fila y otro para salir. En tal caso la cola quede totalmente vacia, se imprimira un mensaje que dice: Fin de la atencion, y en tal caso el usuario trate de ingresar otro paciente a la fila pero la cola ya no tiene mas espacio, se imprimira un mensaje que dice: No hay Cupo, ya que los cupos es la cantidad maxima de la cola. La ultima opción del menu principal es para salir del programa y terminar.\n",162,163,162,162,162,162);

        system("pause");

    }
    //BLOQUE DE LA OPCION 1 PILAS
    if(op==2){
        op2=0;
        cima=0;
        sum=0;
        res=0;
        multi=0;
        while(op2==0||op2==1||op2==2){
            system("cls");
            printf("\n\n***************************************************\n");
            printf("***************Men%c de operaciones*****************\n",163);
            printf("***************************************************\n");


            printf("\n1.Insertar\n",162);
            printf("2.Eliminar\n");
            printf("3.Salir\n\n");
            scanf("%i",&op2);
                if(op2==1){
                    if(cima==TAM){
                        printf("\nHubo un error de desbordamiento.\n");
                    }
                    else{
                        printf("\nIntroduce el n%cmero a insertar:\n",163);
                        scanf("%i",&pila[cima]);
                        cima=cima+1;
                    }

                    printf("El status de la pila: \n\n");
                    for(i=0;i<cima; i++){
                        printf("%i \n",pila[i]);
                    }
                    printf("\nCima:%i\n",cima);
                    system("pause");

                }
                else if(op2==2){
                    if(cima==0){
                        printf("Hubo un error de subdesbordamiento.");
                    }
                    else{
                        pila[cima]='\0';
                        cima=cima-1;
                    }

                    printf("El status de la pila: \n\n");
                    for(i=0;i<cima; i++){
                        printf("%i \n",pila[i]);
                    }
                    printf("\nCima:%i\n",cima);

                    /*
                    printf("Prueba:");
                    printf("%i",pila[cima+1]);
                    */
                    system("pause");

                }else{
                printf("\nSaliendo...\n\n");
                }
        }

        printf("El status de la pila: \n\n");
        for(i=0;i<cima; i++){
            printf("%i \n",pila[i]);
            }
        printf("\nCima:%i\n",cima);

        while(cima!=0&&cima!=1){

            if(pila[cima-1]%2==0&&pila[cima-2]%2==0){
                aux1=pila[cima-1];
                aux2=pila[cima-2];

                aux3=aux2+aux1;


                pila[cima-2]=aux3;
                pila[cima-1]='\0';
                /*
                printf("El valor de auxiliar1: %i \n ",aux1);
                printf("El valor de auxiliar2: %i \n ",aux2);
                printf("El valor de auxiliar3: %i \n ",aux3);
                printf("El valor de Pila[cima]: %i \n ",pila[cima-1]);
                printf("El valor de Pila[cima-1]: %i \n ",pila[cima-2]);
                */
                sum=sum+1;
                cima=cima-1;

                printf("El status de la pila: \n\n");
                    for(i=0;i<cima; i++){
                        printf("%i \n",pila[i]);
                    }
                    printf("\nCima:%i\n",cima);
            }
            else if(pila[cima-1]%2!=0&&pila[cima-2]%2!=0){
                aux1=pila[cima-1];
                aux2=pila[cima-2];

                aux3=aux2-aux1;

                pila[cima-2]=aux3;
                pila[cima-1]='\0';
                /*
                printf("El valor de auxiliar1: %i \n ",aux1);
                printf("El valor de auxiliar2: %i \n ",aux2);
                printf("El valor de auxiliar3: %i \n ",aux3);
                printf("El valor de Pila[cima]: %i \n ",pila[cima-1]);
                printf("El valor de Pila[cima-1]: %i \n ",pila[cima-2]);
                */

                res=res+1;
                cima=cima-1;

                printf("El status de la pila: \n\n");
                    for(i=0;i<cima; i++){
                        printf("%i \n",pila[i]);
                    }
                    printf("\nCima:%i\n",cima);

            }
            else{
                aux1=pila[cima-1];
                aux2=pila[cima-2];

                aux3=aux2*aux1;

                pila[cima-2]=aux3;
                pila[cima-1]='\0';

                /*
                printf("El valor de auxiliar1: %i \n ",aux1);
                printf("El valor de auxiliar2: %i \n ",aux2);
                printf("El valor de auxiliar3: %i \n ",aux3);
                printf("El valor de Pila[cima]: %i \n ",pila[cima-1]);
                printf("El valor de Pila[cima-1]: %i \n ",pila[cima-2]);
                */
                multi=multi+1;
                cima=cima-1;

                printf("El status de la pila: \n\n");
                    for(i=0;i<cima; i++){
                        printf("%i \n",pila[i]);
                    }
                    printf("\nCima:%i\n",cima);

            }

        }
        if(cima>0){
            printf("\nEl resultado de las operaciones hechas sobre la pila da como resultado: %i \n",pila[cima-1]);
        }else{
            printf("\nEl resultado de las operaciones hechas sobre la pila da como resultado: %i \n",0);
        }

        printf("\nEl n%cmero de sumas fueron: %i",163,sum);
        printf("\nEl n%cmero de restas fueron: %i",163,res);
        printf("\nEl n%cmero de multiplicaciones fueron: %i\n",163,multi);
        printf("Cima: %i \n",cima);

        system("pause");
    }
    //BLOQUE DE LA OPCION 3 DE COLAS
    if(op==3){
        op2=0;
        frente=0;
        fin=0;
        system("cls");

        printf("\n%ccu%cntos cupos hay en la cl%cnica %c\n",168,160,161,63);
        scanf("%i",&cupos);
        cola=(int*)malloc(cupos*sizeof(int));


        printf("Ingrese el horario de atenci%cn\n",162);
        printf("Hora: \n");
        scanf("%i",&hora);
        while(hora<0||hora>=24){
            printf("Introduce una hora v%clida: \n",160);
            scanf("%i",&hora);
        }
        printf("Minutos: \n");
        scanf("%i",&minuto);

        while(minuto<0||minuto>=60){
            printf("Introduce minutos v%clida: \n",160);
            scanf("%i",&minuto);
        }

        while(op2==0||op2==1||op2==2){
            system("cls");
            printf("\nMen%c de opciones\n",163);
            printf("1.Atender paciente.\n");
            printf("2.Ingresar un paciente.\n");
            printf("3.Salir.\n");
            scanf("%i",&op2);
            if(op2==1){
                if(fin==0||frente==cupos||frente==fin){
                    printf("Fin de atenci%cn.\n",162);
                    frente=0;
                    fin=0;

                    printf("Status de la cola: \n");
                            for(i=0;i<fin;i++){
                                printf("[%i]",cola[i]);
                            }

                    printf("\nLa posicion del ultimo paciente: %i",fin);
                    printf("\nLa posicion del paciente en espera: %i\n",frente);


                }
                else{
                        printf("Se atendio al paciente con exito.\n");
                        cola[frente]=0;
                        frente=frente+1;

                        printf("Status de la cola: \n");
                            for(i=0;i<fin;i++){
                                printf("[%i]",cola[i]);
                            }

                        printf("\nLa posicion del ultimo paciente: %i",fin);
                        printf("\nLa posicion del paciente en espera: %i\n",frente);

                }
                }
            if(op2==2){
              printf("Introduce tu tiempo de llegada: \n");
                printf("Hora: \n");
                scanf("%i",&hora1);
                while(hora1<0||hora1>=24){
                    printf("Introduce una hora v%clida: \n",160);
                    scanf("%i",&hora1);
                }

                printf("Minutos: ");
                scanf("%i",&minuto1);

                while(minuto1<0||minuto1>=60){
                    printf("Introduce minutos v%clida: \n",160);
                    scanf("%i",&minuto1);
                }

                    if(hora1<hora){
                            if(op2==2){

                                if(fin==cupos){
                                    printf("No hay cupos. Estamos en la CSS que esperas?\n");

                                    printf("Status de la cola: \n");
                                    for(i=0;i<fin;i++){
                                        printf("[%i]",cola[i]);
                                    }

                                    printf("\nLa posicion del ultimo paciente: %i",fin);
                                    printf("\nLa posicion del paciente en espera: %i\n",frente);

                                }
                                else{
                                    cola[fin]=fin+1;
                                    printf("Si hay cupo.\n");
                                    fin=fin+1;

                                    printf("Status de la cola: \n");
                                    for(i=0;i<fin;i++){
                                        printf("[%i]",cola[i]);
                                    }

                                    printf("\nLa posicion del ultimo paciente: %i",fin);
                                    printf("\nLa posicion del paciente en espera: %i\n",frente);


                                }

                        }
                }
                else if(hora1>hora){
                    printf("\nNO ESTOY EN HORARIO, MIRA TU RELOJ.\n");
                }
                if(hora1==hora){
                        if(minuto1<=minuto){
                            if(op2==2){

                                if(fin==cupos){
                                    printf("No hay cupos. Estamos en la CSS que esperas?\n");

                                    printf("Status de la cola: \n");
                                    for(i=0;i<fin;i++){
                                        printf("[%i]",cola[i]);
                                    }

                                    printf("\nLa posicion del ultimo paciente: %i",fin);
                                    printf("\nLa posicion del paciente en espera: %i\n",frente);

                                }
                                else{
                                    cola[fin]=fin+1;
                                    printf("Si hay cupo.\n");
                                    fin=fin+1;

                                    printf("Status de la cola: \n");
                                    for(i=0;i<fin;i++){
                                        printf("[%i]",cola[i]);
                                    }

                                    printf("\nLa posicion del ultimo paciente: %i",fin);
                                    printf("\nLa posicion del paciente en espera: %i\n",frente);


                                }

                        }
                    }else{
                        printf("\nNO ESTOY EN HORARIO, MIRA TU RELOJ.\n");
                    }
                }


            }
               /* if(frente!=fin){
                    printf("\nLa posicion del ultimo paciente: %i",fin);
                    printf("\nLa posicion del paciente en espera: %i\n",frente);
                }*/




            system("pause");

        }

    free(cola);
    }

}


return 0;
}

