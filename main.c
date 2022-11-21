#include <stdio.h>
#include <math.h>
int main() {
double sun_deg, sun_exalt_deg, moon_deg, moon_exalt_deg, mercury_deg, mercury_exalt_deg, mars_deg, mars_exalt_deg, venus_deg, venus_exalt_deg, jupiter_deg, jupiter_exalt_deg, saturn_deg, saturn_exalt_deg, temp_sun, temp_moon, temp_mercury, temp_mars, temp_venus, temp_jupiter,temp_saturn, longevity_unrectified;
  sun_exalt_deg = 10;
  moon_exalt_deg = 33;
  mercury_exalt_deg = 165;
  mars_exalt_deg = 298;
  venus_exalt_deg = 357;
  jupiter_exalt_deg = 95;
  saturn_exalt_deg = 200;
  printf("enter your planetary degrees in sun,moon,mercury,mars,venus,jupiter,saturn order\n");
  scanf("%lf %lf %lf %lf %lf %lf %lf",&sun_deg,&moon_deg,&mercury_deg,&mars_deg,&venus_deg,&jupiter_deg,&saturn_deg);
  temp_sun = fabs(sun_deg - sun_exalt_deg);
  if(temp_sun < 180)
  {
    temp_sun = (fabs(temp_sun - 360)*(19))/360;
  }
  else
  {
    temp_sun = (temp_sun*(19))/360;
  }
  temp_moon = fabs(moon_deg - moon_exalt_deg);
  if(temp_moon < 180)
  {
    temp_moon = (fabs(temp_moon - 360)*(25))/360;
  }
  else
  {
    temp_moon = (temp_moon*(25))/360;
  }
  temp_mercury = fabs(mercury_deg - mercury_exalt_deg);
  if(temp_mercury < 180)
  {
    temp_mercury = (fabs(temp_mercury - 360)*(12))/360;
  }
  else
  {
    temp_mercury = (temp_mercury*(12))/360;
  }
   temp_mars = fabs(mars_deg - mars_exalt_deg);
  if(temp_mars < 180)
  {
    temp_mars = (fabs(temp_mars - 360)*(15))/360;
  }
  else
  {
    temp_mars = (temp_mars*(15))/360;
  }
  temp_venus = fabs(venus_deg - venus_exalt_deg);
  if(temp_venus < 180)
  {
    temp_venus = (fabs(temp_venus - 360)*(21))/360;
  }
  else
  {
    temp_venus = (temp_venus*(21))/360;
  }
    temp_jupiter = fabs(jupiter_deg - jupiter_exalt_deg);
  if(temp_jupiter < 180)
  {
    temp_jupiter = (fabs(temp_jupiter - 360)*(15))/360;
  }
  else
  {
    temp_jupiter = (temp_jupiter*(15))/360;
  }
  temp_saturn = fabs(saturn_deg - saturn_exalt_deg);
  if(temp_saturn < 180)
  {
    temp_saturn = (fabs(temp_saturn - 360)*(20))/360;
  }
  else
  {
    temp_saturn = (temp_saturn*(20))/360;
  }
  longevity_unrectified = temp_sun + temp_moon + temp_mars + temp_mercury + temp_venus + temp_jupiter + temp_saturn;
  printf("According to Pindayurdaya method of longevity calculation, your life span is %lf\n",longevity_unrectified);
  printf("This number still needs to be rectified using some rectifications methods");$
}
