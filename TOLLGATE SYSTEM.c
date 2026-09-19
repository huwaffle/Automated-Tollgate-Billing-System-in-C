//COMPILED AND ORGANIZED BY ALLAN REY ROSCO & CARLOS ALCANTARA III
//CODE BLOCKS MADE BY ROSCO, PIANGCO, ALCANTARA, ENCARNADO
#include <stdio.h>
int bal1=0, bal2=0, tf1, tf2;
void tollcalcu1(int* bal1, int tf1){
     if(*bal1>=tf1){
                 *bal1-=tf1;
                 printf("\nToll fee: Php %d\n\n", tf1);
                 printf("Autosweep remaining balance: Php %d\n\n", *bal1);}
     else {printf("\nInsufficient balance\n");}
}
void tollcalcu2(int* bal2, int tf2){
     if(*bal2>=tf2){
                 *bal2-=tf2;
                 printf("\nToll fee: Php %d\n\n", tf2);
                 printf("Easytrip remaining balance: Php %d\n\n", *bal2);}
     else {printf("\nInsufficient balance\n");}
}
void skyway(int* bal1){
int g, a;
char boud, cnfrm, cnfrmd; //ROSCO
    while(1){
    printf("-----SKYWAY STAGE----- 3\nWhere are you headed?\nA...Northbound\nB...Southbound\n\n");
    scanf(" %c", &boud);
    printf("\nType 'x' to confirm\n\n");
    scanf(" %c", &cnfrm);
    if (cnfrm=='x'){
                     break;
                     } else {
                          system("cls");
                          printf("Invalid input. Returned.");
                          continue;
                          }
     }
    boud=tolower(boud);
            switch(boud){ 
            case 'a': 
                 while(1){
                 putchar('\n');
                 printf("Enter entry point: \n1...Buendia\n2...Plaza Azul/Nagtahan\n3...E. Rodriguez\n4...Quezon Avenue\n\n");
                 scanf("%d", &g);
                  printf("\nType 'x' to confirm\n\n");
                  scanf(" %c", &cnfrmd);
                  if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
                          }       
                         switch(g){
                         case 1:
                         while(1){
                         char cnfrmd;          
                                 putchar('\n');
                                 printf("Enter exit point: \n1...Quirino\n2...Plaza Azul/Nagtahan\n3...Quezon Avenue\n"
                                 "4...A. Bonifacio\n5...North Luzon Expressway (NLEX)\n\n");
                                 scanf("%d", &a);
                                 printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                                 switch(a){
                                 case 1: tollcalcu1(bal1, 105); break;
                                 case 2: tollcalcu1(bal1, 105); break;
                                 case 3: tollcalcu1(bal1, 264); break;
                                 case 4: tollcalcu1(bal1, 264); break;
                                 case 5: tollcalcu1(bal1, 264); break;
                                 default: printf("Invalid input entered.\n\n");        
                                 }; break; 
                         case 2:
                         while(1){
                         char cnfrmd; 
                                 putchar('\n');
                                 printf("Enter exit point: \n1...Quezon Avenue\n2...A. Bonifacio\n"
                                 "3...North Luzon Expressway (NLEX)\n\n");
                                 scanf("%d", &a);
                                 printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                                 switch(a){
                                 case 1: tollcalcu1(bal1, 264); break;
                                 case 2: tollcalcu1(bal1, 264); break;
                                 case 3: tollcalcu1(bal1, 264); break;
                                 default: printf("Invalid input entered.\n");
                                 }; break;         
                         case 3: 
                         case 4:
                              putchar('\n');
                              printf("No tollfee, toll will be at North Luzon Expressway (NLEX)-Balintawak tollplaza\n\n");break;
                         default:printf("invalid input entered.\n\n"); 
            }; break;	
        	case 'b': 
                 while(1){
                 putchar('\n');
                 printf("Enter entry point: \n1...North Luzon Expressway (NLEX)\n2...A. Bonifacio\n3...Quezon Avenue\n"
                 "4...Plaza Dilao\n\n");
                 scanf("%d", &g);
                 printf("\nType 'x' to confirm\n\n");
                 scanf(" %c", &cnfrmd);
                 if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
                          }
                        switch(g){
                        case 1: 
                        case 2: while(1){
                                char cnfrmd;
                                printf("\nEnter exit point: \n1...Quezon Avenue\n2...E. Rodriguez\n3...Plaza Azul/Nagtahan\n4...Buendia\n\n");
                                scanf("%d", &a);
                                printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                                switch(a){
                                case 1: tollcalcu1(bal1, 129); break;
                                case 2: tollcalcu1(bal1, 129); break;
                                case 3: tollcalcu1(bal1, 264); break;
                                case 4: tollcalcu1(bal1, 264); break;
                                default: printf("Invalid input entered\n\n");         
                                }; break;
                        case 3: while(1){
                                char cnfrmd;
                                printf("Enter exit point: \n1...E. Rodriguez\n2...Plaza Azul/Nagtahan\n3...Buendia\n\n");
                                scanf("%d", &a);
                                printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                                switch(a){
                                case 1: tollcalcu1(bal1, 129); break;
                                case 2: tollcalcu1(bal1, 264); break;
                                case 3: tollcalcu1(bal1, 264); break;
                                default: printf("Invalid input entered\n\n");
                                }; break;
                        case 4: printf("Buendia exit only. \n"); tollcalcu1(bal1, 264);break;       
                        default: printf("Invalid input entered. \n\n");
                        };break;
            default: printf("Invalid input entered.\n\n");
            }
}
void naiax(int* bal1){
int jj, kk; 
char cnfrmd; //ROSCO
     while(1){
     printf("-----NAIAX-----\nEnter entry point: \n1...Andrews Avenue\n2...NAIA Terminal 1\n3...NAIA Terminal 2\n4...NAIA Terminal 3\n5...Entertainment City\n6...Macapagal Boulevard\n7...Cavite Expressway (Cavitex)\n\n");
     scanf("%d", &jj);
     printf("\nType 'x' to confirm\n\n");
     scanf(" %c", &cnfrmd);
     if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
     }
           switch(jj){
           case 1: tollcalcu1(bal1, 35); break;
           case 2: tollcalcu1(bal1, 35); break;
           case 3: tollcalcu1(bal1, 35); break;
                   while(1){
                   char cnfrmd;
                   printf("\nEnter exit point: \n1...Skyway\n2...Andrews Avenue\n3...Aurora Boulevard\n\n");
                   scanf("%d", &kk);
                   printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                   switch(kk){
                              case 1: tollcalcu1(bal1, 45); break;
                              case 2: tollcalcu1(bal1, 45); break;
                              case 3: tollcalcu1(bal1, 45); break;
                              default: printf("Invalid input entered.\n\n");
                              } break;
           case 4: 
                   while(1){
                   char cnfrmd;
                   printf("\nEnter exit point: \n1...NAIA Terminal 1\n2...NAIA Terminal 2\n3...NAIA Terminal 3\n4...Entertainment City\n5...Macapagal Boulevard\n6...Cavite Expressway (Cavitex)\n\n");
                   scanf("%d", &kk);
                   printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                   switch(kk){
                              case 1: tollcalcu1(bal1, 45); break;
                              case 2: tollcalcu1(bal1, 45); break;
                              case 3: tollcalcu1(bal1, 45); break;
                              case 4: tollcalcu1(bal1, 45); break;
                              case 5: tollcalcu1(bal1, 45); break;
                              case 6: tollcalcu1(bal1, 45); break;
                              default: printf("Invalid input entered.\n\n");
                              } break;
           case 5: 
           case 6: 
           case 7: 
                   while(1){
                   char cnfrmd;
                   printf("\nEnter exit point: \n1...Skyway\n2...Andrews Avenue\n3...Aurora Boulevard\n4...NAIA Terminal 1\n5...NAIA Terminal 2\n\n");
                   scanf("%d", &kk);
                   printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                   switch(kk){
                              case 1: tollcalcu1(bal1, 35); break;
                              case 2: tollcalcu1(bal1, 35); break;
                              case 3: tollcalcu1(bal1, 35); break;
                              case 4: tollcalcu1(bal1, 35); break;
                              case 5: tollcalcu1(bal1, 35); break;
                              default: printf("Invalid input entered.\n\n"); 
                              } break;
           default: printf("Invalid input entered.\n\n");
           }
}
void slex(int* bal1){
     // CASE 1 ROSCO & ENCARNADO
 int destination, exitpoint;
 char bod, cnfrm, cnfrmd;
 while(1){
   printf("-----Skyway-SLEX-MCX-----\nWhere are you headed?\nA...Northbound\nB...Southbound\n\n");
   scanf(" %c", &bod);
   bod=tolower(bod);
   printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrm);
   if (cnfrm=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.");
                          continue;
                          }
                   }
switch(bod){  
case 'a':
     
while(1){
    printf("\nEnter Entry Point\n"
           "1...Merville\n"
           "2...Bicutan\n"
           "3...Sucat\n"
           "4...Alabang\n"
           "5...Filinvest\n"
           "6...Muntinlupa-Cavite X'way\n"
           "7...Susana Heights\n"
           "8...San Pedro\n"
           "9...SouthWoods\n"
           "10...Carmona\n"
           "11...Mamplasan\n"
           "12...Sta. Rosa\n"
           "13...ABI/Greenfield\n"
           "14...Cabuyao\n"
           "15...Silangan\n"
           "16...Calamba\n"
           "17...Sto. Tomas\n\n");
        scanf("%d", &destination);
        printf("\nType 'x' to confirm\n\n");
        scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
    switch (destination) {
        case 1: //Merville//
            printf("\nMagallanes exit only.\n\n");
            tollcalcu1(bal1, 49);
            break;

        case 2: //Bicutan//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 72); break;
                case 2: tollcalcu1(bal1, 49); break;
                case 3: tollcalcu1(bal1, 49); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;

        case 3: //Sucat//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 118); break;
                case 2: tollcalcu1(bal1, 84); break;
                case 3: tollcalcu1(bal1, 84); break;
                case 4: tollcalcu1(bal1, 34); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;

        case 4: //Alabang//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 164); break;
                case 2: tollcalcu1(bal1, 118); break;
                case 3: tollcalcu1(bal1, 118); break;
                case 4: tollcalcu1(bal1, 69); break;
                case 5: tollcalcu1(bal1, 34); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 5: //Filinvest//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 169); break;
                case 2: tollcalcu1(bal1, 123); break;
                case 3: tollcalcu1(bal1, 123); break;
                case 4: tollcalcu1(bal1, 74); break;
                case 5: tollcalcu1(bal1, 39); break;
                case 6: tollcalcu1(bal1, 5); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
            case 6: //Muntinlupa-Cavite X'way//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 202); break;
                case 2: tollcalcu1(bal1, 156); break;
                case 3: tollcalcu1(bal1, 156); break;
                case 4: tollcalcu1(bal1, 107); break;
                case 5: tollcalcu1(bal1, 72); break;
                case 6: tollcalcu1(bal1, 38); break;
                case 7: tollcalcu1(bal1, 33); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
            case 7: //Susana Heights//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 183); break;
                case 2: tollcalcu1(bal1, 137); break;
                case 3: tollcalcu1(bal1, 137); break;
                case 4: tollcalcu1(bal1, 88); break;
                case 5: tollcalcu1(bal1, 53); break;
                case 6: tollcalcu1(bal1, 19); break;
                case 7: tollcalcu1(bal1, 14); break;
                case 8: tollcalcu1(bal1, 19); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
            case 8: //San Pedro//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 190); break;
                case 2: tollcalcu1(bal1, 144); break;
                case 3: tollcalcu1(bal1, 144); break;
                case 4: tollcalcu1(bal1, 95); break;
                case 5: tollcalcu1(bal1, 60); break;
                case 6: tollcalcu1(bal1, 26); break;
                case 7: tollcalcu1(bal1, 21); break;
                case 8: tollcalcu1(bal1, 25); break;
                case 9: tollcalcu1(bal1, 6); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 9: //Southwoods//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 206); break;
                case 2: tollcalcu1(bal1, 160); break;
                case 3: tollcalcu1(bal1, 160); break;
                case 4: tollcalcu1(bal1, 111); break;
                case 5: tollcalcu1(bal1, 76); break;
                case 6: tollcalcu1(bal1, 42); break;
                case 7: tollcalcu1(bal1, 37); break;
                case 8: tollcalcu1(bal1, 42); break;
                case 9: tollcalcu1(bal1, 23); break;
                case 10: tollcalcu1(bal1, 16); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 10: //Carmona//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 212); break;
                case 2: tollcalcu1(bal1, 166); break;
                case 3: tollcalcu1(bal1, 166); break;
                case 4: tollcalcu1(bal1, 117); break;
                case 5: tollcalcu1(bal1, 82); break;
                case 6: tollcalcu1(bal1, 48); break;
                case 7: tollcalcu1(bal1, 43); break;
                case 8: tollcalcu1(bal1, 48); break;
                case 9: tollcalcu1(bal1, 29); break;
                case 10: tollcalcu1(bal1, 22); break;
                case 11: tollcalcu1(bal1, 6); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 11: //Mamplasan//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 223); break;
                case 2: tollcalcu1(bal1, 177); break;
                case 3: tollcalcu1(bal1, 177); break;
                case 4: tollcalcu1(bal1, 128); break;
                case 5: tollcalcu1(bal1, 93); break;
                case 6: tollcalcu1(bal1, 59); break;
                case 7: tollcalcu1(bal1, 54); break;
                case 8: tollcalcu1(bal1, 59); break;
                case 9: tollcalcu1(bal1, 40); break;
                case 10: tollcalcu1(bal1, 33); break;
                case 11: tollcalcu1(bal1, 17); break;
                case 12:tollcalcu1(bal1, 11); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 12: //Sta. Rosa//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n"
                   "13...Mamplasan\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 232); break;
                case 2: tollcalcu1(bal1, 186); break;
                case 3: tollcalcu1(bal1, 186); break;
                case 4: tollcalcu1(bal1, 137); break;
                case 5: tollcalcu1(bal1, 102); break;
                case 6: tollcalcu1(bal1, 68); break;
                case 7: tollcalcu1(bal1, 63); break;
                case 8: tollcalcu1(bal1, 68); break;
                case 9: tollcalcu1(bal1, 49); break;
                case 10: tollcalcu1(bal1, 43); break;
                case 11: tollcalcu1(bal1, 27); break;
                case 12:tollcalcu1(bal1, 20); break;
                case 13:tollcalcu1(bal1, 10); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 13: //ABI/Greenfield//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n"
                   "13...Mamplasan\n"
                   "14...Sta. Rosa\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 246); break;
                case 2: tollcalcu1(bal1, 200); break;
                case 3: tollcalcu1(bal1, 200); break;
                case 4: tollcalcu1(bal1, 151); break;
                case 5: tollcalcu1(bal1, 116); break;
                case 6: tollcalcu1(bal1, 82); break;
                case 7: tollcalcu1(bal1, 77); break;
                case 8: tollcalcu1(bal1, 82); break;
                case 9: tollcalcu1(bal1, 63); break;
                case 10: tollcalcu1(bal1, 56); break;
                case 11: tollcalcu1(bal1, 40); break;
                case 12:tollcalcu1(bal1, 34); break;
                case 13:tollcalcu1(bal1, 23); break;
                case 14:tollcalcu1(bal1, 14); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
             case 14: //Cabuyao//
             while(1){
             char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n"
                   "13...Mamplasan\n"
                   "14...Sta. Rosa\n"
                   "15...ABI/ Greenfield\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 255); break;
                case 2: tollcalcu1(bal1, 209); break;
                case 3: tollcalcu1(bal1, 209); break;
                case 4: tollcalcu1(bal1, 160); break;
                case 5: tollcalcu1(bal1, 125); break;
                case 6: tollcalcu1(bal1, 91); break;
                case 7: tollcalcu1(bal1, 86); break;
                case 8: tollcalcu1(bal1, 90); break;
                case 9: tollcalcu1(bal1, 71); break;
                case 10: tollcalcu1(bal1, 65); break;
                case 11: tollcalcu1(bal1, 49); break;
                case 12:tollcalcu1(bal1, 43); break;
                case 13:tollcalcu1(bal1, 32); break;
                case 14:tollcalcu1(bal1, 22); break;
                case 15:tollcalcu1(bal1, 9); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
            case 15: //Silangan//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n"
                   "13...Mamplasan\n"
                   "14...Sta. Rosa\n"
                   "15...ABI/ Greenfield\n"
                   "16...Cabuyao\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 261); break;
                case 2: tollcalcu1(bal1, 215); break;
                case 3: tollcalcu1(bal1, 215); break;
                case 4: tollcalcu1(bal1, 166); break;
                case 5: tollcalcu1(bal1, 131); break;
                case 6: tollcalcu1(bal1, 97); break;
                case 7: tollcalcu1(bal1, 92); break;
                case 8: tollcalcu1(bal1, 96); break;
                case 9: tollcalcu1(bal1, 77); break;
                case 10: tollcalcu1(bal1, 71); break;
                case 11: tollcalcu1(bal1, 55); break;
                case 12:tollcalcu1(bal1, 49); break;
                case 13:tollcalcu1(bal1, 38); break;
                case 14:tollcalcu1(bal1, 28); break;
                case 15:tollcalcu1(bal1, 15); break;
                case 16:tollcalcu1(bal1, 6); break;
                default: printf("Invalid input entered\n\n"); break;
            }
            break;
            
            case 16: //Calamba//
            while(1){
            char cnfrmd;
            printf("\nEnter Exit Point:\n"
                   "1...Skyway\n"
                   "2...Magallanes\n"
                   "3...C-5\n"
                   "4...Bicutan\n"
                   "5...Sucat\n"
                   "6...Alabang\n"
                   "7...Filinvest\n"
                   "8...MCX\n"
                   "9...Susanna Heights\n"
                   "10...San Pedro\n"
                   "11...Southwoods\n"
                   "12...Carmona\n"
                   "13...Mamplasan\n"
                   "14...Sta. Rosa\n"
                   "15...ABI/ Greenfield\n"
                   "16...Cabuyao\n"
                   "17...Silangan\n\n");
            scanf("%d", &exitpoint);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            switch (exitpoint) {
                case 1: tollcalcu1(bal1, 280); break;
                case 2: tollcalcu1(bal1, 234); break;
                case 3: tollcalcu1(bal1, 234); break;
                case 4: tollcalcu1(bal1, 185); break;
                case 5: tollcalcu1(bal1, 150); break;
                case 6: tollcalcu1(bal1, 116); break;
                case 7: tollcalcu1(bal1, 111); break;
                case 8: tollcalcu1(bal1, 116); break;
                case 9: tollcalcu1(bal1, 97); break;
                case 10: tollcalcu1(bal1, 90); break;
                case 11: tollcalcu1(bal1, 74); break;
                case 12:tollcalcu1(bal1, 68); break;
                case 13:tollcalcu1(bal1, 57); break;
                case 14:tollcalcu1(bal1, 49); break;
                case 15:tollcalcu1(bal1, 34); break;
                case 16:tollcalcu1(bal1, 25); break;
                case 17:tollcalcu1(bal1, 19); break;
                default: printf("Invalid input entered\n\n"); break;
            }break;
             case 17: //Sto.Tomas//
            printf("Calamba Exit Only:\n\n");
            tollcalcu1(bal1, 31);
            break;
       default:
            printf("Invalid destination chosen\n\n");
            break;
            }; break;
case 'b':
     while(1){
     printf("\nEnter Entry Point:\n" //ROSCOOOOOO
      "1...Skyway\n"
      "2...Magallanes\n"
      "3...C-5\n"
      "4...Bicutan\n"
      "5...Sucat\n"
      "6...Alabang\n"
      "7...Filinvest\n"
      "8...MCX\n"
      "9...Susanna Heights\n"
      "10...San Pedro\n"
      "11...Southwoods\n"
      "12...Carmona\n"
      "13...Mamplasan\n"
      "14...Sta. Rosa\n"
      "15...ABI/ Greenfield\n"
      "16...Cabuyao\n"
      "17...Silangan\n"
      "18...Calamba\n\n");
     scanf("%d", &destination);
     printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
     switch(destination){
           case 1:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n"
           "1...Bicutan\n"
           "2...Sucat\n"
           "3...Alabang\n"
           "4...Filinvest\n"
           "5...Muntinlupa-Cavite X'way\n"
           "6...Susana Heights\n"
           "7...San Pedro\n"
           "8...SouthWoods\n"
           "9...Carmona\n"
           "10...Mamplasan\n"
           "11...Sta. Rosa\n"
           "12...ABI/Greenfield\n"
           "13...Cabuyao\n"
           "14...Silangan\n"
           "15...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1, 72); break;
                case 2: tollcalcu1(bal1, 118); break;
                case 3: tollcalcu1(bal1, 164); break;
                case 4: tollcalcu1(bal1, 169); break;
                case 5: tollcalcu1(bal1, 202); break;
                case 6: tollcalcu1(bal1, 183); break;
                case 7: tollcalcu1(bal1, 190); break;
                case 8: tollcalcu1(bal1, 206); break;
                case 9: tollcalcu1(bal1, 212); break;
                case 10: tollcalcu1(bal1, 223); break;
                case 11: tollcalcu1(bal1, 232); break;
                case 12:tollcalcu1(bal1, 246); break;
                case 13:tollcalcu1(bal1, 255); break;
                case 14:tollcalcu1(bal1, 261); break;
                case 15:tollcalcu1(bal1, 280); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 2:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n"
           "1...Merville\n"
           "2...Bicutan\n"
           "3...Sucat\n"
           "4...Alabang\n"
           "5...Filinvest\n"
           "6...Muntinlupa-Cavite X'way\n"
           "7...Susana Heights\n"
           "8...San Pedro\n"
           "9...SouthWoods\n"
           "10...Carmona\n"
           "11...Mamplasan\n"
           "12...Sta. Rosa\n"
           "13...ABI/Greenfield\n"
           "14...Cabuyao\n"
           "15...Silangan\n"
           "16...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: 
                case 2: tollcalcu1(bal1, 49); break;
                case 3: tollcalcu1(bal1, 84); break;
                case 4: tollcalcu1(bal1, 118); break;
                case 5: tollcalcu1(bal1, 123); break;
                case 6: tollcalcu1(bal1, 156); break;
                case 7: tollcalcu1(bal1, 137); break;
                case 8: tollcalcu1(bal1, 144); break;
                case 9: tollcalcu1(bal1, 160); break;
                case 10: tollcalcu1(bal1, 166); break;
                case 11: tollcalcu1(bal1, 177); break;
                case 12:tollcalcu1(bal1, 186); break;
                case 13:tollcalcu1(bal1, 200); break;
                case 14:tollcalcu1(bal1, 209); break;
                case 15:tollcalcu1(bal1, 215); break;
                case 16:tollcalcu1(bal1, 234); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 3:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //c5
           "1...Bicutan\n"
           "2...Sucat\n"
           "3...Alabang\n"
           "4...Filinvest\n"
           "5...Muntinlupa-Cavite X'way\n"
           "6...Susana Heights\n"
           "7...San Pedro\n"
           "8...SouthWoods\n"
           "9...Carmona\n"
           "10...Mamplasan\n"
           "11...Sta. Rosa\n"
           "12...ABI/Greenfield\n"
           "13...Cabuyao\n"
           "14...Silangan\n"
           "15...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1, 49); break;
                case 2: tollcalcu1(bal1, 84); break;
                case 3: tollcalcu1(bal1, 118); break;
                case 4: tollcalcu1(bal1, 123); break;
                case 5: tollcalcu1(bal1, 156); break;
                case 6: tollcalcu1(bal1, 137); break;
                case 7: tollcalcu1(bal1, 144); break;
                case 8: tollcalcu1(bal1, 160); break;
                case 9: tollcalcu1(bal1, 166); break;
                case 10: tollcalcu1(bal1, 177); break;
                case 11:tollcalcu1(bal1, 186); break;
                case 12:tollcalcu1(bal1, 200); break;
                case 13:tollcalcu1(bal1, 209); break;
                case 14:tollcalcu1(bal1, 215); break;
                case 15:tollcalcu1(bal1, 234); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 4:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //bic
           "1...Sucat\n"
           "2...Alabang\n"
           "3...Filinvest\n"
           "4...Muntinlupa-Cavite X'way\n"
           "5...Susana Heights\n"
           "6...San Pedro\n"
           "7...SouthWoods\n"
           "8...Carmona\n"
           "9...Mamplasan\n"
           "10...Sta. Rosa\n"
           "11...ABI/Greenfield\n"
           "12...Cabuyao\n"
           "13...Silangan\n"
           "14...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1, 34); break;
                case 2: tollcalcu1(bal1, 69); break;
                case 3: tollcalcu1(bal1, 74); break;
                case 4: tollcalcu1(bal1, 107); break;
                case 5: tollcalcu1(bal1, 88); break;
                case 6: tollcalcu1(bal1, 95); break;
                case 7: tollcalcu1(bal1, 111); break;
                case 8: tollcalcu1(bal1, 117); break;
                case 9: tollcalcu1(bal1, 128); break;
                case 10: tollcalcu1(bal1, 137); break;
                case 11:tollcalcu1(bal1, 151); break;
                case 12:tollcalcu1(bal1, 160); break;
                case 13:tollcalcu1(bal1, 166); break;
                case 14:tollcalcu1(bal1, 185); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 5:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //suc
           "1...Alabang\n"
           "2...Filinvest\n"
           "3...Muntinlupa-Cavite X'way\n"
           "4...Susana Heights\n"
           "5...San Pedro\n"
           "6...SouthWoods\n"
           "7...Carmona\n"
           "8...Mamplasan\n"
           "9...Sta. Rosa\n"
           "10...ABI/Greenfield\n"
           "11...Cabuyao\n"
           "12...Silangan\n"
           "13...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1, 34); break;
                case 2: tollcalcu1(bal1, 39); break;
                case 3: tollcalcu1(bal1, 72); break;
                case 4: tollcalcu1(bal1, 53); break;
                case 5: tollcalcu1(bal1, 60); break;
                case 6: tollcalcu1(bal1, 76); break;
                case 7: tollcalcu1(bal1, 82); break;
                case 8: tollcalcu1(bal1, 93); break;
                case 9: tollcalcu1(bal1, 102); break;
                case 10: tollcalcu1(bal1, 116); break;
                case 11:tollcalcu1(bal1, 125); break;
                case 12:tollcalcu1(bal1, 131); break;
                case 13:tollcalcu1(bal1, 150); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 6:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //ala
           "1...Filinvest\n"
           "2...Muntinlupa-Cavite X'way\n"
           "3...Susana Heights\n"
           "4...San Pedro\n"
           "5...SouthWoods\n"
           "6...Carmona\n"
           "7...Mamplasan\n"
           "8...Sta. Rosa\n"
           "9...ABI/Greenfield\n"
           "10...Cabuyao\n"
           "11...Silangan\n"
           "12...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,5); break;
                case 2: tollcalcu1(bal1, 38); break;
                case 3: tollcalcu1(bal1, 19); break;
                case 4: tollcalcu1(bal1, 26); break;
                case 5: tollcalcu1(bal1, 42); break;
                case 6: tollcalcu1(bal1, 48); break;
                case 7: tollcalcu1(bal1, 59); break;
                case 8: tollcalcu1(bal1, 68); break;
                case 9: tollcalcu1(bal1, 82); break;
                case 10: tollcalcu1(bal1, 91); break;
                case 11:tollcalcu1(bal1, 97); break;
                case 12:tollcalcu1(bal1, 116); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 7:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //fil
           "1...Muntinlupa-Cavite X'way\n"
           "2...Susana Heights\n"
           "3...San Pedro\n"
           "4...SouthWoods\n"
           "5...Carmona\n"
           "6...Mamplasan\n"
           "7...Sta. Rosa\n"
           "8...ABI/Greenfield\n"
           "9...Cabuyao\n"
           "10...Silangan\n"
           "11...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,33); break;
                case 2: tollcalcu1(bal1, 14); break;
                case 3: tollcalcu1(bal1, 21); break;
                case 4: tollcalcu1(bal1, 37); break;
                case 5: tollcalcu1(bal1, 43); break;
                case 6: tollcalcu1(bal1, 54); break;
                case 7: tollcalcu1(bal1, 63); break;
                case 8: tollcalcu1(bal1, 77); break;
                case 9: tollcalcu1(bal1, 86); break;
                case 10: tollcalcu1(bal1, 92); break;
                case 11:tollcalcu1(bal1, 111); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 8:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //mcx
           "1...Susana Heights\n"
           "2...San Pedro\n"
           "3...SouthWoods\n"
           "4...Carmona\n"
           "5...Mamplasan\n"
           "6...Sta. Rosa\n"
           "7...ABI/Greenfield\n"
           "8...Cabuyao\n"
           "9...Silangan\n"
           "10...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,19); break;
                case 2: tollcalcu1(bal1, 25); break;
                case 3: tollcalcu1(bal1, 42); break;
                case 4: tollcalcu1(bal1, 48); break;
                case 5: tollcalcu1(bal1, 59); break;
                case 6: tollcalcu1(bal1, 68); break;
                case 7: tollcalcu1(bal1, 82); break;
                case 8: tollcalcu1(bal1, 90); break;
                case 9: tollcalcu1(bal1, 96); break;
                case 10: tollcalcu1(bal1, 116); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 9:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //sus hts
           "1...San Pedro\n"
           "2...SouthWoods\n"
           "3...Carmona\n"
           "4...Mamplasan\n"
           "5...Sta. Rosa\n"
           "6...ABI/Greenfield\n"
           "7...Cabuyao\n"
           "8...Silangan\n"
           "9...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,6); break;
                case 2: tollcalcu1(bal1, 23); break;
                case 3: tollcalcu1(bal1, 29); break;
                case 4: tollcalcu1(bal1, 40); break;
                case 5: tollcalcu1(bal1, 49); break;
                case 6: tollcalcu1(bal1, 63); break;
                case 7: tollcalcu1(bal1, 71); break;
                case 8: tollcalcu1(bal1, 77); break;
                case 9: tollcalcu1(bal1, 97); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 10:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //snp
           "1...SouthWoods\n"
           "2...Carmona\n"
           "3...Mamplasan\n"
           "4...Sta. Rosa\n"
           "5...ABI/Greenfield\n"
           "6...Cabuyao\n"
           "7...Silangan\n"
           "8...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,16); break;
                case 2: tollcalcu1(bal1, 22); break;
                case 3: tollcalcu1(bal1, 33); break;
                case 4: tollcalcu1(bal1, 43); break;
                case 5: tollcalcu1(bal1, 56); break;
                case 6: tollcalcu1(bal1, 65); break;
                case 7: tollcalcu1(bal1, 71); break;
                case 8: tollcalcu1(bal1, 90); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 11:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //swoods
           "1...Carmona\n"
           "2...Mamplasan\n"
           "3...Sta. Rosa\n"
           "4...ABI/Greenfield\n"
           "5...Cabuyao\n"
           "6...Silangan\n"
           "7...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,6); break;
                case 2: tollcalcu1(bal1, 17); break;
                case 3: tollcalcu1(bal1, 27); break;
                case 4: tollcalcu1(bal1, 40); break;
                case 5: tollcalcu1(bal1, 49); break;
                case 6: tollcalcu1(bal1, 55); break;
                case 7: tollcalcu1(bal1, 74); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 12:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //car
           "1...Mamplasan\n"
           "2...Sta. Rosa\n"
           "3...ABI/Greenfield\n"
           "4...Cabuyao\n"
           "5...Silangan\n"
           "6...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,11); break;
                case 2: tollcalcu1(bal1, 20); break;
                case 3: tollcalcu1(bal1, 34); break;
                case 4: tollcalcu1(bal1, 43); break;
                case 5: tollcalcu1(bal1, 49); break;
                case 6: tollcalcu1(bal1, 68); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 13:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //mam
           "1. Sta. Rosa\n"
           "2. ABI/Greenfield\n"
           "3. Cabuyao\n"
           "4. Silangan\n"
           "5. Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,10); break;
                case 2: tollcalcu1(bal1, 23); break;
                case 3: tollcalcu1(bal1, 32); break;
                case 4: tollcalcu1(bal1, 38); break;
                case 5: tollcalcu1(bal1, 57); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 14:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n\n" //str
           "1...ABI/Greenfield\n"
           "2...Cabuyao\n"
           "3...Silangan\n"
           "4...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,14); break;
                case 2: tollcalcu1(bal1, 22); break;
                case 3: tollcalcu1(bal1, 28); break;
                case 4: tollcalcu1(bal1, 48); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 15:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //abi
           "1...Cabuyao\n"
           "2...Silangan\n"
           "3...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,9); break;
                case 2: tollcalcu1(bal1, 15); break;
                case 3: tollcalcu1(bal1, 34); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 16:
           while(1){
           char cnfrmd;
           printf("\nEnter Exit Point\n" //cab
           "1...Silangan\n"
           "2...Calamba\n\n");
           scanf("%d", &exitpoint);
           printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(exitpoint){
                case 1: tollcalcu1(bal1,6); break;
                case 2: tollcalcu1(bal1, 25); break;
                default: printf("Invalid input entered\n\n");              
                };break;
           case 17:printf("Calamba exit only\n");
           tollcalcu1(bal1, 19);break;
           case 18:printf("Sto. Tomas exit only\n\n");
           tollcalcu1(bal1, 19);break;
           default: printf("Invalid input entered\n\n");  
     }; break;
     default: printf("Invalid input entered\n\n");  
    }
}
void calax(int*bal2){
 //calax code PIANGCO
int entry, exit, total;
char bod, cnfrm, cnfrmd;
while(1){ 
printf("-----CALAX-----\nWhere are you headed?\nA...Northbound\nB...Southbound\n\n");
scanf(" %c", &bod);
bod=tolower(bod);
printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrm);
   if (cnfrm=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n\n");
                          continue;
                          }
                   }
switch (bod){
case 'a':   
     while(1){ 
printf("\nEntry Points:\n1...Greenfield\n2...Laguna Technopark\n3...Laguna Boulevard\n4...Santa Rosa-Tagaytay\n"
"5...Silang East\n6...Silang(Aguinaldo)\n");
printf("Enter Entry Point: ");
scanf("%d", &entry);
   printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
switch(entry) {
        case 1: // Greenfield
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang(Aguinaldo)\n2...Silang East\n3...Santa Rosa-Tagaytay\n"
            "4...Laguna Boulevard\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 81;
                printf("\nGreenfield-Silang(Aguinaldo)\n\n");
            } else if(exit == 2) {
                total = 64;
                printf("\nGreenfield-Silang East\n\n");
            } else if(exit == 3) {
                total = 44;
                printf("\nGreenfield-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 4) {
                total = 30;
                printf("\nGreenfield-Laguna Boulevard\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 2: // Laguna Technopark
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang(Aguinaldo)\n2...Silang East\n3...Santa Rosa-Tagaytay\n4...Laguna Boulevard\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 66;
                printf("\nSilang(Aguinaldo)\n\n");
            } else if(exit == 2) {
                total = 48;
                printf("\nSilang East\n\n");
            } else if(exit == 3) {
                total = 29;
                printf("\nSanta Rosa-Tagaytay\n\n");
            } else if(exit == 4) {
                total = 15;
                printf("\nLaguna Boulevard\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 3: // Laguna Boulevard
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang(Aguinaldo)\n2...Silang East\n3...Santa Rosa-Tagaytay\n4...Greenfield\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 51;
                printf("\nLaguna Boulevard-Silang(Aguinaldo)\n\n");
            } else if(exit == 2) {
                total = 33;
                printf("\nLaguna Boulevard-Silang East\n\n");
            } else if(exit == 3) {
                total = 14;
                printf("\nLaguna Boulevard-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 4) {
                total = 30;
                printf("\nLaguna Boulevard-Greenfield\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 4: // Santa Rosa-Tagaytay
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang(Aguinaldo)\n2..Silang East\n3...Laguna Boulevard\n4...Greenfield\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 45;
                printf("\nSanta Rosa-Tagaytay-Silang(Aguinaldo)\n\n");
            } else if(exit == 2) {
                total = 27;
                printf("\nSanta Rosa-Tagaytay-Silang East\n\n");
            } else if(exit == 3) {
                total = 14;
                printf("\nSanta Rosa-Tagaytay-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 44;
                printf("\nSanta Rosa-Tagaytay-Greenfield\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 5: // Silang East
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang(Aguinaldo)\n2...Santa Rosa-Tagaytay\n3...Laguna Boulevard\n4...Greenfield\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 17;
                printf("\nSilang East-Silang(Aguinaldo)\n\n");
            } else if(exit == 2) {
                total = 27;
                printf("\nSilang East-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 3) {
                total = 33;
                printf("\nSilang East-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 64;
                printf("\nSilang East-Greenfield\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 6: // Silang(Aguinaldo)
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Silang East\n2...Santa Rosa-Tagaytay\n3...Laguna Boulevard\n"
            "4...Laguna Technopark\n5...Greenfield\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 17;
                printf("\nSilang(Aguinaldo)-Silang East\n\n");
            } else if(exit == 2) {
                total = 45;
                printf("\nSilang(Aguinaldo)-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 3) {
                total = 51;
                printf("\nSilang(Aguinaldo)-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 66;
                printf("\nSilang(Aguinaldo)-Laguna Technopark\n\n");
            } else if(exit == 5) {
                total = 81;
                printf("\nSilang(Aguinaldo)-Greenfield\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        default:
            printf("Invalid entry point.\n\n");
            break;} break;
case 'b':
     while(1){
printf("\nEntry Points:\n1...Silang(Aguinaldo)\n2...Silang East\n3...Santa Rosa-Tagaytay\n"
"4...Laguna Boulevard\n5...Greenfield\n6...Laguna Technopark\n\n");
    printf("Enter Entry Point: ");
    scanf("%d", &entry);
 printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
    switch(entry) {
        case 1: // Silang(Aguinaldo)
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Greenfield\n2...Laguna Technopark\n3...Laguna Boulevard\n"
            "4...Santa Rosa-Tagaytay\n5...Silang East\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 81;
                printf("\nSilang(Aguinaldo)-Greenfield\n\n");
            } else if(exit == 2) {
                total = 66;
                printf("\nSilang(Aguinaldo)-Laguna Technopark\n\n");
            } else if(exit == 3) {
                total = 51;
                printf("\nSilang(Aguinaldo)-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 45;
                printf("\nSilang(Aguinaldo)-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 5) {
                total = 17;
                printf("\nSilang(Aguinaldo)-Silang East\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 2: // Silang East
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Greenfield\n2...Laguna Technopark\n3...Laguna Boulevard\n"
            "4...Santa Rosa-Tagaytay\n5...Silang(Aguinaldo)\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 64;
                printf("\nSilang East-Greenfield\n\n");
            } else if(exit == 2) {
                total = 48;
                printf("\nSilang East-Laguna Technopark\n\n");
            } else if(exit == 3) {
                total = 33;
                printf("\nSilang East-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 27;
                printf("\nSilang East-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 5) {
                total = 17;
                printf("\nSilang East-Silang(Aguinaldo)\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 3: // Santa Rosa-Tagaytay
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Greenfield\n2...Laguna Technopark\n3...Laguna Boulevard\n"
            "4...Silang East\n5...Silang(Aguinaldo)\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 44;
                printf("\nSanta Rosa-Tagaytay-Greenfield\n\n");
            } else if(exit == 2) {
                total = 29;
                printf("\nSanta Rosa-Tagaytay-Laguna Technopark\n\n");
            } else if(exit == 3) {
                total = 14;
                printf("\nSanta Rosa-Tagaytay-Laguna Boulevard\n\n");
            } else if(exit == 4) {
                total = 27;
                printf("\nSanta Rosa-Tagaytay-Silang East\n\n");
            } else if(exit == 5) {
                total = 45;
                printf("\nSanta Rosa-Tagaytay-Silang(Aguinaldo)\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 4: // Laguna Boulevard
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Greenfield\n2...Laguna Technopark\n3...Silang East\n4...Santa Rosa-Tagaytay\n5...Silang(Aguinaldo)\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 30;
                printf("\nLaguna Boulevard-Greenfield\n\n");
            } else if(exit == 2) {
                total = 15;
                printf("\nLaguna Boulevard-Laguna Technopark\n\n");
            } else if(exit == 3) {
                total = 33;
                printf("\nLaguna Boulevard-Silang East\n\n");
            } else if(exit == 4) {
                total = 14;
                printf("\nLaguna Boulevard-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 5) {
                total = 51;
                printf("\nLaguna Boulevard-Silang(Aguinaldo)\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 5: // Greenfield
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Laguna Technopark\n2...Silang East\n3...Santa Rosa-Tagaytay\n"
            "4...Laguna Boulevard\n5...Silang(Aguinaldo)\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 66;
                printf("\nGreenfield-Laguna Technopark\n\n");
            } else if(exit == 2) {
                total = 81;
                printf("\nGreenfield-Silang(Aguinaldo)\n\n");
            } else if(exit == 3) {
                total = 44;
                printf("\nGreenfield-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 4) {
                total = 30;
                printf("\nGreenfield-Laguna Boulevard\n\n");
            } else if(exit == 5) {
                total = 64;
                printf("\nGreenfield-Silang East\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        case 6: // Laguna Technopark
        while(1){
        char cnfrmd;
            printf("\nExit Points:\n1...Greenfield\n2...Laguna Boulevard\n3...Silang East\n4...Santa Rosa-Tagaytay\n5...Silang(Aguinaldo)\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if(exit == 1) {
                total = 66;
                printf("\nLaguna Technopark-Greenfield\n\n");
            } else if(exit == 2) {
                total = 15;
                printf("\nLaguna Technopark-Laguna Boulevard\n\n");
            } else if(exit == 3) {
                total = 48;
                printf("\nLaguna Technopark-Silang East\n\n");
            } else if(exit == 4) {
                total = 29;
                printf("\nLaguna Technopark-Santa Rosa-Tagaytay\n\n");
            } else if(exit == 5) {
                total = 66;
                printf("\nLaguna Technopark-Silang(Aguinaldo)\n\n");
            } else {
                printf("Invalid exit point.\n\n");
            }
            break;

        default:
            printf("Invalid entry point.\n\n");
            break;
    } break;
default: printf("invalid input");            
            }
    tollcalcu2(bal2, total);
    
}
void cavitex(int*bal2){
//cavitex code PIANGCO
int entry, exit, total;
char bod, cnfrm, cnfrmd; 
while(1){
printf("-----CAVITEX-----\nWhere are you headed?\nA...Northbound\nB...Southbound\n\n");
scanf(" %c", &bod);
bod=tolower(bod);
printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrm);
   if (cnfrm=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
                   }
switch (bod){
case 'a':
     while(1){
printf("\nEntry Point:\n1...Paranaque\n2...Bacoor\n\n");
    printf("Enter Entry Point: ");
    scanf("%d", &entry);
     printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
 switch(entry) {
        case 1:  // Paranaque
        while(1){
        char cnfrmd;
            printf("\nExit Point:\n1...Kabihisanan\n2...Bacoor\n3...Kawit\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }

            if (exit == 1) {
                total = 8;
                printf("\nParanaque-Kalibihisanan\n\n");
            }
            else if (exit == 2) {
                total = 35;
                printf("\nParanaque-Bacoor\n\n");
            }
            else if (exit == 3) {
                total = 108;
                printf("\nParanaque-Kawit\n\n");
            }
            else {
                printf("Invalid Exit Point!\n\n");
            }
            break;

        case 2:  // Bacoor
        while(1){
        char cnfrmd;
            printf("\nExit Point:\n1...Kawit\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }

            if (exit == 1) {
                total = 73;
                printf("\nBacoor-Kawit\n\n");
            }
            else {
                printf("Invalid Exit Point!\n\n");
            }
            break;

        default:
            printf("Invalid Entry Point!\n\n");
    }; break;
case 'b':
     while(1){
 printf("\nEntry Point:\n1...Kabihisanan\n2...Bacoor\n3...Kawit\n\n");
    printf("Enter Entry Point: ");
    scanf("%d", &entry);
 printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
    switch(entry) {
        case 1:  // Kabihisanan
        while(1){
        char cnfrmd;
            printf("\nExit Point:\n1...Paranaque\n2...Bacoor\n3...Kawit\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }

            if (exit == 1) {
                total = 8;
                printf("\nKabihisanan-Paranaque\n\n");
            }
            else if (exit == 2) {
                total = 35;
                printf("\nKabihisanan-Bacoor\n\n");
            }
            else if (exit == 3) {
                total = 73;
                printf("\nKabihisanan-Kawit\n\n");
            }
            else {
                printf("Invalid Exit Point!\n\n");
            }
            break;

        case 2:  // Bacoor
        while(1){
        char cnfrmd;
            printf("\nExit Point:\n1...Paranaque\n2...Kabihisanan\n3...Kawit\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
                               printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
            if (exit == 1) {
                total = 35;
                printf("\nBacoor-Paranaque\n\n");
            }
            else if (exit == 2) {
                total = 8;
                printf("\nBacoor-Kabihisanan\n\n");
            }
            else if (exit == 3) {
                total = 73;
                printf("\nBacoor-Kawit\n\n");
            }
            else {
                printf("Invalid Exit Point!\n\n");
            }
            break;

        case 3:  // Kawit
        while(1){
        char cnfrmd;
            printf("\nExit Point:\n1...Paranaque\n2...Bacoor\n3...Kabihisanan\n\n");
            printf("Enter Exit Point: ");
            scanf("%d", &exit);
            printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }

            if (exit == 1) {
                total = 108;
                printf("\nKawit-Paranaque\n\n");
            }
            else if (exit == 2) {
                total = 73;
                printf("\nKawit-Bacoor\n\n");
            }
            else if (exit == 3) {
                total = 8;
                printf("\nKawit-Kabihisanan\n\n");
            }
            else {
                printf("Invalid Exit Point!\n\n");
            }
            break;

        default:
            printf("Invalid Entry Point!\n\n");
    };break;
default: printf("invalid input\n\n");
    }
    tollcalcu2(bal2, total);
}
void star(int* bal1){
//star tollway code
int staren, starex;
char cnfrmd;
while(1){
    printf("-----STAR-----\n1 Sto. Tomas (southbound only)\n"
    "2...Tanauan\n"
    "3...Malvar\n"
    "4...Sto. Toribio\n"
    "5...Lipa\n"
    "6...Ibaan\n"
    "7...Batangas (northbound only)\n\n");
    printf("Enter your entry: "); 
    scanf("%i", &staren);
    putchar('\n');
     printf("\nType 'x' to confirm\n\n");
   scanf(" %c", &cnfrmd);
   if (cnfrmd=='x'){
                   break;
                   } else {
                          system("cls");
                          printf("Invalid input. Returned.\n");
                          continue;
                          }
}
    switch(staren){                          
    case 1: 
    while(1){
    char cnfrmd;
    printf("\n1...Tanauan (southbound)\n"
    "2...Malvar (southbound)\n"
    "3...Sto. Toribio (southbound)\n"
    "4...Lipa (southbound)\n"
    "5...Ibaan (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 12); break;
                case 2: tollcalcu1(bal1, 27); break;
                case 3: tollcalcu1(bal1, 45); break;
                case 4: tollcalcu1(bal1, 55); break;
                case 5: tollcalcu1(bal1, 83); break;
                case 6: tollcalcu1(bal1, 104); break;
                default: printf("Invalid Input\n\n"); 
                } break;
    case 2:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas (northbound)\n" //tan
    "2...Malvar (southbound)\n"
    "3...Sto. Toribio (southbound)\n"
    "4...Lipa (southbound)\n"
    "5...Ibaan (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 12); break;
                case 2: tollcalcu1(bal1, 14); break;
                case 3: tollcalcu1(bal1, 32); break;
                case 4: tollcalcu1(bal1, 43); break;
                case 5: tollcalcu1(bal1, 71); break;
                case 6: tollcalcu1(bal1, 91); break;
                default: printf("Invalid Input\n\n"); 
                } break;
    case 3:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas (northbound)\n" //malv
    "2...Tanauan (northbound)\n"
    "3...Sto. Toribio (southbound)\n"
    "4...Lipa (southbound)\n"
    "5...Ibaan (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 27); break;
                case 2: tollcalcu1(bal1, 14); break;
                case 3: tollcalcu1(bal1, 12); break;
                case 4: tollcalcu1(bal1, 28); break;
                case 5: tollcalcu1(bal1, 56); break;
                case 6: tollcalcu1(bal1, 77); break;
                default: printf("Invalid Input\n\n"); 
                } break;
    case 4:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas (northbound)\n" // stt
    "2...Tanauan (northbound)\n"
    "3...Malvar (northbound)\n"
    "4...Lipa (southbound)\n"
    "5...Ibaan (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 45); break;
                case 2: tollcalcu1(bal1, 32); break;
                case 3: tollcalcu1(bal1, 18); break;
                case 4: tollcalcu1(bal1, 10); break;
                case 5: tollcalcu1(bal1, 38); break;
                case 6: tollcalcu1(bal1, 59); break;
                default: printf("Invalid Input\n\n");
                } break;
    case 5:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas (northbound)\n" //lip
    "2...Tanauan (northbound)\n"
    "3...Malvar (northbound)\n"
    "4...Sto. Toribio (southbound)\n"
    "5...Ibaan (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 55); break;
                case 2: tollcalcu1(bal1, 43); break;
                case 3: tollcalcu1(bal1, 28); break;
                case 4: tollcalcu1(bal1, 10); break;
                case 5: tollcalcu1(bal1, 28); break;
                case 6: tollcalcu1(bal1, 49); break;
                default: printf("Invalid Input\n\n"); break;
                } break;
    case 6:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas (northbound)\n" //iba
    "2...Tanauan (northbound)\n"
    "3...Malvar (northbound)\n"
    "4...Sto. Toribio (northbound)\n"
    "5...Lipa (southbound)\n"
    "6...Batangas (southbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 83); break;
                case 2: tollcalcu1(bal1, 71); break;
                case 3: tollcalcu1(bal1, 56); break;
                case 4: tollcalcu1(bal1, 38); break;
                case 5: tollcalcu1(bal1, 28); break;
                case 6: tollcalcu1(bal1, 21); break;
                default: printf("Invalid Input\n\n"); break;
                } break;
    case 7:
    while(1){
    char cnfrmd;
    printf("\n1...Sto. Tomas(northbound)\n"
    "2...Tanauan (northbound)\n"
    "3...Malvar (northbound)\n"
    "4...Sto. Toribio (northbound)\n"
    "5...Lipa (northbound)\n"
    "6...Ibaan (northbound)\n\n");
    printf("Enter your exit: ");
    scanf("%i", &starex);
    printf("\nType 'x' to confirm\n\n");
                                 scanf(" %c", &cnfrmd);
                                 if (cnfrmd=='x'){
                                 break;
                                 } else {
                                 system("cls");
                                 printf("Returned.\n");
                                 continue;
                                        }
                                 }
                switch(starex){
                case 1: tollcalcu1(bal1, 104); break;
                case 2: tollcalcu1(bal1, 91); break;
                case 3: tollcalcu1(bal1, 77); break;
                case 4: tollcalcu1(bal1, 59); break;
                case 5: tollcalcu1(bal1, 49); break;
                case 6: tollcalcu1(bal1, 21); break;
                default: printf("Invalid Input\n\n"); break;   
                } break;                        
    default: printf("Invalid Input\n\n");
    }
}
void baltopup(){
     char cnfrm;
     int swp, ez;
     while(1){
     putchar('\n');
     printf("Enter Autosweep balance: Php ");
     scanf("%d", &swp); 
     bal1+=swp;
     printf("Enter Easytrip balance: Php ");
     scanf("%d", &ez);
     bal2+=ez;
     putchar('\n');
     printf("Type 'x' to confirm\n\n");
     scanf(" %c", &cnfrm);
     if (cnfrm=='x'){
                     break;
                     } else {
                          bal1=0;
                          bal2=0;
                          system("cls");
                          printf("Invalid input.\nBalances have been reset.\n"
                          "----------------------------\n"
                          "Autosweep balance: %d\n"
                          "Easytrip balance: %d\n"
                          "----------------------------\n", bal1, bal2);
                          continue;
                          }
     }
     }
void wallett(){
     char wallet;
     system("cls");
                printf("Wallet: \nA...Topup \nB...Balance Inquiry\nC...Return\n\n");
                scanf(" %c", &wallet);
                wallet = tolower(wallet);
                switch(wallet) {
                    case 'a': baltopup(); break;
                    case 'b': system("cls"); printf("Autosweep Balance: Php %d\nEasytrip Balance: Php %d\n\n", bal1, bal2); break;
                    case 'c': system("cls"); break;
                    default: system("cls"); printf("Invalid Input\n");
                    }
     }
void expways(){
     int exp;
     system("cls");
                printf("---------TOLLWAYS--------- \nAutosweep Tollways: \n1...Skyway Stage 3\n2...Ninoy Aquino International Airport Expressway (NAIAX)\n"
                "3...Skyway-South Luzonxpressway-Muntinlupa-Cavite Expressway (Skyway-SLEX-MCX)\n4...Southern Tagalog Arterial Road (STAR)\n\nEasytrip Tollways: \n"
                "5...Cavite Expressway (Cavitex)\n6...Cavite Laguna Expressway(CALAX)\n\n0...Return\n\n");
                scanf("%d", &exp);
                switch(exp) {
                    case 0: system("cls"); break;
                    case 1: system("cls"); skyway(&bal1); break;
                    case 2: system("cls"); naiax(&bal1); break;
                    case 3: system("cls"); slex(&bal1); break;
                    case 4: system("cls"); star(&bal1); break;
                    case 5: system("cls"); cavitex(&bal2); break;
                    case 6: system("cls"); calax(&bal2); break;
                    case 69: system("cls"); printf("SUBMITTED BY: ALCANTARA, ENCARNADO, MENDOZA, PIANGCO, RODRIGUEZ, ROSCO\n\n"); 
                             break;
                    default: system("cls"); printf("Invalid Input\n\n");
                    }
     }
int main(){
    int exp;
    char menu, cnfrm;
    printf("-----W E L C O M E!-----\nSouth Luzon Tollculator\nWritten in C by GROUP 2.\n"
           "------------------------\n\n");
    while(1){
        printf("--------Main Menu--------\nA...Wallet \nB...Tollways\nC...Exit\n"
               "-------------------------\n\n");
        scanf(" %c", &menu);
        menu = tolower(menu);
        switch(menu) {
            case 'a': wallett(); break;
            case 'b': expways(); break;
            case 'c': system("cls"); break;
            default: system("cls"); printf("Invalid Input\n\n"); 
                }
            char lop;
            int z = 0; 
            printf("\nType 'm' to return to main menu\nType 'e' to exit the program\n\n");
            scanf(" %c", &lop);
            if (lop =='e') {
                system("cls");
                printf("---------------------------------\n"
                       "           Thank You!\n"
                       "---------------------------------\n\n");
                       break;
            } else if (lop=='m') { 
                system("cls");
                printf("---------------------------------\n"
                       "       Returned to Main Menu.    \n"
                       "        Session Counter: %d      \n"
                       "---------------------------------\n\n", ++z);
            } else { system("cls");
                printf("Invalid input entered. Returned.\n");
                continue;
            }
                }
    system("PAUSE");
    return 0;
       }
