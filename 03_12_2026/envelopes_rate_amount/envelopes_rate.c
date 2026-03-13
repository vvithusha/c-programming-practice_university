#include <stdio.h>
int main()
{
    int n_envelopes ,amount;

    printf("Enter your Number of envelopes :");
    scanf("%i",&n_envelopes);

    if(n_envelopes <= 1000)
    {
        amount = n_envelopes * 0.75;
    }
    else if(n_envelopes <=1500)
    {
        amount = (1000*0.75) + (n_envelopes - 1000) * 1.00;
    }
    else if(n_envelopes <=2000)
    {
        amount = (1000*0.75) + (500 * 1.00) +(n_envelopes - 1500) *1.15;
    }
    else 
    {
        amount = (1000*0.75) + (500 * 1.00) +(500 * 1.15) + (n_envelopes - 2000) * 1.25;
    }

    printf("Total amount : %i.\n",amount);

    return 0;

}