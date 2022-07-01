#define ES_INT 0
#define ES_CHAR 1
#define ES_FLOAT 2
#define ES_DOUBLE 3
#define ES_STRING 4


#define TIPO_ERROR -1

#define CANT_TIPOS 6 // numero de tipos



struct Tipo_tabla {
    int aritmetica[CANT_TIPOS][CANT_TIPOS]; // para operaciones aritmetica 2+4 2*5 etc
    

    int implicit[CANT_TIPOS][CANT_TIPOS]; 

    int sumaWarnings[CANT_TIPOS][CANT_TIPOS];

    int warningsOtros[CANT_TIPOS][CANT_TIPOS];

    
};

struct Tipo_tabla tabla_verificacion = {
        .aritmetica={
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE , -1},
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE, -1},
            { ES_FLOAT,  ES_FLOAT,    ES_FLOAT,    ES_DOUBLE, -1},
            { ES_DOUBLE, ES_DOUBLE,   ES_DOUBLE,   ES_DOUBLE, -1},
            {-1, -1,-1,-1, -1}
        }   
};



int verificarLadoDerecho(char izqTipoChar, char derTipoChar, char operador){
    int tipo;

    int izqTipo = izqTipoChar-48;
    int derTipo = derTipoChar-48;

    switch (operador){
        case '+':
            tipo = tabla_verificacion.aritmetica[izqTipo][derTipo];
            break;
        case '-':
        case '*':
        case '/':
            tipo = tabla_verificacion.aritmetica[izqTipo][derTipo];
            break;
        default:
            tipo = TIPO_ERROR;
            break;
    }

    return tipo;
}

