#include <iostream>
#include <stdlib.h>
/*
variables
*/
using namespace std;
int main()
{
system("clear");
cout<<"========================================================================================="<<endl;
cout<<"                                 iPresident                                   "<<endl;
cout<<"\n"<<endl;
cout<<"En este 'juego' te pondrás en la posición del Presidente de tu país y tendrás"<<endl;
cout<<"que decidir qué política económica tomar en tu país. Tus objetivos son: "<<endl;
cout<<"\n"<<endl;
cout<<"1.Asegurar que el Estado recibe el mayor ingreso posible para poder"<<endl;
cout<<"disponer del suficiente dinero para realizar políticas en pro del pueblo"<<endl;
cout<<"\n"<<endl;
cout<<"2.Asegurarte de que ninguno de los 3 jugadores muere."<<endl;
cout<<"\n"<<endl;
cout<<"Así pues tenemos 3 políticas económicas distintas:"<<endl;
cout<<"1.Sin pago de impuestos, sólo lo que genera cada jugador y lo que gasta en comida"<<endl;
cout<<"2.Con reparto de la riqueza y fijación del SMI además de la subida de salarios"<<endl;
cout<<"3.Con reparto de riqueza, fijación del SMI, sueldo igual que en política 2"<<endl;
cout<<"Y una subida del IRPF a rentas altas"<<endl;
cout<<"========================================================================================="<<endl;
float riquezaA=6, riquezaB=0, riquezaC=0;
float estado=12;
//riqueza del estado
float rEstado;
int nivel=0;
cout << "Introduce el nivel político: " ;
cin>>nivel;
cout<< "Nivel seleccionado: " << nivel<<endl;
//if
        if (nivel==1){
        //sin impuestos, sólo lo que genera cada trabajador y el porcentaje de la comida. 21% iva
        double rpc,sueldoA=2,sueldoB=1.5,sueldoC=1,beneficiosA=sueldoA*2,beneficiosB=sueldoB*2,beneficiosC=sueldoC*2;
        rpc=riquezaA/3;
        int iva=21,smi=1,mes=1;
        double comida=1, precio;
        precio=comida+(comida*21)/100;
        //cout<<"El precio de la comida es de: "<<precio<<endl;
        cout<<"*****************************************************************"<<endl;
        cout<<"                         Info del Estado                         "<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"RPC: "<<rpc<<endl;
        cout<<"Sueldo A: "<<sueldoA<<"€"<<endl;
        cout<<"Sueldo B: "<<sueldoB<<"€"<<endl;
        cout<<"Sueldo C: "<<sueldoC<<"€"<<endl;
        cout<<"Beneficios al Estado de A: "<<beneficiosA<<"€"<<endl;
        cout<<"Beneficios al Estado de B: "<<beneficiosB<<"€"<<endl;
        cout<<"Beneficios al Estado de C: "<<beneficiosC<<"€"<<endl;
        cout<<"Riqueza inicial de A: "<<riquezaA<<"€"<<endl;
        cout<<"Riqueza incial de B: "<<riquezaB<<"€"<<endl;
        cout<<"Riqueza inicial de C: "<<riquezaC<<"€"<<endl;
        cout<<"*****************************************************************"<<endl;
        for (mes=1;mes<=12;mes++)
        {

        cout<<"Mes "<<mes<<endl;
        cout<<"================================================================"<<endl;
        system("sleep 2");
        cout<<"Riqueza jugador A en mes "<<mes<<": "<<(riquezaA=riquezaA+sueldoA-precio)<<"€"<<endl;
        cout<<"Riqueza jugador B en mes "<<mes<<": "<<(riquezaB=riquezaB+sueldoB-precio)<<"€"<<endl;
        cout<<"Riqueza jugador C en mes "<<mes<<": "<<(riquezaC=riquezaC+sueldoC-precio)<<"€"<<endl;

 if (riquezaA<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador A ha muerto"<<endl;


                }//fin if A
 if (riquezaB<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador B ha muerto"<<endl;


                }//fin if B
if (riquezaC<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador C ha muerto"<<endl;
                        float sueldos;
                        sueldos=sueldoA+sueldoB;
                        rEstado=(rEstado+estado+((comida*21)/100)+beneficiosA+beneficiosB)-sueldos;
                        cout<<"Riqueza Estado: "<<rEstado<<"€"<<endl;


                }//fin if C
//cout<<"Riqueza Estado: "<<rEstado<<"€"<<endl;

//              cout<<"estado: "<<estado<<endl;
        }//fin for

}//fin fi nivel1

/*
Nivel 2: Un nivel en el que se realizará el reparto de la riqueza inicial
         Se establece un SMI que se debe cumplir
*/
        if(nivel==2){
        /* Medidas económicas de este nivel
           SMI=2€ con recursos para garantizar que se cumple
           Reparto de riqueza
        */
        int mes;
        double smi=2,rpc,riquezaTotal,sobraA,sobraB,sobraC,quedaA,quedaB,quedaC;
        double sueldoA=6,sueldoB=4,sueldoC=2,beneficiosA=sueldoA*2,beneficiosB=sueldoB*2,beneficiosC=sueldoC*2,iva=21,comida=1,precio;
        riquezaTotal=riquezaA+riquezaB+riquezaC;
        rpc=riquezaTotal/3;
        quedaA=rpc-riquezaA;quedaB=rpc-riquezaB;quedaC=rpc-riquezaC;
        precio=comida+(comida*21)/100;
        if (riquezaA>rpc){
        sobraA=riquezaA-rpc;
        cout<<"Se le quita al jugador A: "<<sobraA<<endl;
        }//fin ifcomprobacion riquezaA
        if (riquezaB>rpc){
        sobraB=riquezaB-rpc;
        cout<<"Se le quita al jugador B: "<<sobraB<<endl;
        }//fin if comprobacion riquezaB
        if (riquezaC>rpc){
        sobraC=riquezaC-rpc;
        cout<<"Se le quita al jugador C: "<<sobraC<<endl;
        }//fin if comprobación riquezaC
        if (riquezaA<rpc){
        riquezaA=riquezaA+quedaA;
//      cout<<"riqueza jugador A tras el reparto: "<<riquezaA<<endl;
        }//fin if reparto A
        if (riquezaB<rpc){
        riquezaB=riquezaB+quedaB;
//      cout<<"riqueza jugador B tras el reparto: "<<riquezaB<<endl;
        }//fin if repartoB
        if (riquezaC<rpc){
        riquezaC=riquezaC+quedaC;
//      cout<<"riqueza jugador C tras el reparto: "<<riquezaC<<endl;
        }//fin if tras reparto C
cout<<"riqueza jugador A tras el reparto: "<<(riquezaA=riquezaA-sobraA)<<endl;
cout<<"riqueza jugador B tras el reparto: "<<riquezaB<<endl;
cout<<"riqueza jugador C tras el reparto: "<<riquezaC<<endl;
for (int mes=1;mes<=12;mes++){
 cout<<"Mes "<<mes<<endl;
        cout<<"================================================================"<<endl;
        system("sleep 2");
        cout<<"Riqueza jugador A en mes "<<mes<<": "<<(riquezaA=riquezaA+sueldoA-precio)<<"€"<<endl;
        cout<<"Riqueza jugador B en mes "<<mes<<": "<<(riquezaB=riquezaB+sueldoB-precio)<<"€"<<endl;
        cout<<"Riqueza jugador C en mes "<<mes<<": "<<(riquezaC=riquezaC+sueldoC-precio)<<"€"<<endl;
        double sueldos=sueldoA+sueldoB+sueldoC;
        rEstado=(rEstado+estado+((comida*21)/100)+beneficiosA+beneficiosB+beneficiosC)-sueldos;
        cout<<"Riqueza del Estado: "<<mes<<": "<<rEstado<<"€"<<endl;
 if (riquezaA<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador A ha muerto"<<endl;


                }//fin if A
 if (riquezaB<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador B ha muerto"<<endl;


                }//fin if B
if (riquezaC<=0)
                {
//              cout<<"menor 0"<<endl;
                        cout<<"Jugador C ha muerto"<<endl;
                        float sueldos;
                        sueldos=sueldoA+sueldoB;
                        rEstado=(rEstado+estado+((comida*21)/100)+beneficiosA+beneficiosB)-sueldos;
                        cout<<"Riqueza Estado: "<<rEstado<<"€"<<endl;


                }//fin if C

}//fin for nivel 2
}//fin nivel=2
/* Nivel político 3
   *Este nivel reparte la riqueza igualmente
   *IRPF más alto a rentas más altas.
                -   >25€====>12.5%
                -   >=12<=25=======>7%
                -   <12=======>1.5%
   *SMI igual
*/

        if (nivel==3){
        double smi=2,rpc,riquezaTotal,sobraA,sobraB,sobraC,quedaA,quedaB,quedaC,irpf;
        double sueldoA=6,sueldoB=4,sueldoC=2,beneficiosA=sueldoA*2,beneficiosB=sueldoB*2,beneficiosC=sueldoC*2,iva=21,comida=1,precio;
        riquezaTotal=riquezaA+riquezaB+riquezaC;
        rpc=riquezaTotal/3;
        quedaA=rpc-riquezaA;quedaB=rpc-riquezaB;quedaC=rpc-riquezaC;
        precio=comida+(comida*21)/100;
         if (riquezaA>rpc){
        sobraA=riquezaA-rpc;
        cout<<"Se le quita al jugador A: "<<sobraA<<endl;
        }//fin ifcomprobacion riquezaA
        if (riquezaB>rpc){
        sobraB=riquezaB-rpc;
        cout<<"Se le quita al jugador B: "<<sobraB<<endl;
        }//fin if comprobacion riquezaB
        if (riquezaC>rpc){
        sobraC=riquezaC-rpc;
        cout<<"Se le quita al jugador C: "<<sobraC<<endl;
        }//fin if comprobación riquezaC
        if (riquezaA<rpc){
        riquezaA=riquezaA+quedaA;
//      cout<<"riqueza jugador A tras el reparto: "<<riquezaA<<endl;
        }//fin if reparto A
        if (riquezaB<rpc){
        riquezaB=riquezaB+quedaB;
//      cout<<"riqueza jugador B tras el reparto: "<<riquezaB<<endl;
        }//fin if repartoB
        if (riquezaC<rpc){
        riquezaC=riquezaC+quedaC;
//      cout<<"riqueza jugador C tras el reparto: "<<riquezaC<<endl;
        }//fin if tras reparto C
cout<<"riqueza jugador A tras el reparto: "<<(riquezaA=riquezaA-sobraA)<<endl;
cout<<"riqueza jugador B tras el reparto: "<<riquezaB<<endl;
cout<<"riqueza jugador C tras el reparto: "<<riquezaC<<endl;
int mes=1;
if (sueldoA>=5){
irpf=(sueldoA*50)/100;
sueldoA=sueldoA-irpf;
//cout<<"50 A: "<<sueldoA<<endl;
//mes=mes+1;
}//sueldoA 50
else if (sueldoA>2){
        if (sueldoA<=4){
irpf=(sueldoA*25)/100;
sueldoA=sueldoA-irpf;
//cout<<"A: "<<sueldoA<<endl;

}//if anidado
//cout<<"25 A: "<<sueldoA<<endl;
}//sueldoA 25
else if (sueldoA<=2){
irpf=(sueldoA*12.5)/100;
sueldoA=sueldoA-irpf;
//cout<<"12.5 A: "<<sueldoA<<endl;

}//sueldoA 12.5

//sueldo B
if (sueldoB>=5){
irpf=(sueldoB*50)/100;
sueldoB=sueldoB-irpf;
//cout<<"50 B: "<<sueldoB<<endl;
}//sueldoB 50
else if (sueldoB>2){
        if(sueldoB<=4){
irpf=(sueldoB*25)/100;
sueldoB=sueldoB-irpf;}
//cout<<"25 B: "<<sueldoB<<endl;
}//sueldoB 25
else if (sueldoB<=2){
irpf=(sueldoB*12.5)/100;
sueldoB=sueldoB-irpf;
//cout<<"12.5 B: "<<sueldoB<<endl;
}//sueldoB 12.5

if (sueldoC>=5){
irpf=(sueldoC*50)/100;
sueldoC=sueldoC-irpf;
//cout<<"50 C: "<<sueldoC<<endl;
}//sueldoC 50
else if (sueldoC>2){
        if(sueldoC<=4){
irpf=(sueldoC*25)/100;
sueldoC=sueldoC-irpf;}
//cout<<"25 C: "<<sueldoC<<endl;
}//sueldoC 25
else if (sueldoC<=2){
irpf=(sueldoC*12.5)/100;
sueldoC=sueldoC-irpf;
//cout<<"12.5 B: "<<sueldoC<<endl;
}//sueldoC 12.5

for (int mes=1;mes<=12;mes++){
 cout<<"Mes "<<mes<<endl;
        cout<<"================================================================"<<endl;
        system("sleep 2");
riquezaA=riquezaA+sueldoA-precio;
riquezaB=riquezaB+sueldoB-precio;
riquezaC=riquezaC+sueldoC-precio;
double sueldos=sueldoA+sueldoB+sueldoC;
rEstado=(rEstado+estado+((comida*21)/100)+beneficiosA+beneficiosB+beneficiosC+(irpf*3))-sueldos;
/* riquezaA=riquezaA+((rEstado*20)/100);
riquezaB=riquezaB+((rEstado*20)/100);
riquezaC=riquezaC+((rEstado*20)/100);
rEstado=rEstado-(3*(rEstado*20)/100);
rpc=(riquezaA+riquezaB+riquezaC)/3;
*/
        cout<<"Riqueza jugador A en mes "<<mes<<": "<<riquezaA<<"€"<<" con sueldo: "<<sueldoA<<"€"<<endl;
        cout<<"Riqueza jugador B en mes "<<mes<<": "<<riquezaB<<"€"<<" con sueldo: "<<sueldoB<<"€"<<endl;
        cout<<"Riqueza jugador C en mes "<<mes<<": "<<riquezaC<<"€"<<" con sueldo: "<<sueldoC<<"€"<<endl;
        cout<<"Riqueza del Estado en mes "<<mes<<": "<<rEstado<<"€"<<endl;


}//fin for
}//fin if n3
if(nivel>=4){
cout<<"Opción "<<nivel<<" no contemplada, por favor seleccione una opción válida"<<endl;
}
return 0;
}
