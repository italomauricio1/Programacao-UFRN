//cabeçalho das funções usadas no arquivo.c
void modulocadastroUsuario(void);
int telaMenuUsuario(void);
void telaAtualizarUsuario(void);
void escolhafuncao(char);

//struct para cadastro do usuário
typedef struct usuario Usuario;
struct usuario {
    char nome[101];
    char email[40];
    int dia;
    int mes;
    int ano;
    char username[20];
    char senha[20];
    char status;
};

/*typedef struct data Data;
struct data{
    int dia;
    int mes;
    int ano;
}; */

//struct para excluir algum dado do usuário
typedef struct excluirUsuario ExcluirUsuario;
struct excluirUsuario
{
    char email [40];
};

//structs para atualização de algum parâmetro
typedef struct atualizarNome AtualizarNome;
struct atualizarNome
{
    char nome [40];
};

typedef struct atualizarEmail AtualizarEmail;
struct atualizarEmail
{
    char email [40];
};

typedef struct atualizarDataNasc AtualizarDataNasc;
struct atualizarDataNasc
{
    int dia, mes, ano;
}; 

typedef struct atualizarUsername AtualizarUsername;
struct atualizarUsername
{
    char username[20];
};

typedef struct atualizarSenha AtualizarSenha;
struct atualizarSenha
{
    char senha[20];
};

Usuario* InfoUsuario(void);
//Data* veriData( );
ExcluirUsuario* infoExcluirUs();
AtualizarNome* atualizaNome();
AtualizarEmail* atualizEmail();
AtualizarDataNasc* atualizarData();
AtualizarUsername* atualizUsername();
AtualizarSenha* atualizSenha();
void gravaUsuario(Usuario*);
void exibeUsuario(Usuario*);