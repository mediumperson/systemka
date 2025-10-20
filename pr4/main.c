#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file_ptr = fopen("nullfile.txt", "r");

    if (file_ptr == NULL) {
        perror("Ошибка открытия файла."); 
        fprintf(stderr, "Код ошибки (errno): %d\n", errno);
        
        return errno;
    }
    
    printf("Файл успешно открыт. Продолжение работы...\n");
    fclose(file_ptr);
    
    return 0;
}
