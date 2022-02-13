#include <stdio.h>
int Vysledny_cashP = 0;  //hodiny
int Vysledny_casmP = 0;  //minuty
float rp = 1.6; //rychlost vlaku Praha
int WtimeP = 600;  //celkovy cas
float CilPr = 200; //200 km

float rb = 1.3; //rychlost vlaku Brno
int Wtime = 570; //
int Vysledny_cash = 0; //hod
int Vysledny_casm = 0; //min
float CilBr = 200; //200km

int Cassetkanih = 0;
int Cassetkanim = 0;
int Vzdalenost = 0;
int main() 
{

for (int i = 0; i <= 200; i++)
    {
    
                      for (int i = 0; i <= 100; i++){
                        if (CilPr <= 0){break;}
                        WtimeP ++; //Zvyseni casu o minutu
                        CilPr = CilPr - rp;
                        break;
                        
                      }

                                for (int i = 0; i <= 100; i++){
                                if (CilBr <= 0){break;}
                                Wtime ++; // Zvyseni casu o minutu
                                CilBr = CilBr - rb;
                                break;
                                                             
                                }                              
        
                      if(CilPr + CilBr <=200){
                          if (CilPr + CilBr >=199){
                      Cassetkanim = WtimeP;
                      Vzdalenost = CilPr;
                      Cassetkanim = WtimeP %60;
                      Cassetkanih = (WtimeP - Cassetkanim) / 60;
                      }
                                            }

      
        if(CilBr + CilPr <= 0){
          break;
          }
    }
    
    
    

    //řešení dojezdu
    
    Vysledny_casm = Wtime %60;
    Vysledny_cash = (Wtime - Vysledny_casm) / 60;

    Vysledny_casmP = WtimeP %60;
    Vysledny_cashP = (WtimeP - Vysledny_casmP) / 60;
   
    printf("\n\n\n\nVlak z Brna dojede v %d:", Vysledny_cash);
    if (Vysledny_casm < 10) printf("0");
    printf("%d do Prahy.\n", Vysledny_casm); 

    printf("Vlak z Prahy dojede v %d:", Vysledny_cashP);
    if (Vysledny_casmP < 10) printf("0");
    printf("%d do Brna.\n", Vysledny_casmP);
   


    //řešení setkání   
    
    
    printf("Vlak z Brna se setka s vlakem z Prahy v %d:", Cassetkanih);
    if (Cassetkanim < 10) printf("0");
    printf("%d.\n", Cassetkanim); 

       printf("Setkaji se ve vzdalenosti %d Km od Brna a", Vzdalenost);
    Vzdalenost = 200 - Vzdalenost;
    printf(" ve vzdalenosti %d Km od Prahy.\n\n\n\n", Vzdalenost);
    return 0;

}





/* 
rychlost vlaku Brno 78 (1,3)
start vlaku Brno 9:30  (570)
200 km

rychlost vlaku Praha 96 (1,6)
start vlaku Praha 10:00 (600)
200 km
*/
