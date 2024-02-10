#include <stdio.h>

int main() {
    char section;
    int conversionchoicetemp;
    int conversionchoicecurr;
    int conversionchoicemass;
    float fahrenheitToCelcius;
    float celciusToFahrenheit;
    float inputC;
    float inputF;
    float inputinr;
    float INRtoUSD;
    float inputusd;
    float USDtoINR;
    float inputcad;
    float CADtoINR;
    float inputgram;
    float inputkg;
    float inputounces;
    float GMtoKG;
    float OztoGM;
    float KGtoT;

    // Display conversion options
    printf("Unit Converter\n");
    printf("Conversion options:\n");
    printf("1) Temperature (T)\n2) Currency (C)\n3) Mass (M)\n");

    // Input the section for conversion
    printf("Enter the alphabet for the conversion you want to perform: ");
    scanf(" %c", &section);

    // Temperature conversion
    if (section == 'T')
        {
            printf("Enter the number of the conversion you want to perform:\n");
            printf("1) Fahrenheit to Celsius\n2) Celsius to Fahrenheit\n");
            scanf("%d", &conversionchoicetemp);

            if (conversionchoicetemp == 1)
                {
                    // Fahrenheit to Celsius conversion
                    printf("Enter the Fahrenheit temperature: ");
                    scanf("%f", &inputF);
                    fahrenheitToCelcius = ((inputF - 32) * (5.0 / 9.0));
                    printf("Celsius: %.2f\n", fahrenheitToCelcius);
                }
            else if (conversionchoicetemp == 2)
                {
                    // Celsius to Fahrenheit conversion
                    printf("Enter the Celsius temperature: ");
                    scanf("%f", &inputC);
                    celciusToFahrenheit = ((9.0 / 5.0) * inputC + 32);
                    printf("Fahrenheit: %.2f\n", celciusToFahrenheit);
                }
            else
                {
                    printf("Please enter a correct choice.\n");
                }
        }
    // Currency conversion
    else if (section == 'C')
        {
            printf("Enter the number of the conversion you want to perform:\n");
            printf("1) INR to USD\n2) USD to INR\n3) CAD TO INR\n");
            scanf("%d", &conversionchoicecurr);

            if (conversionchoicecurr == 1)
                {
                    // INR to USD conversion
                    printf("Enter the amount in INR: ");
                    scanf("%f", &inputinr);
                    INRtoUSD = inputinr * 0.012;
                    printf("USD: %.2f\n", INRtoUSD);
                }
            else if (conversionchoicecurr == 2)
                {
                    // USD to INR conversion
                    printf("Enter the amount in USD: ");
                    scanf("%f", &inputusd);
                    USDtoINR = inputusd * 83.11;
                    printf("INR: %.2f\n", USDtoINR);
                }
            else if (conversionchoicecurr == 3)
                {
                    // CAD to INR conversion
                    printf("Enter the amount in CAD: ");
                    scanf("%f", &inputcad);
                    CADtoINR = inputcad * 61.90;
                    printf("INR: %.2f\n", CADtoINR);
                }
            else
                {
                    printf("Please enter a correct choice.\n");
                }
        }
    // Mass conversion
    else if (section == 'M')
        {
            printf("Enter the number of the conversion you want to perform:\n");
            printf("1) Grams to Kilograms\n2) Ounces to Grams\n3) Kilograms to Tons\n");
            scanf("%d", &conversionchoicemass);

            if (conversionchoicemass == 1)
                {
                    // Grams to Kilograms conversion
                    printf("Enter the value in grams: ");
                    scanf("%f", &inputgram);
                    GMtoKG = inputgram * 0.001;
                    printf("Kilograms: %.2f\n", GMtoKG);
                }
            else if (conversionchoicemass == 2)
                {
                    // Ounces to Grams conversion
                    printf("Enter the value in ounces: ");
                    scanf("%f", &inputounces);
                    OztoGM = inputounces * 28.3495;
                    printf("Grams: %.2f\n", OztoGM);
                }
            else if (conversionchoicemass == 3)
                {
                    // Kilograms to Tons conversion
                    printf("Enter the value in kilograms: ");
                    scanf("%f", &inputkg);
                    KGtoT = inputkg * 0.001;
                    printf("Tons: %.2f\n", KGtoT);
                }
             else
                 {
                    printf("Please enter a correct choice.\n");
                 }
        }

    else
        {
            printf("Please enter a correct section.\n");
        }

    return 0;
}
