#define ES_INT 0
#define ES_CHAR 1
#define ES_FLOAT 2
#define ES_DOUBLE 3

#define TIPO_ERROR -1

#define CANT_TIPOS 6 // numero de tipos

struct Tipo_struct{
    int tipo;
    int warning;
};

struct Tipo_tabla {
    int suma[CANT_TIPOS][CANT_TIPOS]; // para operaciones de suma
    int otros[CANT_TIPOS][CANT_TIPOS]; // para operaciones de * - /


    int implicit[CANT_TIPOS][CANT_TIPOS]; 

    int sumaWarnings[CANT_TIPOS][CANT_TIPOS];

    int warningsOtros[CANT_TIPOS][CANT_TIPOS];

    
};

struct Tipo_tabla tabla_verificacion = {
        .suma={
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE },
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE},
            { ES_FLOAT,  ES_FLOAT,    ES_FLOAT,    ES_DOUBLE},
            { ES_DOUBLE, ES_DOUBLE,   ES_DOUBLE,   ES_DOUBLE}
        },

        .otros={
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE},
            { ES_INT,    ES_INT,      ES_FLOAT,    ES_DOUBLE},
            { ES_FLOAT,  ES_FLOAT,    ES_FLOAT,    ES_DOUBLE},
            { ES_DOUBLE, ES_DOUBLE,   ES_DOUBLE,   ES_DOUBLE},
            
        },

        // 0 = FALSE, 1 = TRUE, 2 = TRUE WITH WARNING
        .implicit={
            { 1, 1, 1, 1, 0, 1 },
            { 1, 1, 1, 1, 0, 1 },
            { 2, 2, 1, 1, 0, 2 },
            { 2, 2, 1, 1, 0, 2 },
            { 0, 0, 0, 0, 1, 1 },
            { 1, 1, 1, 1, 0, 1 }
        },
 
        .sumaWarnings={
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 2, 2, 2, 2, 0, 2 },
            { 0, 0, 0, 0, 0, 0 }
        },

        .warningsOtros={
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 },
            { 0, 0, 0, 0, 0, 0 }
        }
        
};



struct Tipo_struct cast_type(char izqTipoChar, char derTipoChar, char operador){
    struct Tipo_struct ret;

    int izqTipo = izqTipoChar-48;
    int derTipo = derTipoChar-48;

    switch (operador){
        case '+':
            ret.tipo = tabla_verificacion.suma[izqTipo][derTipo];
            ret.warning = tabla_verificacion.sumaWarnings[izqTipo][derTipo];
            break;
        case '0': ; // implicit
            int aux = tabla_verificacion.implicit[izqTipo][derTipo];
            ret.tipo = aux == 0 ? TIPO_ERROR : derTipo;
            ret.warning = aux == 2 ? 1 : 0;
            break;
        case '-':
        case '*':
        case '/':
            ret.tipo = tabla_verificacion.otros[izqTipo][derTipo];
            ret.warning = tabla_verificacion.warningsOtros[izqTipo][derTipo];
            break;
        default:
            ret.tipo = TIPO_ERROR;
            ret.warning = 0;
            break;
    }

    return ret;
}



char *tipoAString(char tipoChar){
    int type = tipoChar-48;
    switch (type){
        case ES_INT:
            return "INT";
        case ES_CHAR:
            return "CHAR";
        case ES_FLOAT:
            return "FLOAT";
        case ES_DOUBLE:
            return "DOUBLE";
        default:
            return "ERROR";

    }
}