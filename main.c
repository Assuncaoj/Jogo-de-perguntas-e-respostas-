//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>


int main()
{
//Variáveis

    int resp;
    char cod2;
    char cg_alt[20];
    int certo_p=0,errado_p=0;

//Ativador da acentuação gráfica,
//Comando de regionalização
 setlocale(LC_ALL, "Portuguese");

system("color 3f");
printf("\n######  ##     ## ########  ######## ########      #######  ##     ## #### ########");
printf("\n##    ## ##     ## ##     ## ##       ##     ##    ##     ## ##     ##  ##       ##  ");
printf("\n##       ##     ## ##     ## ##       ##     ##    ##     ## ##     ##  ##      ##   ");
printf("\n ######  ##     ## ########  ######   ########     ##     ## ##     ##  ##     ##    ");
printf("\n      ## ##     ## ##        ##       ##   ##      ##  ## ## ##     ##  ##    ##     ");
printf("\n##    ## ##     ## ##        ##       ##    ##     ##    ##  ##     ##  ##   ##      ");
printf("\n ######   #######  ##        ######## ##     ##     ##### ##  #######  #### ######## ");



printf("\n\n                    *®®®®®®®®®®®®®®®®®@ ");
printf("\n                  ®®®®®®®®®®®®®®®®®®®®®®®®");
printf("\n               *®®®®®®®®®®®®®®®®®®®®®®®®®®®®");
printf("\n              ®®®®®®®®®®®®@    ‘®®®®®®®®®®®®®");
printf("\n             ®®®®®®®®®®®           ®®®®®®®®®®®");
printf("\n             ®®®®®®®®®®              ®®®®®®®®®®");
printf("\n             ®®®®®®®®®              ®®®®®®®®®®     QUAL A RESPOSTA CERTA?");
printf("\n               ®®®®®               ®®®®®®®®®®®");
printf("\n                                 ‘®®®®®®®®®®®");
printf("\n                                ®®®®®®®®®®®®®");
printf("\n                             ®®®®®®®®®®®®®");
printf("\n                           ®®®®®®®®®®®®®");
printf("\n                          ®®®®®®®®®®®®");
printf("\n                         ®®®®®®®®®®");
printf("\n                       ®®®®®®®®®");
printf("\n                        ®®®®®®®®");
printf("\n                          ®®®®®");
printf("\n                                ");
printf("\n                                ");
printf("\n                         ®®®®®®®");
printf("\n                        ®®®®®®®®®");
printf("\n                       ®®®®®®®®®®®");
printf("\n                       ®®®®®®®®®®®");
printf("\n                        ®®®®®®®®®");
printf("\n                           .®‘");



//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do{
            cod2 = getch();
        }while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

//Mudar a cor da linha
        system("color f6");


//Apresentar o programa inicialmente
        printf("\n\n\n-----------------------------------------------------------------------------\n");
        printf("                              SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");
        printf ("\n\n\n\n   Olá, seja bem vindo ao  SUPER QUIZ, jogo de perguntas e respostas.");
        printf("\n\n\n   Seu objetivo é acertar o máximo de perguntas para conquistar a medalha de ouro");
        printf("\n\n\n   se errar mais do que acertar ou empatar... GAME OVER");

        printf("\n\n\n                                                    Aperte enter para avançar!");

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do{
            cod2 = getch();
        }while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

//Apresentar as instruções do jogo ao usuário.

        system("color f0"); /*Mudar a cor da linha*/

        printf("\n\n-----------------------------------------------------------------------------\n");
        printf("                         INSTRUÇÕES DO JOGO\n");
        printf("-----------------------------------------------------------------------------\n");
        printf("\n||===============================================================================||");
        printf("\n||                                                                               ||");
        printf("\n||* O jogo possui apenas uma alternativa correta;                                ||");
        printf("\n||                                                                               ||");
        printf("\n||* o Jogador tem que escolher uma alternatitva e digitar a letra correspondente;||");
        printf("\n||                                                                               ||");
        printf("\n||* Após responder cada pergunta aperte ENTER e passe para a próxima;            ||");
        printf("\n||                                                                               ||");
        printf("\n||* No final terá a opção de retornar ao jogo ou ir para o placar final          ||");
        printf("\n||                                                                               ||");
        printf("\n||                                                                               ||");
        printf("\n||===============================================================================||");

        printf("\n\n                  QUE A SORTE ESTEJA A SEU FAVOR!");

        printf("\n\n\nVamos comecar! \n\n");

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        printf("\n\nAperte enter !");

        do{
            cod2 = getch();
        }while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Rótulo, comando para onde o GoTo irá Saltar ao ser solicitado
        Inicio :

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                              SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Primeira pergunta
        printf ("\n1) QUAL PALAVRA ESTA ESCRITA CORRETAMENTE ?");
        printf("\n\na)Chicara");
        printf("\n\nb)Jiló");
        printf("\n\nc)Emcima");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[0]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[0]=='b'|| cg_alt[0]=='B')
    {
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
    }
        else
    {
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
    }

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
    {
        cod2 = getch();
    }
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Segunda pergunta
        printf ("\n2) QUAL POVO PRÉ-COLOMBIANO OCUPOU A REGIÃO ONDE HOJE SE");
        printf("\n\nLOCALIZA O MÉXICO ?");
        printf("\n\na)Maias");
        printf("\n\nb)Incas");
        printf("\n\nc)Astecas");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[1]);


