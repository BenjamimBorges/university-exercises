int somar(int A, int B){
    int C;
    C = A + B;
    return C;
}

float calcularJuros (float parcela, int dias, float juros){
    float valor;
    valor = parcela * (dias * juros)/100;
    return valor;
}