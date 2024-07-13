#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "Portuguese");

  char resposta[10];
  char answer[10];
  
  puts("Qual a capital da alemanha?");
  
  gets(resposta);
  
  if(!strcmp(resposta, "berlim") || !strcmp(resposta, "Berlim"))
  
  {printf("Exatamente, %s é a sede político-administrativa da alemanha.\n", resposta);
  }
  else
  {printf("ERROU BAGRE, %s?, nem faz sentido, vá estudar!!!\n", resposta);
  }
  
  puts("Lá vai mais uma, qual é o planeta mais próximo do sol?");
  
  gets(answer);

  if(!strcmp(answer, "mercurio")||!strcmp(answer, "Mercurio"))
  
  
  {printf("Boa! %s é o planeta mais próximo do sol. Acho que da pra pegar um bronze haha.\n", answer);
  }
  
   else if(!strcmp(answer, "venus")||!strcmp(answer, "Venus")){
   

   printf("Errado, na verdade %s é o segundo planeta mais próximo do sol.\n", answer);
   }
  
  else if(!strcmp(answer, "terra")||!strcmp(answer, "Terra"))
  
  {printf("Errado, na verdade a %s é o terceiro planeta mais próximo do sol, lar doce lar.\n", answer);
  }
  
  else if(!strcmp(answer, "marte")||!strcmp(answer, "Marte"))
  
  {printf("Errado, na verdade %s é o quarto planeta mais próximo do sol e no sistema solar é o mais parecido com a terra.\n", answer);
  }
   
  else if(!strcmp(answer, "jupiter")||!strcmp(answer, "Jupiter"))
   
   {printf("Errado, na verdade %s é o quinto planeta mais próximo do sol, é gasoso e também o maior do sistema solar.\n", answer);
   }
   
   else if(!strcmp(answer, "saturno")||!strcmp(answer, "Saturno"))
   
   {printf("Errado, na verdade %s é o sexto planeta mais próximo do sol e tem os maiores anéis do sistema solar.\n", answer);
   }
   
   else if(!strcmp(answer, "urano")||!strcmp(answer, "Urano"))
   
   {printf("Errado, na verdade %s é o segundo planeta mais distante do sol dentro do sistema solar, perdendo apenas para Netuno .\n", answer);
   }
   
   else if(!strcmp(answer, "netuno")||!strcmp(answer, "Netuno"))
   
   {printf("Errado, na verdade %s é o planeta mais distante do sol dentro do sistema solar, a temperatura média na superfície é de -223 graus celsius.\n", answer);
   }
   
   else if(!strcmp(answer, "plutao")||!strcmp(answer, "Plutao"))
   
   {printf("Errado, na verdade %s deixou de ser um planeta desde 2006.\n", answer);
   }
   
   else
  {printf("Errado, %s nem é um planeta...\n", answer);
  }

   system("pause");
  
}
