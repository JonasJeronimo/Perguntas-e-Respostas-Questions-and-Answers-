#include <iostream>

using namespace std;

//prototipa�ao das fun�oes (prototyping functions)
void apresentacao(string nome);
void fimdejogo(string nome, int din);

void pergunta1(int resp, int *quest);
void pergunta2(int resp, int *quest);
void pergunta3(int resp, int *quest);
void pergunta4(int resp, int *quest);
void pergunta5(int resp, int *quest);
void pergunta6(int resp, int *quest);
void pergunta7(int resp, int *quest);
void pergunta8(int resp, int *quest);
void pergunta9(int resp, int *quest);
void pergunta10(int resp, int *quest);
void pergunta11(int resp, int *quest);
void pergunta12(int resp, int *quest);
void pergunta13(int resp, int *quest);
void pergunta14(int resp, int *quest);
void pergunta15(int resp, int *quest);

void respostaCorreta1();
void respostaCorreta2();
void respostaCorreta3();
void respostaCorreta4();
void respostaCorreta5();
void respostaCorreta6();
void respostaCorreta7();
void respostaCorreta8();
void respostaCorreta9();
void respostaCorreta10();
void respostaCorreta11();
void respostaCorreta12();
void respostaCorreta13();
void respostaCorreta14();
void respostaCorreta15();

int main(){
	
	//fun�ao de acentua�ao do sistema (system accentuation function)
	setlocale(LC_ALL,"");
	
	//variaveis
	string nome = " ";
	int din = 0;
	int resp = 0;
	int quest = 0;
	int errado = 1;
	
	//apresenta�ao do usuario ao sistema (presenting the user to the system)
	apresentacao(nome);
	system("PAUSE");
	system("CLS");
	
	//apari�ao das perguntas para o usuario (appearance of questions for the user)
	pergunta1(resp, &quest);
	
	//se o usuario acertar, a proxima pergunta aparecer� (if the user get it right, the next question will appear)
	if(quest == 1){
		system("CLS");
		errado +=1;
		pergunta2(resp, &quest);
	}
	if(quest == 2){
		system("CLS");
		errado +=1;
		pergunta3(resp, &quest);
	}
	if(quest == 3){
		system("CLS");
		errado +=1;
		pergunta4(resp, &quest);
	}
	if(quest == 4){
		system("CLS");
		errado +=1;
		pergunta5(resp, &quest);
	}
	if(quest == 5){
		system("CLS");
		din += 205;
		errado +=1;
		pergunta6(resp, &quest);
	}
	if(quest == 6){
		system("CLS");
		din += 200;
		errado +=1;
		pergunta7(resp, &quest);
	}
	if(quest == 7){
		system("CLS");
		din += 250;
		errado +=1;
		pergunta8(resp, &quest);
	}
	if(quest == 8){
		system("CLS");
		din += 500;
		errado +=1;
		pergunta9(resp, &quest);
	}
	if(quest == 9){
		system("CLS");
		din += 1000;
		errado +=1;
		pergunta10(resp, &quest);
	}
	if(quest == 10){
		system("CLS");
		din += 2550;
		errado +=1;
		pergunta11(resp, &quest);
	}
	if(quest == 11){
		system("CLS");
		errado +=1;
		pergunta12(resp, &quest);
	}
	if(quest == 12){
		system("CLS");
		errado +=1;
		pergunta13(resp, &quest);
	}
	if(quest == 13){
		system("CLS");
		errado +=1;
		pergunta14(resp, &quest);
	}
	if(quest == 14){
		system("CLS");
		din += 100000;
		errado +=1;
		pergunta15(resp, &quest);
		
	//mas se o ususario errar, a mensagem de fim de jogo e a resposta da pergunta q ele errou aparecer� na tela (but if the user misses, the game over message and the answer to the question he missed will appear on the screen)
	}else{
		if(errado == 1){
			fimdejogo(nome, din);
			respostaCorreta1();
		}
		if(errado == 2){
			fimdejogo(nome, din);
			respostaCorreta2();
		}
		if(errado == 3){
			fimdejogo(nome, din);
			respostaCorreta3();
		}
		if(errado == 4){
			fimdejogo(nome, din);
			respostaCorreta4();
		}
		if(errado == 5){
			fimdejogo(nome, din);
			respostaCorreta5();
		}
		if(errado == 6){
			fimdejogo(nome, din);
			respostaCorreta6();
		}
		if(errado == 7){
			fimdejogo(nome, din);
			respostaCorreta7();
		}
		if(errado == 8){
			fimdejogo(nome, din);
			respostaCorreta8();
		}
		if(errado == 9){
			fimdejogo(nome, din);
			respostaCorreta9();
		}
		if(errado == 10){
			fimdejogo(nome, din);
			respostaCorreta10();
		}
		if(errado == 11){
			fimdejogo(nome, din);
			respostaCorreta11();
		}
		if(errado == 12){
			fimdejogo(nome, din);
			respostaCorreta12();
		}
		if(errado == 13){
			fimdejogo(nome, din);
			respostaCorreta13();
		}
		if(errado == 14){
			fimdejogo(nome, din);
			respostaCorreta14();
		}
		if(errado == 15){
			fimdejogo(nome, din);
			respostaCorreta15();
		}
	}
	return 0;
}

