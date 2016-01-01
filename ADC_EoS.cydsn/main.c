/* ========================================
 *
 * PoC: Driving Multiple ADC inputs with no
 * SW involved.
 * 
 * ========================================
*/
#include <project.h>

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    ADC_Start();

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
