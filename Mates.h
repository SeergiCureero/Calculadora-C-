#pragma region Constants

float PI = 3.1415926535898;
float TAU = PI*2;
float E = 2.71828182846;
float PHI = 1.6180339887499;

#pragma endregion

#pragma region Operacions 

float Suma(float a, float b){
    return a+b;
}

float Resta(float a, float b){
    return a-b;
}

float Multiplicacio(float a, float b){
    return a*b;
}

float Divisio(float a, float b){
    return a/b;
}

float Quadrat(float x){
    return x*x;
}

float Cub(float x){
    return x*x*x;
}

float Exponent(float x, float e){
    float resultat = 1;
    for (int i = 0; i < e; i++)
    {
        resultat *= x;
    }
    return resultat;  
}

#pragma endregion 