//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[1]=='a'|| cg_alt[1]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                               SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Terceira pergunta
        printf ("\n3) QUAL O MAIOR ANIMAL DA TERRA ?");
        printf("\n\na)Elefante");
        printf("\n\nb)Tubarão-Baleia");
        printf("\n\nc)Baleia azul");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[2]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[2]=='c'||cg_alt[2]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("Resposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Quarta pergunta
        printf ("\n4) QUAL É O JOGO MAIS JOGADO NO MUNDO ATUALMENTE ?");
        printf("\n\na)League of legends");
        printf("\n\nb)Counter strike");
        printf("\n\nc)Battlefield");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[3]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[3]=='a'||cg_alt[3]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Quinta pergunta
        printf ("\n5) QUATRO MOEDAS SÃO LANÇADAS SIMULTANEAMENTE. QUAL A PROBABILIDADE");
        printf ("\nDE OCORRER COROA EM UMA SÓ MOEDA ?");
        printf("\n\na)1/8");
        printf("\n\nb)2/9");
        printf("\n\nc)1/4");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[4]);


//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[4]=='c'||cg_alt[4]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Sexta pergunta
        printf ("\n6) EM QUAL PAÍS FOI CONSTRUÍDO UM CANAL QUE LIGA OS OCEANOS ATLÂNTICO E PACÍFICO ?");
        printf("\n\na)México");
        printf("\n\nb)Panamá");
        printf("\n\nc)EUA");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[5]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[5]=='b'||cg_alt[5]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Sétima pergunta
        printf ("\n7) QUAL A PROPOSIÇÃO COMPOSTA LOGICAMENTE VERDADEIRA ?");
        printf("\n\na)(2=2)=>(2.3=5)");
        printf("\n\nb)(2=3)e(2.3=5)");
        printf("\n\nc)(2=3)=>(2.3=5)");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[6]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[6]=='c'||cg_alt[6]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");

        system("color B");

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Oitava pergunta
        printf ("\n8) QUAL PAÍS ESTÁ LOCALIZADO NA AMÉRICA DO NORTE ?");
        printf("\n\na)Haiti");
        printf("\n\nb)México");
        printf("\n\nc)Groelândia");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[7]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[7]=='c'||cg_alt[7]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

