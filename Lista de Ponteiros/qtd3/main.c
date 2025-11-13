/*
Um ponteiro
É uma variável que guarda o endereço de outra variável.
Ou seja, ele “aponta” para o local na memória onde está o valor de outra variável.

Exemplo:
int x = 10;
int *p = &x;

x guarda o valor 10.
p guarda o endereço de memória de x (ex: 0x7ff…).



Um ponteiro para ponteiro

É um ponteiro que guarda o endereço de outro ponteiro.

Exemplo:
int x = 10;
int *p = &x;
int **pp = &p;

p aponta para x
pp aponta para p



O endereço de um ponteiro

Todo ponteiro também ocupa um espaço na memória, então ele também tem um endereço próprio.

Exemplo:
int x = 10;
int *p = &x;
printf("%p\n", &p);

&p mostra onde o ponteiro está guardado na memória,
não o endereço da variável que ele aponta.



O conteúdo de um ponteiro

É o valor armazenado dentro do ponteiro — ou seja, o endereço que ele aponta.

Exemplo:
int x = 10;
int *p = &x;
printf("%p\n", p);   // conteúdo de p → endereço de x
printf("%d\n", *p);  // conteúdo apontado → 10

p → contém o endereço de x
*p → acessa o conteúdo armazenado em x



O endereço de uma variável

É o local da memória onde a variável está guardada.
Usamos o operador & (E comercial) para obtê-lo.

Exemplo:
int x = 10;
printf("%p\n", &x);

&x é o endereço de x.

*/