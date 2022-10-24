#pragma region Constants

float PI = 3.1415926535898;
float TAU = PI*2;
float E = 2.71828182846;
float PHI = 1.6180339887499;

#pragma endregion

#pragma region Operacions Basiques

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

#pragma endregion

#pragma region Exponents

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

/*Arrel (Root) takes a radicand x and the radical r*/
float Arrel(float x, float r){
    //TODO add an optimized root function
    return x;  
}

#pragma endregion 

#pragma region Trigonometria

float Sin(float x){

    return x;
}
float Cos(float x){
    
    return x;
}
float Tan(float x){
    
    return x;
}

#pragma endregion

#pragma region Altres

int Factorial(int x){
    int resultat = 1;
    for (int i = 0; i < x; i++)
    {
        resultat *= (x-i);
    }
    
    return resultat;
    
}

#pragma endregion