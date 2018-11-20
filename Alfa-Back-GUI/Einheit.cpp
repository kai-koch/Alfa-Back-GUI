#include "Einheit.h"

Einheit::Einheit(String ^ nm, String ^ unit)
{
    name = nm;
    einheit = unit;

}

String ^ Einheit::getName()
{
    return name;
}

String ^ Einheit::getEinheit()
{
    return einheit;
}
