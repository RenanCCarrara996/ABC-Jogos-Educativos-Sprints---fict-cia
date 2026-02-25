#include <stdio.h>
#include <locale.h>

int main(){ 1;
    int num1, opc2, voltar, idade, idadeadulto, opcao, graus;
    char next, login[50], senha[50], nome[50], nomeadulto[50], deficiencia;

    setlocale (LC_ALL, "Portuguese");

        do{
        //Tela Inicial (1)
        printf("\nBem vindo!, somos a ABC, empresa de jogos educativos que proporciona ao seu filho(a) \nmelhor reforço nos estudos e melhora no rendimento em sala de aula!\n\n");
        printf("[1] Para ver nossos contatos; \n[2] Para ver nosso catálogo de jogos; \n[3] Acessibilidade;\n[4] Ir para página de CADASTRO");
        printf("\n Digite aqui o número correspondente à sua escolha: ");
        scanf("%i", &num1);

        //Tela Número 1 - Contatos
            switch (num1){
                case 1:
                    printf("\n[1] Telefone; \n[2] Instagram; \n[3] Site; \n[4] VOLTAR.");
                    printf("\nDigite aqui: ");
                    scanf("%i", &opc2);

                    switch (opc2){
                        case 1://Tela Telefone
                            printf("\nTelefone de contato da ABC: +55 (xx) 99887-7665.");
                            printf("\n\nPara VOLTAR digite [1]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            else {
                                printf("Dígito inválido... Voltando ao início \n\n");
                                return main(1);
                            }
                        case 2:
                            printf("\nInstagram de contato da ABC: @abcgameseducativos.oficial");
                            printf("\n\nPara VOLTAR digite [1]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            else {
                                printf("Dígito inválido... Retornando ao início. \n\n");
                                return main(1);
                            }
                        case 3:
                            printf("\nNosso site ABC: www.jogoseducativosabc.com.br/home");
                            printf("\n\nPara VOLTAR digite [1]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            else {
                                printf("Dígito inválido... Retornando ao início. \n\n");
                                return main(1);
                            }
                        case 4:
                            break;

                        default:
                            printf("Número inválido... Retornando ao início. \n\n");
                            return main(1);
                    }
                    break;

                //Tela Número 2 - Catálogo de Jogos
                case 2:
                    printf("\n[1]Jogos educativos; \n[2]Jogos pra jogar com amigos; \n[3]Jogos esportivos; \n[4] VOLTAR.");
                    printf("\nDigite aqui: ");
                    scanf("%i", &opc2);

                    switch(opc2){
                        case 1://Jogos educativos
                            printf("\nNosso catálogo de jogos educativos inclui: \n - Língua Portuguesa; \n - Matemática; \n - Ciências da Natureza; \n - Ciências Humanas; \n - Disciplinas Gerais;  .");
                            printf("\nPara acessar todos os jogos cadastre-se ou experimente nosso jogo de demonstração de matemática. Para VOLTAR digite [1], para JOGAR digite [2]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            //JOGO ABAIXO
                            else if(voltar == 2){
                                int pontos = 0;
                                int numPerguntas = 5;  // Número total de perguntas

                                // Arrays para armazenar perguntas, respostas corretas e respostas dos usuários
                                char perguntas[][100] = {
                                    "Quanto é 2 + 3?",
                                    "Quanto é 8 - 2?",
                                    "Quanto é 5 * 3?",
                                    "Quanto é 10 / 2?",
                                    "Quanto é 7 + 4?"
                                };
                                int respostas[] = {5, 6, 15, 5, 11};
                                int respostasUsuario[numPerguntas];

                                printf("Bem-vindo ao Quiz Educativo de Matemática!\n\n");

                                // Loop para iterar sobre as perguntas, receber respostas e calcular pontos
                                for (int i = 0; i < numPerguntas; i++) {
                                    printf("%s\n", perguntas[i]);
                                    printf("Digite sua resposta: ");
                                    scanf("%d", &respostasUsuario[i]);

                                    if (respostasUsuario[i] == respostas[i]) {
                                        printf("Resposta correta!\n");
                                        pontos++;
                                    } else {
                                        printf("Resposta incorreta. A resposta correta era: %d\n", respostas[i]);
                                    }

                                    printf("Pontuação atual: %d\n\n", pontos);
                                }

                                printf("Fim do jogo! Sua pontuação final: %d/%d\n", pontos, numPerguntas);
                                break;
                            }

                            //JOGO ACIMA
                            else {
                                printf("Dígito inválido... Voltando ao início \n\n");
                                return main(1);
                            }
                        case 2:
                            printf("\nJogos para jogar com amigos: \n- Corrida de Kart; \n- Desafios de desenho; \n- Tiro ao alvo.");
                            printf("\nPara VOLTAR digite [1]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            else {
                                printf("Dígito inválido... Retornando ao início. \n\n");
                                return main(1);
                            }
                        case 3:
                            printf("\nOferecemos jogos esportivos como: \n- Futebol; \n- Jogos Olimpicos \n- Atletismo; \n- Corrida de obstáculos.");
                            printf("\nPara VOLTAR digite [1]: ");
                            scanf("%i", &voltar);

                            if(voltar==1){
                                break;
                            }
                            else {
                                printf("Digito invalido... Retornando ao inicio. \n\n");
                                return main(1);
                            }
                        case 4:
                            break;
                        default:
                            printf("Numero invalido... Retornando ao inicio. \n\n");
                            return main(1);
                    }
                    break;

                //Tela Número 3 - Acessibilidade
                case 3:
                    printf("\nNosso site conta com um sistema de acessibilidade, para atender a todas as necessidades das crianças. \nNa parte de login, os responsáveis preenchem uma ficha informativa sobre a criança, ajudando o site a \nprever as adaptações que serão feitas. \nPor exemplo, se a criança tiver daltonismo, as cores do site irão alterar, facilitando o uso da plataforma. \nSe for alguma outra deficiência na visão, as letras podem alterar seu tamanho para ficarem visivelmente mais \nconfortáveis para seus olhos. \nE assim sucessivamente, de modo que as crianças posssam ter as melhores experiências possíveis! \n\nDigite [1] para VOLTAR.");
                    printf("\nDigite aqui: ");
                    scanf("%i", &opc2);

                    switch(opc2){
                        case 1:
                            break;
                        default:
                            printf("Numero invalido... Retornando ao inicio. \n\n");
                            return main(1);
                    }
                    break;

                case 4:
                    printf("\n========== PAGINA DE LOGIN ==========\n");
                    printf("Bem vindo a pagina de login da ABC!\n");
                    printf("Vamos fazer o seu cadastro!\n");

                    printf("Informe seu nome completo: ");
                    scanf(" %s", &nomeadulto);

                    printf("Informe sua idade: ");
                    scanf("%d", &idadeadulto);

                    if (idadeadulto < 18) {
                        printf("IDADE MINIMA PARA LOGIN NAO ATINGIDA, PROGRAMA ENCERRADO...\n");
                        return 0;
                    }

                    printf("Digite o nome da criança: ");
                    scanf(" %s", nome);

                    printf("Digite a idade: ");
                    scanf("%d", &idade);

                    printf("O seu filho(a) possui alguma necessidade especial? Digite [s/n]: ");
                    scanf(" %c", &deficiencia);

                    if (deficiencia == 's' || deficiencia == 'S') {
                        printf("Nosso programa possui adaptações para os seguintes distúrbios:\n");
                        printf("1. Daltonismo\n");
                        printf("2. Miopia e Astigmatismo\n");
                        printf("3. Surdez\n");
                        printf("4. TDAH\n");
                        printf("5. Cegueira Parcial\n");
                        printf("Digite o número correspondente à necessidade do seu filho(a): ");
                        scanf("%d", &opcao);

                        switch (opcao) {
                            case 1:
                                printf("Você escolheu a opção de daltonismo. O site irá se adaptar para que o(a) %s possa enxergar as cores corretamente!\n", nome);
                                printf("CADASTRO EFETUADO COM SUCESSO, SR(a) %s\n", nomeadulto);
                                break;
                            case 2:
                                printf("Você escolheu a opção de Miopia e Astigmatismo. Digite o grau que seu filho(a) possui: ");
                                scanf("%d", &graus);

                                printf("O site irá aplicar um zoom nas letras e imagens de acordo com os %d graus que a criança possui.\n", graus);
                                printf("CADASTRO EFETUADO COM SUCESSO, SR(a) %s\n", nomeadulto);
                                break;

                            case 3:
                                printf("Você escolheu a opção de surdez.\nO site incluirá um sistema de libras e legendas para auxiliar na experiência da criança.\n");
                                printf("CADASTRO EFETUADO COM SUCESSO, SR(a) %s\n", nomeadulto);
                                break;

                            case 4:
                                printf("Você escolheu a opção de TDAH. O site deixará as cores mais chamativas e incluirá:\n- Sistema de guia via áudio\n- Indicadores na tela (setas)\n- Legendas.\n");
                                printf("CADASTRO EFETUADO COM SUCESSO, SR(a) %s\n", nomeadulto);
                                break;

                            case 5:
                                printf("Você escolheu a opção de Cegueira Parcial. O site irá aumentar o contraste das cores, brilho da tela e aumentar a fonte conforme necessário.\n");
                                printf("CADASTRO EFETUADO COM SUCESSO, SR(a) %s\n", nomeadulto);
                                break;

                            default:
                                printf("Opção inválida.\n");
                                break;
                        }
                    }
                    else {
                        printf("Cadastro efetuado com sucesso, SR(a) %s\n", nomeadulto);
                    }

                    break;
                //Tela de Erro, se a pessoa digitar um numero diferente de 1, 2 ou 3
                default:
                    printf("Número inválido... Tente novamente. \n\n");
                    return main(1);
            }
            printf("Deseja continuar? [s/n]\n");
            scanf(" %c", &next);

        }while (next == 's' || next == 'S');

        printf ("\nPrograma finalizado com sucesso.");


    return 0;
}