//fun�ao de apresenta�ao do usuario ao sistema (function of presentation of the user to the system)
void apresentacao(string nome){
	cout << "========== BEM VINDO ==========\n\n";
	cout << "Ol�, qual seu nome?\n";
	cin >> nome;
	cout << "\nSauda��es, " << nome << "\n\n";
	cout << "Voc� ser� posto � prova nesse programa, iremos apresentar 15 perguntas e voc� receber� uma quantidade de dinheiro para cada resposta correta. � cada 5 perguntas, voc� alcan�ar� um checkpoint.\n";
	cout << "\n\nVAMOS COME�AR!!!\n\n\n";
}

//tela de fim de jogo (game over screen)
void fimdejogo(string nome, int din){
	cout << "\n\nSinto muito, colega, mas sua jornada cheogu ao fim, voc� terminou o jogo com " << din << " reais";
}

//perguntas (questions)
void pergunta1(int resp, int *quest){
	cout << "Q1: Normalmente, quantos litros de sangue uma pessoa tem? Em m�dia, quantos s�o retirados numa doa��o de sangue?" << "\n\n";
	cout << "1) Tem entre 2 a 4 litros. S�o retirados 450 mililitros\n2) Tem entre 4 a 6 litros. S�o retirados 450 mililitros\n3) Tem 10 litros. S�o retirados 2 litros\n4) Tem 7 litros. S�o retirados 1,5 litros\n5) Tem 0,5 litros. S�o retirados 0,5 litros\n";
	cin >> resp;
	if(resp == 2){
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}
void pergunta2(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q2: De quem � a famosa frase 'Penso, logo existo'?" << "\n\n";
	cout << "a) Plat�o\n2) Galileu Galilei\n3) Descartes\n4) S�crates\n5) Francis Bacon\n";
	cin >> resp;
	if(resp == 3){
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta3(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q3: De onde � a inven��o do chuveiro el�trico?" << "\n\n";
	cout << "1) Fran�a\n2) Inglaterra\n3) Brasil\n4) Austr�lia\n5) It�lia\n";
	cin >> resp;
	if(resp == 3){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta4(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q4: Quais o menor e o maior pa�s do mundo?" << "\n\n";
	cout << "1) Vaticano e R�ssia\n2) Nauru e China\n3) M�naco e Canad�\n4) Malta e Estados Unidos\n5) S�o Marino e �ndia\n";
	cin >> resp;
	if(resp == 1){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta5(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q5: Qual o nome do presidente do Brasil que ficou conhecido como Jango?" << "\n\n";
	cout << "1) J�nio Quadros\n2) Jacinto Anjos\n3) Get�lio Vargas\n4) Jo�o Figueiredo\n5) Jo�o Goulart\n";
	cin >> resp;
	if(resp == 5){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta6(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q6: Qual o grupo em que todas as palavras foram escritas corretamente??" << "\n\n";
	cout << "1) Aster�stico, beneficiente, meteorologia, entertido\n2) Asterisco, beneficente, meteorologia, entretido\n3) Asterisco, beneficente, metereologia, entretido\n4) Aster�stico, beneficiente, metereologia, entretido\n5) Asterisco, beneficiente, metereologia, entretido\n";
	cin >> resp;
	if(resp == 2){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta7(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q7: Qual o livro mais vendido no mundo a seguir � B�blia??" << "\n\n";
	cout << "1) O Senhor dos An�is\n2) Dom Quixote\n3) O Pequeno Pr�ncipe\n4) Ela, a Feiticeira\n5) Um Conto de Duas Cidades\n";
	cin >> resp;
	if(resp == 2){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta8(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q8: Quantas casas decimais tem o n�mero pi?" << "\n\n";
	cout << "1) Duas\n2) Centenas\n3) Infinitas\n4) Vinte\n5) Milhares\n";
	cin >> resp;
	if(resp == 3){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta9(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q9: Atualmente, quantos elementos qu�micos a tabela peri�dica possui?" << "\n\n";
	cout << "1) 113\n2) 109\n3) 108\n4) 118\n5) 92\n";
	cin >> resp;
	if(resp == 4){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta10(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q10: Quais os pa�ses que t�m a maior e a menor expectativa de vida do mundo??" << "\n\n";
	cout << "1) Jap�o e Serra Leoa\n2) Austr�lia e Afeganist�o\n3) It�lia e Chade\n4) Brasil e Congo\n5) Estados Unidos e Angola\n";
	cin >> resp;
	if(resp == 1){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta11(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q11: O que a palavra legend significa em portugu�s?" << "\n\n";
	cout << "1) Legenda\n2) Conto\n3) Hist�ria\n4) Lenda\n5) Legend�rio\n";
	cin >> resp;
	if(resp == 4){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta12(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q12: Qual o n�mero m�nimo de jogadores numa partida de futebol?" << "\n\n";
	cout << "1) 8\n2) 10\n3) 9\n4) 5\n5) 7\n";
	cin >> resp;
	if(resp == 5){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta13(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q13: Quais os principais autores do Barroco no Brasil?" << "\n\n";
	cout << "1) Greg�rio de Matos, Bento Teixeira e Manuel Botelho de Oliveira\n2) Miguel de Cervantes, Greg�rio de Matos e Danthe Alighieri\n3) Padre Ant�nio Vieira, Padre Manuel de Melo e Greg�rio de Matos\n4) Castro Alves, Bento Teixeira e Manuel Botelho de Oliveira\n5) �lvares de Azevedo, Greg�rio de Matos e Bento Teixeira\n";
	cin >> resp;
	if(resp == 1){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta14(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q14: Quais as duas datas que s�o comemoradas em novembro?" << "\n\n";
	cout << "1) Independ�ncia do Brasil e Dia da Bandeira\n2) Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra\n3) Dia do M�dico e Dia de S�o Lucas\n4) Dia de Finados e Dia Nacional do Livro\n5) Black Friday e Dia da �rvore\n";
	cin >> resp;
	if(resp == 2){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

void pergunta15(int resp, int *quest){
	cout << "Resposta correta! Pr�xima pergunta\n\n";
	cout << "Q15: Quais s�o os tr�s predadores do reino animal reconhecidos pela habilidade de ca�ar em grupo, se camuflar para surpreender as presas e possuir sentidos apurados, respectivamente:?" << "\n";
	cout << "1) Tubar�o branco, crocodilo e sucuri\n2) Tigre, gavi�o e orca\n3) Hiena, urso branco e lobo cinzento\n4) Orca, on�a e tar�ntula\n5) Le�o, tubar�o branco e urso cinzento\n";
	cin >> resp;
	if(resp == 3){
		cout << "Resposta correta! Pr�xima pergunta\n\n";
		*quest+=1;
		cout << "\n\n\n" << *quest;
	}
}

//corre�ao das perguntas (correction of questions)
void respostaCorreta1(){
	cout << "\n\nA resposta correta �: 2) Tem entre 4 a 6 litros. S�o retirados 450 mililitros\n";
}

void respostaCorreta2(){
	cout << "\n\nA resposta correta �: 3) Descartes\n";
}

void respostaCorreta3(){
	cout << "\n\nA resposta correta �: 3) Brasil\n";
}

void respostaCorreta4(){
	cout << "\n\nA resposta correta �: 1) Vaticano e R�ssia\n";
}

void respostaCorreta5(){
	cout << "\n\nA resposta correta �: 5) Jo�o Goulart\n";
}

void respostaCorreta6(){
	cout << "\n\nA resposta correta �: 2) Asterisco, beneficente, meteorologia, entretido\n";
}

void respostaCorreta7(){
	cout << "\n\nA resposta correta �: 2) Dom Quixote\n";
}

void respostaCorreta8(){
	cout << "\n\nA resposta correta �: 3) Infinitas\n";
}

void respostaCorreta9(){
	cout << "\n\nA resposta correta �:4) 118\n";
}

void respostaCorreta10(){
	cout << "\n\nA resposta correta �: 1) Jap�o e Serra Leoa\n";
}

void respostaCorreta11(){
	cout << "\n\nA resposta correta �: 4) Lenda\n";
}

void respostaCorreta12(){
	cout << "\n\nA resposta correta �: 5) 7\n";
}

void respostaCorreta13(){
	cout << "\n\nA resposta correta �: 1) Greg�rio de Matos, Bento Teixeira e Manuel Botelho de Oliveira\n";
}

void respostaCorreta14(){
	cout << "\n\nA resposta correta �: 2) Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra\n";
}

void respostaCorreta15(){
	cout << "\n\nA resposta correta �: 3) Hiena, urso branco e lobo cinzento\n";
}
