#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> num_map  ; // Cria um mapa não ordenado para armazenar os números e seus índices
        
        // Percorre o vetor de números
        for (int i = 0; i < nums.size(); i++) 
        {
            int complement = target - nums[i] ; // Calcula o complemento do número atual
            
            // Se o complemento já estiver no mapa, retorna os índices dos dois números que somam o alvo
            if (num_map.find(complement) != num_map.end()) 
            {
                return { num_map[complement], i } ;
            }
            
            // Se o complemento não estiver no mapa, adiciona o número atual e seu índice ao mapa
            num_map[nums[i]] = i ;
        }
        
        // Se nenhum par de números que soma o alvo for encontrado, retorna um vetor vazio
        return {} ;
    }
};