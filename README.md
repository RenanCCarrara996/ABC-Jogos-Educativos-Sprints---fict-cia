# 🎮 Projeto ABC - Sprint 3 (Codificação em C)

Este repositório contém o código desenvolvido durante a **Sprint 3 (2024)** do projeto **ABC Jogos Educativos**.  
O objetivo foi criar um **protótipo de site** e um **executável em C** que simulasse a navegação e funcionalidades da plataforma.

---

## 📌 Contexto do Projeto

- **Empresa fictícia:** ABC Jogos Educativos  
- **Objetivo:** Proporcionar reforço escolar e melhorar o rendimento das crianças em sala de aula por meio de jogos interativos.  
- **Sprint 3:** Desenvolvimento de um protótipo em C que simula:
  - Tela inicial com opções de navegação
  - Catálogo de jogos
  - Sistema de acessibilidade (simulado via mensagens)
  - Página de cadastro com informações básicas
  - Mini jogo educativo de matemática (quiz)

---

## 🖥️ Funcionalidades Implementadas

- **Tela inicial:** Menu com opções de contatos, catálogo, acessibilidade e cadastro.  
- **Contatos:** Exibe telefone, Instagram e site da empresa fictícia.  
- **Catálogo de jogos:**  
  - Jogos educativos (inclui quiz de matemática)  
  - Jogos para amigos (corrida de kart, desafios de desenho, tiro ao alvo)  
  - Jogos esportivos (futebol, olimpíadas, atletismo, corrida de obstáculos)  
- **Acessibilidade:**  
  - O programa **não adapta o site de verdade**, apenas exibe mensagens simulando ajustes (daltonismo, miopia/astigmatismo, surdez, TDAH e cegueira parcial).  
  - As informações são armazenadas em variáveis para simular o cadastro.  
- **Cadastro:**  
  - Cadastro de responsável e criança  
  - Verificação de idade mínima (18 anos para login)  
  - Inclusão de necessidades especiais com mensagens de confirmação  
- **Quiz de Matemática:**  
  - 5 perguntas básicas de operações matemáticas  
  - Feedback imediato (correto/incorreto)  
  - Pontuação final exibida ao término  

---

## 🚀 Como Executar

1. Compile o código com um compilador C (exemplo usando GCC):

   ```bash
   gcc sprint3.c -o sprint3
   ```  
  
2.Execute o programa::
  
   ```bash
   ./sprint3
   ```

---

## 📂 Estrutura do Código

- **Bibliotecas utilizadas:**  
  - `stdio.h` → Entrada e saída padrão  
  - `locale.h` → Configuração de idioma (Português)  

- **Principais variáveis:**  
  - `num1, opc2, voltar` → Controle de menus  
  - `idade, idadeadulto` → Idades da criança e responsável  
  - `nome, nomeadulto` → Cadastro de nomes  
  - `deficiencia, opcao, graus` → Sistema de acessibilidade (simulado)  

---

## 🎯 Objetivo da Sprint

A Sprint 3 focou na **codificação em C** para validar a ideia do projeto, criando um protótipo funcional que simula a experiência de navegação e interação com o site.  
Este protótipo é **fictício** e não possui integração real com uma plataforma web.

---

## 📅 Histórico

- **Sprint 1:** Ideação e levantamento de requisitos  
- **Sprint 2:** Protótipo inicial do site (mockup)  
- **Sprint 3:** Codificação em C (este repositório)  

---

## 📜 Licença

Este projeto é **fictício** e foi desenvolvido apenas para fins acadêmicos e de aprendizado.  
Não possui fins comerciais e pode ser utilizado livremente como referência ou estudo.

---

## 🖼️ Exemplo de Execução no Terminal

```text
Bem vindo!, somos a ABC, empresa de jogos educativos que proporciona ao seu filho(a)
melhor reforço nos estudos e melhora no rendimento em sala de aula!

[1] Para ver nossos contatos;
[2] Para ver nosso catálogo de jogos;
[3] Acessibilidade;
[4] Ir para página de CADASTRO

Digite aqui o número correspondente à sua escolha: 2

[1] Jogos educativos;
[2] Jogos pra jogar com amigos;
[3] Jogos esportivos;
[4] VOLTAR.

Digite aqui: 1

Nosso catálogo de jogos educativos inclui:
 - Língua Portuguesa;
 - Matemática;
 - Ciências da Natureza;
 - Ciências Humanas;
 - Disciplinas Gerais.

Para acessar todos os jogos cadastre-se ou experimente nosso jogo de demonstração de matemática.
Para VOLTAR digite [1], para JOGAR digite [2]: 2

Bem-vindo ao Quiz Educativo de Matemática!

Quanto é 2 + 3?
Digite sua resposta: 5
Resposta correta!
Pontuação atual: 1
...
Fim do jogo! Sua pontuação final: 4/5

