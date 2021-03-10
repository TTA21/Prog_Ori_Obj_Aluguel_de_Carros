#include<vector>
#include<string>

enum Franquias{
    Nome_Franquia1, Nome_Franquia2, Nome_Franquia3 /*Inclua a empresa inteira*/
};

namespace veic{

    enum Tipo_Veiculo{
        Normal, Luxo, Caminhonete, Caminhao, Moto /*etc, Todos os tipos de carros da empresa*/
    };
    enum Marcas{
        Subaru, Rolls_Royce, Ford, Mg_Motors, Nissan /*etc*/
    };
    enum Cores{
        Vermelho, Preto, Amarelo, Azul /*Até gradientes se necessario*/
        ///Talvez fosse uma boa ieia remover o enum e passar o RRGGBBAA em unsigned char,
        /// e em ua interface dar uma roda de cores
    };

    class Veiculo_Alug{

        private:
        Franquias alugado_por;
        Franquias devolver_para;
        unsigned int alugado_em;
        unsigned int devolver_ate;
        unsigned int aluguel;
        std::wstring detalhes;  ///de Transação
        
        public: 
        ///TODO:
        ///Getters e Setters que não causem conflito, ex [ alugado_em tem que ser menor que devolver_ate ], etc
        ///Talvez eliminar o "Detalhes de transação" montando outras maneiras de pagamento em uma classe separada
        ///Fazer desconstrutor avisar ao banco de dados que esse carro não está mais alugado

    };

    class Veiculo: public Veiculo_Alug{

        private:
        char placa[7];
        Tipo_Veiculo tipo;
        Marcas marca;
        Cores cor;
        std::string detalhes; ///Detalhes do carro, como decalques e listras, etc

        public:
        ///TODO:
        ///Implementar setters e Getters que não causem conflito, ex [ não há duas placas iguais ]

    };

    ///TODO:
    ///No namespace iplementar algoritimos de pesquiza baseado em variaveis, dado o ponteiro do vetor..

    ///Ex:
    unsigned long procurar_por_placa( std::vector<Veiculo> veiculos ){
        ///return veiculos[index do que foi encontrado]
    }

};

namespace ru{   ///Recursos Humanos

    enum Cargos{
        Cargo1, Cargo2, Cargo3 /*Todos os cargos da empresa*/
    }

}