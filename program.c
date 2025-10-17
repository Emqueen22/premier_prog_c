#include <stdio.h>
#include <math.h>



int main() {
 double wind_angle, wind_speed, fuel, consumption, wing_surface;
   double pressure, temperature, altitude, ias, weight;
// Saisie des données utilisateur
   printf("Nom [min-max] :\n");

   printf("Direction relative du vent (wind_angle) [-3.14159265 - 3.14159265] : ");
   scanf("%lf", &wind_angle);

   printf("Vitesse vent (wind_speed) [0 - 150] kts : ");
   scanf("%lf", &wind_speed);

   printf("Carburant disponible (fuel) [20 - 350000] litres : ");
   scanf("%lf", &fuel);

   printf("Consommation (consumption) [10 - 15000] litres/h : ");
   scanf("%lf", &consumption);

   printf("Surface alaire (wing_surface) [5 - 900] m² : ");
   scanf("%lf", &wing_surface);

   printf("Pression ambiante (pressure) [300 - 1050] hPa/mb : ");
   scanf("%lf", &pressure);

   printf("Température extérieure (temperature) [-50 - 50] °C : ");
   scanf("%lf", &temperature);

   printf("Altitude (altitude) [0 - 19500] ft : ");
   scanf("%lf", &altitude);

   printf("Indicated Air Speed (ias) [0 - 500] kts : ");
   scanf("%lf", &ias);

   printf("Poids total (weight) [500 - 600000] kg : ");
   scanf("%lf", &weight);