//Titulo do jogo
        printf("-----------------------------------------------------------------------------\n");
        printf("                                SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Nona pergunta
        printf ("\n9) EM QUAL ALTERNATIVA ESTA A PALAVRA COM O GÊNERO INDICADO INCORRETAMENTE ?");
        printf("\n\na)a ágape");
        printf("\n\nb)a grama");
        printf("\n\nc)a hélice");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[8]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[8]=='a'||cg_alt[8]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima pergunta
        printf ("\n10) O TÉTANO É UMA DOENÇA AGUDA E CONTAGIOSA QUE PODE SER");
        printf("\n\nPREVENIDA MEDIANTE CUIDADOS COM O AMBIENTE HIGIENE PESSOAL E VETORES ?");
        printf("\n\na)Certo");
        printf("\n\nb)Errado");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[9]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[9]=='b'||cg_alt[9]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima primeira pergunta
        printf ("\n11) CAPITÃES DE AREIA É UM ROMANCE ESCRITO POR QUAL AUTOR ?");
        printf("\n\na)Guimarães Rosa");
        printf("\n\nb)Machado de Assis.");
        printf("\n\nc)Jorge Amado.");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[10]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[10]=='c'||cg_alt[10]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                  SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima Segunda pergunta
        printf ("\n12) O PLURAL DE FOGÃOZINHO E CIDADÃ É : ");
        printf("\n\na)fogõezinhos e cidadãos.");
        printf("\n\nb)fogãozinhos e cidadãos.");
        printf("\n\nc)fogõezinhos e cidadões.");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[11]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[11]=='a'||cg_alt[11]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("Resposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                              SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima terceira pergunta
        printf ("\n13) QUEM FOI O ATOR PRINCIPAL DO FILME SR E SRª SMITH ? ");
        printf("\n\na)Brad Pitt");
        printf("\n\nb)Tom Hanks");
        printf("\n\nc)Tom Cruise");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[12]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[12]=='a'||cg_alt[12]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima quarta pergunta
        printf ("\n14) DADA AS SENTENÇAS: ");
        printf("\n\n1. Ele não chegou a falar com a Presidenta;");
        printf("\n\n 2. Ele sofreu um entorse grave;");
        printf("\n\n 3. A tracoma é uma doença contagiosa.");
        printf("\n\nDeduzimos que:");
        printf("\n\na)apenas a sentença 2 está correta");
        printf("\n\nb) todas estão corretas");
        printf("\n\nc)apenas a sentença 1 está correta");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[13]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[13]=='c'||cg_alt[13]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima quinta pergunta
        printf ("\n15) QUAL ANIME JAPONÊS POSSUI UMA RAPOUSA DE NOVE CALDAS ?");
        printf("\n\na)Bleach");
        printf("\n\nb)Alvin e os esquilos");
        printf("\n\nc)Naruto");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[14]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[14]=='c'||cg_alt[14]=='C')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima sexta pergunta
        printf ("\n16) DETERMINE A ÁREA DE UM TRIÂNGULO COM BASE NOS SEGUINTES DADOS:");
        printf("\n\n(base:3 e altura:8.)");
        printf("\n\na)12");
        printf("\n\nb)11");
        printf("\n\nc)16");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[15]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[15]=='a'||cg_alt[15]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;
}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                 SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima sétima pergunta
        printf ("\n17) QUAL O DESTES ESTADOS ESTÁ LOCALIZADO NA REGIÃO NORTE ? ");
        printf("\n\na)BAHIA");
        printf("\n\nb)ACRE");
        printf("\n\nc)MATO GROSSO");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[16]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[16]=='b'||cg_alt[16]=='B')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

        system("color B");/*Mudar a cor da linha*/

        printf("-----------------------------------------------------------------------------\n");
        printf("                                SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");

//Décima oitava pergunta
        printf ("\n18) QUEM CANTA A MÚSICA CINQUENTA REAIS ?");
        printf("\n\na)Naiara Azevedo");
        printf("\n\nb)Maiara e Maraisa");
        printf("\n\nc)Marília Mendoça");
        printf("\n\nResposta: ");
        scanf ("\n%c", &cg_alt[17]);

//Utilizar a condicional if...else, para analisar a resposta do usuário
        if (cg_alt[17]=='a'||cg_alt[17]=='A')
{
        system("color A");
        printf("\n\nCerta resposta.");
        certo_p++;

}
        else
{
        system("color C");
        printf ("\n\nResposta errada\n\n");
        errado_p++;
}

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();
}
        while (cod2 != 13);

        system("cls");

        system("color E");/*Mudar a cor da linha*/


        printf("-----------------------------------------------------------------------------\n");
        printf("                                SUPER QUIZ\n");
        printf("-----------------------------------------------------------------------------\n");
        printf("\n\n           TEM CERTEZA DAS SUAS RESPOSTAS?");
        printf("\n\n   VOCÊ TEM OUTRA CHANCE DE RESPONDER AS PERGUNTAS NOVAMENTE.");
        printf("\n\n   SE DESEJA RETORNAR AO JOGO DIGITE (0)");
        printf("\n\n   CASO DESEJE FINALIZAR E VERIFICAR SEU PLACAR DIGITE (1)");
        printf("\n\n                   BOA SORTE!");
        scanf("%d", &resp);

        system("cls");/*Limpar a tela anterior*/

//Utilizar a condicional if, para analisar a resposta do usuário caso ele deseje jogar novamente
        if (resp==0)

