#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int done;
int task;


int fait () {
    printf("Veuillez dire 1 si la tache est finie, et si elle n'est pas finie veuillez taper 2");
    scanf("%d", &done);
    if (done == 2) {
        return 2;
    } else if (done == 1) {
        return 1;
    }
    return 0;
}

int tache (){
    int tache_finie = 0;
    int tache_a_faire = 0;
    if (task == tache_finie && tache_finie == done){
        printf("La tache est finie\n");
    } else if (task == tache_a_faire && tache_a_faire == done) {
        printf("La tache n'est pas finie \n");
    }
    return 0;
}


int restantes () {
if (done == 2) {
    printf("Vous n'avez pas fini cette tache, elle apparaitra donc comme tache restante.\n");
}
    return 0;

}

char effectuees () {
    if (done == 1){
        printf("La tache ... est finie\n");
    }

}

int main() {
    char str_task [1024];
    int fin;
    while (1) {
        printf("Veuillez rentrer une liste de taches et lorsque vous avez fini veuillez taper 2\n");
        scanf("%d", fin);
        printf("%d", fin);
        if (fin == '2') {
            break;
        }
    }
    fgets(str_task, 1024, stdin);
    printf("Les taches que vous avez rentré sont : %s", str_task);











    int menu;
    printf("Taper 1 si vous avez fini une tache, taper 2 si vous voulez voir les taches qui vous reste a faire, taper 3 si vous voulez voir les taches que vous avez effectuees.\n");
    scanf("%d", &menu);
    if (menu == 1) {
        fait();
    } else if (menu == 2){
        restantes();
    } else if (menu == 3) {
        effectuees();
    }
    return 0;
}




