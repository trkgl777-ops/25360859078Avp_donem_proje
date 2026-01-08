#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

const char *gezegenisimleri[] = {"Merkur", "Venus", "Dunya", "Mars", "Jupiter", "Saturn", "Uranus", "Neptun"};
const double gezegenG[] = {3.7, 8.87, 9.81, 3.721, 24.79, 10.44, 8.69, 11.15};


void serbestdusme(double *g);
void yukariatis(double *g);
void agirlikdeneyi(double *g);
void potansiyelenerji(double *g);
void hidrostatikbasinc(double *g);
void arsimet(double *g);
void sarkacperiyodu(double *g);
void ipgerilmesi(double *g);
void asansordeneyi(double *g);


void gezegensonuclari(double sonuclar[], const char *birim);
double mutlakdeger(double x);
void temizlebuffer();

int main(){
char isim[100];
int secim;
printf("\nUZAY FIZIK SIMULASYONU\n");
printf("\n isminizi giriniz: ");
fgets(isim,sizeof(isim),stdin);
isim[strcspn(isim, "\n")]='\0';
printf("\nhosgeldiniz %s\n",isim);
do{
    printf("\n\n");
    printf("Deney Listesi: \n");
    printf("1. serbest dusme deneyi\n");
    printf("2. yukari atis deneyi\n");
    printf("3. agirlik deneyi\n");
    printf("4. kutlecekimsel potansiyel enerji deneyi\n");
    printf("5. hidrostatik basinc deneyi\n");
    printf("6. arsimet kaldirma kuvveti deneyi\n");
    printf("7. basit sarkac periyodu deneyi\n");
    printf("8. sabit ip gerilmesi deneyi\n");
    printf("9. asansor deneyi\n");
    printf("\n");
    printf("-1:programdan cikis\n");
    printf("\n");
    printf("seciminiz: ");
    scanf("%d",&secim);
    temizlebuffer();



     switch(secim) {
            case 1: serbestdusme((double *)gezegenG); break;
            case 2: yukariatis((double *)gezegenG); break;
            case 3: agirlikdeneyi((double *)gezegenG); break;
            case 4: potansiyelenerji((double *)gezegenG); break;
            case 5: hidrostatikbasinc((double *)gezegenG); break;
            case 6: arsimet((double *)gezegenG); break;
            case 7: sarkacperiyodu((double *)gezegenG); break;
            case 8: ipgerilmesi((double *)gezegenG); break;
            case 9: asansordeneyi((double *)gezegenG); break;
            case -1: printf("\nprogram sonlandiriliyor...\n"); break;
            default: printf("\nhata: gecersiz secim! Lutfen 1-9 arasi bir sayi girin veya -1 ile cikin.\n");
        }
    } while(secim != -1);

    return 0;
}

void temizlebuffer()
{
    while(getchar()!='\n');
}

double mutlakdeger(double x){
return (x<0)?-x:x;

}

void gezegensonuclari(double sonuclar[],const char *birim){


printf("\ngezegenlerde sonuclar:\n");
for(int i=0;i<8;i++){
    printf("%-10s: %8.2f %s\n",gezegenisimleri[i],*(sonuclar + i),birim);

}
printf("\n");
}


 void serbestdusme(double *g) {
    double t, h[8];
    printf("\n--- SERBEST DUSME DENEYI ---\n");
    printf("Dusme suresini (saniye) girin: ");
    scanf("%lf", &t);
    temizlebuffer();
    t = mutlakdeger(t);

    for(int i = 0; i < 8; i++) {

        *(h + i) = 0.5 * (*(g + i)) * t * t;
    }
    gezegensonuclari(h, "m");
}


void yukariatis(double *g) {
    double v0, hmax[8];
    printf("\n--- YUKARI ATIS DENEYI ---\n");
    printf("Baslangic hizini (m/s) girin: ");
    scanf("%lf", &v0);
    temizlebuffer();
    v0 = mutlakdeger(v0);

    for(int i = 0; i < 8; i++) {

        *(hmax + i) = (v0 * v0) / (2 * (*(g + i)));
    }
    gezegensonuclari(hmax, "m");
}



