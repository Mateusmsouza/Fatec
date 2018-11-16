#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

char dic [][13]={"cat","gato", "Katze", "",
                 "dog","cachorro", "Hund", "",
                 "is", "eh", "ist", "",
                 "bad","ruim", "schlecht", "",
                 "region","regiao", "region", "",
                 "shepherds","pastores", "hirten", "",
                 "field", "campo", "feld", "",
                 "flock", "rebanho", "herde", "",
                 "night", "noite", "nacht", "",
                 "angel", "anjo", "engel", "",
                 "Lord", "Senhor", "Herr", "",
                 "glory", "gloria", "ruhm", "",
                 "great", "otimo", "groß", "",
                 "fear", "medo", "angst", "",
                 "God", "Deus", "Gott", "",
                 "good", "bom", "gut", "",
                 "day", "dia", "tag", "",
                 "city", "cidade", "stadt", "",
                 "baby", "bebe", "babe", "",
                 "earth", "terra", "erde", "",
                 "peace", "paz", "frieden", "",
                 "highest", "mais alto", "höchste", "",
                 "to", "para", "zu", "",
                 "in", "dentro", "im", "",
                 "constitution","constituicao", "verfassung", "",
                 "friend", "amigo", "freund", "",
                 "search", "pesquisa", "suche", "",
                 "graduate", "graduado", "absolvent", "",
                 "curtain", "cortina", "vorhang", "",
                 "rose", "rosa", "rose", "",
                 "I", "eu", "ich", "",
                 "cloud", "nuvem", "wolke", "",
                 "drive", "dirigir", "fahrt", "",
                 "captain", "capitao", "kapitän", ""
                 }
                                 ;
char frase [50];
char palavra [11];
int lingua;
char *p;

void pega_palavra()
 {
  char *q;
  q=palavra;
  while (*p && *p!=' ')
  {
      *q=*p;
      p++;
      q++;
  }
  if (*p==' ')p++;
  *q='\0';
 }

int traducao ()
 {
   if (lingua == 2) {
     int i;
     for(i=0;*dic[i];i=i+2)
     {
        if(strcmp(dic[i],palavra)==0) break;
     }
    if(*dic[i]) return (i+2);
    else return (-1);
  } else if (lingua == 3) {
    int i;
     for(i=0;*dic[i];i=i+2)
     {
        if(strcmp(dic[i],palavra)==0) break;
     }
    if(*dic[i]) return (i+3);
    else return (-1);
  } else {
    int i;
    for(i=0;*dic[i];i=i+2)
    {
       if(strcmp(dic[i],palavra)==0) break;
    }
   if(*dic[i]) return (i+1);
   else return (-1);
  }
 }

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao='s';
    int linha;
    while(opcao=='s')
    {
        printf("\nDigite a frase desejada:");
        fflush(stdin);
        gets(frase);
        p=frase;

        printf("Escolha a lingua a ser traduzida:\n [1] Portugues\n [2] Alemao\n [3] Coreano\n Escolha: ");
        scanf("%d", &lingua);

        pega_palavra();
        printf("\n");
        do
        {
          linha=traducao();
          if(linha!=-1)
              printf("%s ",dic[linha]);
          else
              printf("%s ",palavra);
          pega_palavra();
        }while(*palavra);
     printf("\nQuer traduzir outra frase?s/n\n");
     opcao=getche();

    }
    return 0;
    system("pause");
}
