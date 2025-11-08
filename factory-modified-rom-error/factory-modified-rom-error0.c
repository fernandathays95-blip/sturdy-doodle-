#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Código ANSI para texto vermelho
    printf("\033[1;31m");  
    
    // Exibe o alerta
    printf("⚠️ 偵測到非原廠系統 ROM；該 ROM 可能會導致您的裝置停止運作。\n");
    
    // Restaura cor normal
    printf("\033[0m");
    
    // Espera o usuário ver a mensagem
    printf("\n按 Enter 鍵繼續...");
    getchar();

    return 0;
}
