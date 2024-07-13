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
  
  {printf("Exatamente, %s � a sede pol�tico-administrativa da alemanha.\n", resposta);
  }
  else
  {printf("ERROU BAGRE, %s?, nem faz sentido, v� estudar!!!\n", resposta);
  }
  
  puts("L� vai mais uma, qual � o planeta mais pr�ximo do sol?");
  
  gets(answer);

  if(!strcmp(answer, "mercurio")||!strcmp(answer, "Mercurio"))
  
  
  {printf("Boa! %s � o planeta mais pr�ximo do sol. Acho que da pra pegar um bronze haha.\n", answer);
  }
  
   else if(!strcmp(answer, "venus")||!strcmp(answer, "Venus")){
   

   printf("Errado, na verdade %s � o segundo planeta mais pr�ximo do sol.\n", answer);
   }
  
  else if(!strcmp(answer, "terra")||!strcmp(answer, "Terra"))
  
  {printf("Errado, na verdade a %s � o terceiro planeta mais pr�ximo do sol, lar doce lar.\n", answer);
  }
  
  else if(!strcmp(answer, "marte")||!strcmp(answer, "Marte"))
  
  {printf("Errado, na verdade %s � o quarto planeta mais pr�ximo do sol e no sistema solar � o mais parecido com a terra.\n", answer);
  }
   
  else if(!strcmp(answer, "jupiter")||!strcmp(answer, "Jupiter"))
   
   {printf("Errado, na verdade %s � o quinto planeta mais pr�ximo do sol, � gasoso e tamb�m o maior do sistema solar.\n", answer);
   }
   
   else if(!strcmp(answer, "saturno")||!strcmp(answer, "Saturno"))
   
   {printf("Errado, na verdade %s � o sexto planeta mais pr�ximo do sol e tem os maiores an�is do sistema solar.\n", answer);
   }
   
   else if(!strcmp(answer, "urano")||!strcmp(answer, "Urano"))
   
   {printf("Errado, na verdade %s � o segundo planeta mais distante do sol dentro do sistema solar, perdendo apenas para Netuno .\n", answer);
   }
   
   else if(!strcmp(answer, "netuno")||!strcmp(answer, "Netuno"))
   
   {printf("Errado, na verdade %s � o planeta mais distante do sol dentro do sistema solar, a temperatura m�dia na superf�cie � de -223 graus celsius.\n", answer);
   }
   
   else if(!strcmp(answer, "plutao")||!strcmp(answer, "Plutao"))
   
   {printf("Errado, na verdade %s deixou de ser um planeta desde 2006.\n", answer);
   }
   
   else
  {printf("Errado, %s nem � um planeta...\n", answer);
  }

   system("pause");
  
}
