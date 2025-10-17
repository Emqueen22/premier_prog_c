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

   double headwind;
   headwind = wind_speed*cos(wind_angle);
   printf("%lf", headwind);

   double pressure_altitude ;
   pressure_altitude = altitude+(1023-pressure)*30;
   printf("%lf", pressure_altitude);

   double tas;
   tas = ias*(1+2*pressure_altitude/1000);
   printf("%lf", tas);

   double ground_speed;
   ground_speed = tas-headwind;
   printf("%lf", ground_speed);

   double range;
   range = fuel*ground_speed*1.852/consumption;
   printf("%lf", range);

   double takeoff;
   takeoff = 300*(1+pressure_altitude/1000)*(1-0.01*max(0.temperature-15))*(1-headwind/ground_speed)*(weight/1157)**






return 0;
}