{
        system ("cls");

//Estrutura para pular para a estrutura do rótulo (INÍCIO) caso o usuário deseje retornar ao começo do jogo
        goto Inicio;
}
//Utilizar a condicional if, para analisar a resposta do usuário caso ele deseje finalizar o jogo
        if (resp==1)
{

        system("color f5");/*Mudar a cor da linha*/
        printf("\n\n------------------------------------------------------------------------------");
        printf("\n\n                           PONTUAÇÃO!");
        printf("\n\n------------------------------------------------------------------------------");
        printf ("      \nAcertos..: %d\n",certo_p);
        printf ("      \nErros....: %d\n",errado_p);

//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

}
//Utilizar a condicional if...else, para analisar se a quantidade de acertos foi maior, menor ou igual ao de erros
        if (certo_p > errado_p)
{
        system("color E");/*Mudar a cor da linha*/
//Apresentar a mensagem caso o usuário ganhe o jogo
        printf("\n\n------------------------------------------------------------------------------");
        printf("\n\n                           PARABÉEEEEENS!");
        printf("\n\n------------------------------------------------------------------------------");
        printf("\n\n                     VOCÊ GANHOU A MEDALHA DE OURO");
        printf("\n            OBTEVE UM TOTAL DE ACERTOS MAIOR QUE O DE ERROS");
        printf("\n            GUARDA ESSA MEDALHA DE OURO, FOI MUITO BEM MERECIDA");



printf("\n\n                               . ‘C‘$=033J=3‘7..");
printf("\n                            $*‘33A00305A00$JC#0. A.");
printf("\n                          .$=A5A#333J3$33$$$$03$@(@");
printf("\n                        .A0A55$33333333$$$$$$$$$33#@W ");
printf("\n                        0$A5033303333J$$$$$$$A$$0$05@Ð.");
printf("\n                      ‘0AA5JJJ0J3333$$$$$$0$$$033000A#@");
printf("\n                      #A$#A3$$333$$$$$$$$$0000A003A350#J ");
printf("\n                      .555$33333$$$$$$$$00000005A3050A0 .");
printf("\n                      ‘050JJ$$$$$$$$$$00000000AA3555$0‘..");
printf("\n                      ‘,55J$$$3$$$$$$0000000AAA0A$5A$3= .");
printf("\n                       ‘05$$$$3$$$$0000000AAAA30$$5$$$= ");
printf("\n                      .‘=55303$$J$0000000AAA$3A3$5033@A ");
printf("\n                        A#A#A0A0A03300AAA%333#555$33@$. ");
printf("\n                        .*C‘555J30$$$0AA$J303050$J,@. ");
printf("\n                          .J‘30555J$A55A5AAA$3$$3'‘ ");
printf("\n                            .@#$$3$00555A3C3@3##@.");
printf("\n                            #######A$#$##0#######$");
printf("\n                          .‘###A####A############# ");
printf("\n                          .########AA#AA#A########(");
printf("\n                          ‘A#######AAA#AAAAAA#####%");
printf("\n                          ####A#AAAAAA$AAAAAAAAAAAA‘");
printf("\n                        .,AA##AAAAAAAA ‘AAAAAAAAAAAA‘");
printf("\n                        .0AAAAAA##AAA0  $AAAAAAAAAAA#");
printf("\n                         AA#AAAAAAAAA‘ .‘AAAAAAAAAAAA‘");
printf("\n                        0$AA$AAAAAAA#.  .AAAAAA#AAAAA$.");
printf("\n                       ‘AAA##‘‘$AA$A‘    ,AAA$#..##AAA‘");
printf("\n                      .$$@@‘.  AAAAA      $AAA‘    C#$A");
printf("\n                      ‘#=.     =AA$‘      ,AA#     . ‘#");


//Utilizar a estrutura de repetição enquanto o usuário apertar enter para avançar no jogo
        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

}
        else

{
//Apresentar a mensagem caso o usuário perca o jogo
        printf("\n\n------------------------------------------------------------------------------");
        printf("\n\n                             GAME OVER");
        printf("\n\n------------------------------------------------------------------------------");
        printf("\n\n               SEU NÚMERO DE ACERTOS FOI MENOR OU IGUAL AO DE ERROS");
        printf("\n                      PORTANTO NÃO GANHOU A MEDALHA DE OUTRO");

        do
{
        cod2 = getch();

}
        while (cod2 != 13);

        system("cls");/*Limpar a tela anterior*/

}
        system("color F");/*Mudar a cor da linha*/
//Apresentar a mensagem de agradecimento após o usuário finalizar o jogo
        system("cls");/*Limpar a tela anterior*/
        printf("\n\nOBRIGADO POR PARTICIPAR DO QUIZ");
        printf("\n\n\n\n\n");


 return (0);


}
