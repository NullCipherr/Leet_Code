class Solution {
public:
    // Verifica se n é um múltiplo de 4. Se n não for um múltiplo de 4, você pode ganhar o jogo, então a função retorna true. Caso contrário, você perderá o jogo, então a função retorna false.
    bool canWinNim(int n) {
        return n % 4 != 0 ;
    }
};