void agirlikdeneyi(double *g) {
    double m, G[8];
    printf("\n--- AGIRLIK DENEYI ---\n");
    printf("cismin kutlesini (kg) girin: ");
    scanf("%lf", &m);
    temizlebuffer();
    m = mutlakdeger(m);

    for(int i = 0; i < 8; i++) {

        *(G + i) = m * (*(g + i));
    }
    gezegensonuclari(G, "N");
}


void potansiyelenerji(double *g) {
    double m, h, ep[8];
    printf("\n--- KUTLECEKIMSEL POTANSIYEL ENERJI DENEYI ---\n");
    printf("cismin kutlesini (kg) girin: ");
    scanf("%lf", &m);
    printf("yuksekligi (m) girin: ");
    scanf("%lf", &h);
    temizlebuffer();
    m = mutlakdeger(m);
    h = mutlakdeger(h);

    for(int i = 0; i < 8; i++) {

        *(ep + i) = m * (*(g + i)) * h;
    }
    gezegensonuclari(ep, "J");
}


void hidrostatikbasinc(double *g) {
    double rho, h, P[8];
    printf("\n--- HIDROSTATIK BASINC DENEYI ---\n");
    printf("sivinin yogunlugunu (kg/m^3) girin: ");
    scanf("%lf", &rho);
    printf("derinligi (m) girin: ");
    scanf("%lf", &h);
    temizlebuffer();
    rho = mutlakdeger(rho);
    h = mutlakdeger(h);

    for(int i = 0; i < 8; i++) {

        *(P + i) = rho * (*(g + i)) * h;
    }
    gezegensonuclari(P, "Pa");
}

void arsimet(double *g) {
    double rho, V, Fk[8];
    printf("\n--- ARSIMET KALDIRMA KUVVETI DENEYI ---\n");
    printf("sivinin yogunlugunu (kg/m^3) girin: ");
    scanf("%lf", &rho);
    printf("batan hacmi (m^3) girin: ");
    scanf("%lf", &V);
    temizlebuffer();
    rho = mutlakdeger(rho);
    V = mutlakdeger(V);

    for(int i = 0; i < 8; i++) {

        *(Fk + i) = rho * (*(g + i)) * V;
    }
    gezegensonuclari(Fk, "N");
}


void sarkacperiyodu(double *g) {
    double L, T[8];
    printf("\n--- BASIT SARKAC PERIYODU DENEYI ---\n");
    printf("sarkac uzunlugunu (m) girin: ");
    scanf("%lf", &L);
    temizlebuffer();
    L = mutlakdeger(L);

    for(int i = 0; i < 8; i++) {

        *(T + i) = 2 * M_PI * sqrt(L / (*(g + i)));
    }
    gezegensonuclari(T, "s");
}


void ipgerilmesi(double *g) {
    double m, T[8];
    printf("\n--- SABIT IP GERILMESI DENEYI ---\n");
    printf("cismin kutlesini (kg) girin: ");
    scanf("%lf", &m);
    temizlebuffer();
    m = mutlakdeger(m);

    for(int i = 0; i < 8; i++) {

        *(T + i) = m * (*(g + i));
    }
    gezegensonuclari(T, "N");
}


void asansordeneyi(double *g) {
    double a, m, N[8];
    int yon;
    printf("\n--- ASANSOR DENEYI ---\n");
    printf("asansor ivmesini (m/s^2) girin: ");
    scanf("%lf", &a);
    printf("Cismin kutlesini (kg) girin: ");
    scanf("%lf", &m);
    temizlebuffer();
    m = mutlakdeger(m);

    printf("asansor hareket yonunu secin:\n");
    printf("1. yukari ivmelenerek hizlaniyor veya asagi ivmelenerek yavasliyor\n");
    printf("2. asagi ivmelenerek hizlaniyor veya yukari ivmelenerek yavasliyor\n");
    printf("Secim: ");
    scanf("%d", &yon);
    temizlebuffer();

    for(int i = 0; i < 8; i++) {
        if(yon == 1) {

            *(N + i) = m * (*(g + i) + a);
        } else {

            *(N + i) = m * (*(g + i) - a);
        }
    }
    gezegensonuclari(N, "N");
}













































