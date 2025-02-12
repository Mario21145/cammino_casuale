

/*
[initialize_board]: {

     Cosa fa?
     Inzializza la scacchiera utile al movimento delle pedine;

     (inputs) -> {
       int cols = rappresenta le colonne in questo caso pari a 30 come da traccia;
       int rows = rappresenta le righe in questo caso pari a 30 come da traccia;
       char * = rappresenta un array di caratteri,in questo caso , che fa riferimento alla scacchiera;
     }

     (Output) -> {
       Esegue l'inizializzazione della scacchiera;
       Non ritorna niente poichè non c'è nè alcun bisogno;
     }
   }
 */
void initialize_board(int cols, int rows, char *);


/*
[pawns_step_into]: {

     Cosa fa?
     Muove le due pedine in modo sincrono all'interno della scacchiera inizializzata;

     (inputs) -> {
       int cols = rappresenta le colonne in questo caso pari a 30 come da traccia;
       int rows = rappresenta le righe in questo caso pari a 30 come da traccia;
       char * = rappresenta un array di caratteri,in questo caso , che fa riferimento alla scacchiera;
     }

     (Output) -> {
       Esegue i movimenti relativi alle pedine;
       Stampa a schermo un messaggio ove viene detto a video la posizione nella quale le due pedine si sono incontrate.
       Ritornerà i passi relativi all'incontro delle due pedine.
     }
   }
 */
int pawns_step_into(int cols, int rows, char *);


/*
[check_borders]: {

     Cosa fa?
     Controllerà se le due pedine eccedono nei limiti della matrice;

     (inputs) -> {
       int i = rappresenta l'indicie di colonna inerente a una delle due pedine;
       int j = rappresenta l'indicie di riga inerente a una delle due pedine;
       int * = rappresenta un array di interi,che fa riferimento agli array (uno per pedina) delle posizioni;
       int cols = rappresenta le colonne in questo caso pari a 30 come da traccia;
       int rows = rappresenta le righe in questo caso pari a 30 come da traccia;
     }

     (Output) -> {
       Modificherà , come nei casi implementati, gli array relativi alle posizione delle pedine andando a modificare quel determinato
       numero inerente a quella determinata posizione con -1 in modo da non eseguire il movimento.
       Non ritorna niente poichè non c'è nè alcun bisogno;
     }
   }
 */
void check_borders(int i, int j, int *, int cols, int rows);


/*
[generate_random_numbers]: {

     Cosa fa?
     Genera un numero casuale da 0 a 3;

     (inputs) -> {Non presenti}

     (Output) -> {
       Ritornerà un numero utile al movimento di quella determinata pedina.
     }
   }
 */
int generate_random_numbers();


/*
[move_pawn]: {

     Cosa fa?
     Muove quella determinata pedina attraverso l'incremento o il decremento di indice di colonna o riga;

     (inputs) -> {
       int *i = rappresenta l'indicie di colonna inerente a una delle due pedine;
       int *j = rappresenta l'indicie di riga inerente a una delle due pedine;
       int cols = rappresenta le colonne in questo caso pari a 30 come da traccia;
       int rows = rappresenta le righe in questo caso pari a 30 come da traccia;
       int * = rappresenta un array di interi,che fa riferimento agli array (uno per pedina) delle posizioni;
       int *steps = rappresenta i numeri di passi effettuati, che verranno modificati a quel determinato indirizzo di memoria.
     }

     (Output) -> {
       Modificherà, la variabile *steps e inoltre anche i due indici *i *j che faranno riferimento a quella determinata pedina;
       Non ritorna niente poichè non c'è nè alcun bisogno;
     }
   }
 */
void move_pawn(int *i, int *j, int cols, int rows, int *, int *steps);


/*
[print_board]: {

     Cosa fa?
     Stampa a video la scacchiera;

     (inputs) -> {
       int cols = rappresenta le colonne in questo caso pari a 30 come da traccia;
       int rows = rappresenta le righe in questo caso pari a 30 come da traccia;
     }

     (Output) -> {
       Mostrerà a video la scacchiera 30x30;
       Non ritorna niente poichè non c'è nè alcun bisogno;
     }
   }
 */
void print_board(int cols, int rows, char *);

/*
[print_info]: {

     Cosa fa?
     Stampa una serie di printf utile alla comprensione della scacchiera;

     (inputs) -> {Non presenti}

     (Output) -> {
       Mostrerà a video delle info relative alla scacchiera;
       Non ritorna niente poichè non c'è nè alcun bisogno;
     }
   }
 */
void print_info();