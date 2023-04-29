# Projeto de Vetores em C++

## Descrição
Este projeto em C++ consiste em um programa para realizar diferentes tipos de operações com vetores utilizando instâncias da classe "vector.h", essa classe foi criada especificamente para facilitar a criação, destruição e tratamento dos vetores durante as operações. Esse projeto foi desenvolvido para a disciplina Estrutura de Dados do curso Desenvolvimento de Software Multiplataforma da Faculdade de Tecnologia Zona Sul e têm como objetivo demonstrar todas as operações básicas, porém, essenciais para o estudo de vetores.

## Conteúdo "include\vector.h"
- Contrutor: `VectorHolder(size_t tamanho)`
    - Descrição: Inicializa a variável "mSize" e o ponteiro "mVector" com o parâmetro "tamanho".

- Destrutor: `~VectorHolder()`
    - Descrição: Destrói todos os elementos do vetor após deixar o escopo onde a classe foi instanciada.

- Nulo: `void null()`
    - Descrição: Inicializa o vetor com elementos nulos.

- Setter: `void set()`
    - Descrição: Inicializa o vetor com elementos aleatórios.

- Setter: `void setPar()`
    - Descrição: Inicializa o vetor com elementos pares.

- Setter: `void setImpar()`
    - Descrição: Inicializa o vetor com elementos ímpares.

- Modificador: `void modify(size_t index, Type valor)`
    - Descrição: Modifica a posição do parâmetro "index" com o elemento "valor".

- Getter: `Type get(size_t index) const`
    - Descrição: Retorna um elemento do vetor na posição "index".

- Impressor: `void print() const`
    - Descrição: Imprime todos os elementos do vetor.

- Limpar Tela: `void clearScreen()`
    - Descrição: Limpa a tela, evitando o uso de comandos do sistema operacional e da biblioteca "cstdlib".

## Conteúdo "main.cpp"
- Limpar Tela: `void clearScreen()`
    - Descrição: Limpa a tela, evitando o uso de comandos do sistema operacional e da biblioteca "cstdlib".

- Programa A: `void programaA()`
    - Objetivo: Ler 10 elementos de uma matriz tipo vetor e apresentá-los.

- Programa B: `void programaB()`
    - Objetivo: Ler 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor B.

- Programa C: `void programaC()`
    - Objetivo: Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C.

- Programa D: `void programaD()`
    - Objetivo: Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A correspondente”. Apresentar as matrizes A e B.

- Programa E: `void programaE()`
    - Objetivo: Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30. Apresentar a matriz C.

- Programa F: `void programaF()`
    - Objetivo: Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de armazenar 50 elementos. Apresentar a matriz C.

- Programa G: `void programaG()`
    - Objetivo: Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e assim por diante. Apresentar as matrizes A e B lado a lado.

- Programa H: `void programaH()`
    - Objetivo: Ler três matrizes (A, B e C) de uma dimensão com 5 elementos cada. Construir uma matriz D, sendo esta a junção das três outras matrizes. Desta forma D deverá ter o triplo de elementos, ou seja, 15. Apresentar os elementos da matriz D.

- Programa H: `void programaH()`
    - Objetivo: Ler três matrizes (A, B e C) de uma dimensão com 5 elementos cada. Construir uma matriz D, sendo esta a junção das três outras matrizes. Desta forma D deverá ter o triplo de elementos, ou seja, 15. Apresentar os elementos da matriz D.

- Programa I: `void programaI()`
    - Objetivo: Ler 15 elementos reais para uma matriz A de uma dimensão do tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, observando a seguinte lei de formação: “Todo elemento da matriz A que possuir índice par deverá ter seu elemento dividido por 2; caso contrário, o elemento da matriz A deverá ser multiplicado por 1.5”. Apresentar as matrizes A e B lado a lado.

- Programa J: `void programaJ()`
    - Objetivo: Ler duas matrizes A e B de uma dimensão com 6 elementos. A matriz A deverá aceitar apenas a entrada de valores pares, enquanto a matriz B deverá aceitar apenas a entrada de valores ímpares. A entrada das matrizes deverá ser validada pelo programa e não pelo usuário. Construir uma matriz C de forma que a matriz C seja a junção das matrizes A e B, de modo que a matriz C contenha 12 elementos. Apresentar a matriz C.

## Como usar
Para compilar e executar o programa, é necessário ter um compilador de C++ instalado em sua máquina, para instalar é só seguir os seguintes passos.
    
- 1: Instale a IDE Visual Studio Code. <a href="https://code.visualstudio.com/download">Site oficial</a>.

- 2: Instale a extensão de C/C++ para o Visual Studio Code. Você pode instalá-la pesquisando por 'c++' em Extensões, veja (Ctrl+Shift+X).

- 3: Obtenha a última versão do Mingw-w64 utilizando MSYS2, que fornece compilações nativas atualizadas do GCC, Mingw-w64, e outras ferramentas e bibliotecas úteis do C++. Você pode baixar o instalador mais recente da página MSYS2 ou usar este link para o instalador. <a href=https://github.com/msys2/msys2-installer/releases/download/2022-06-03/msys2-x86_64-20220603.exe>Link oficial</a>.

- 4: Siga as instruções de <strong>instalação</strong> no site MSYS2 para instalar o Mingw-w64. Tome cuidado para executar cada menu Iniciar e comando pacman necessários. <a href="https://www.msys2.org/">Site oficial</a>.

- 5: Instale o conjunto de ferramentas Mingw-w64 (<strong>pacman -S --needed base-devel mingw-w64-x86_64-toolchain</strong>). Execute o comando <strong>pacman</strong> em um terminal MSYS2. Aceite <strong>default</strong> para instalar todos os membros do grupo no conjunto de ferramentas.

- 6: Adicione o caminho para sua pasta <strong>bin</strong> Mingw-w64 à variável de ambiente Windows <strong>PATH</strong> usando as seguintes etapas:
    - Na barra de pesquisa do Windows, digite 'configurações' para abrir as configurações do Windows.
    - Pesquise por <strong>Editar as variáveis de ambiente para sua conta</strong>.
    - Escolha a variável <strong>Path</strong> em suas <strong>Variáveis ​​de usuário</strong> e selecione <strong>Editar...</strong>.
    - Selecione <strong>Novo</strong> e adicione o caminho da pasta de destino Mingw-w64 ao caminho do sistema. O caminho exato depende de qual versão do Mingw-w64 você instalou e onde o instalou. Se você usou as configurações acima para instalar o Mingw-w64, adicione isso ao caminho: <strong>C:\msys64\mingw64\bin</strong>.
    - Selecione <strong>OK</strong> para salvar o PATH atualizado. Você precisará reabrir qualquer janela de console para que o novo local PATH esteja disponível.

- 7: Verifique a instalação do MinGW abrindo um novo prompt de comando e digitando: 
    - gcc --version
    - g++ --version
    - gdb --version

- 8: Abra a pasta do projeto no VS Code e pressione o botão play no canto superior direito do editor.

- 9: Escolha <strong>C/C++: g++.exe build and active file</strong> na lista de compiladores detectados em seu sistema.

- 10: Você só será solicitado a escolher um compilador na primeira vez que executar <strong>main.cpp</strong>. Este compilador será definido como o compilador "default" no arquivo <strong>.vscode/tasks.json</strong>.

## Contribuições
Contribuições são sempre bem-vindas! Caso tenha encontrado algum problema ou tenha alguma sugestão de melhoria, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença
Este projeto é distribuído sob a licença MIT. Para mais informações, consulte o arquivo LICENSE.