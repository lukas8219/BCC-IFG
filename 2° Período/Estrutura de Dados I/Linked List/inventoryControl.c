#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

typedef struct item {
    int code;
    char description[100];
    int qtd;
    float price;
    struct item* next;
} item;

void mainMenu(void);
item* addItem(item *inventory);
void consultItem(item *inventory);
void generateReport(item *inventory);
item* removeItem(item *inventory);
item* checkStockVolume(item *inventory, item *understockedItems);
void freeInventory(item *inventory);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    item *inventory = NULL;
    item *understockedItems = NULL;
    char flag = '\0';

    int menu = 1;
    while (menu != 0)
    {
        flag = '\0';
        mainMenu();
        scanf("%d", &menu);

        switch (menu)
        {
        case 1: // cadastrar produto
            system("cls");
            inventory = addItem(inventory);
            do 
            {
                printf("\nDeseja cadastrar mais um novo produto? (s/n) ");
                scanf(" %c", &flag);
                if (flag == 's') {
                    inventory = addItem(inventory);
                }
            } while (flag == 's');
            system("cls");
            break;
        case 2: // consultar produto
            system("cls");
            consultItem(inventory);
            do 
            {
                printf("\nDeseja consultar mais um produto? (s/n) ");
                scanf(" %c", &flag);
                if (flag == 's') {
                    consultItem(inventory);
                }
            } while (flag == 's');
            system("cls");
            break;
        case 3: // relatorio de produtos
            system("cls");
            generateReport(inventory);
            printf("\nDigite qualquer tecla para voltar ao menu principal");
            getch();
            break;
        case 4: // consultar volume em estoque
            system("cls");
            understockedItems = checkStockVolume(inventory, understockedItems);
            printf("\nDigite qualquer tecla para voltar ao menu principal");
            getch();
            break;
        case 5: // remover produtos
            system("cls");
            inventory = removeItem(inventory);
            do 
            {
                printf("\nDeseja remover mais um produto? (s/n) ");
                scanf(" %c", &flag);
                if (flag == 's') {
                    inventory = removeItem(inventory);
                }
            } while (flag == 's');
            system("cls");
            break;
        case 6: // sair
            menu = 0;
            break;
        default:
            system("cls");
            printf("Operação inválida.");
            break;
        }
    }
    freeInventory(inventory);
    freeInventory(understockedItems);
    getch();
}

void mainMenu(void) {
    printf("\n---------------------------------");
    printf("\n------CONTROLE DE ESTOQUE--------");
    printf("\n---------------------------------\n");

    printf("\n1. Cadastrar produtos");
    printf("\n2. Consultar produtos");
    printf("\n3. Relatório de produtos");
    printf("\n4. Consultar volume em estoque");
    printf("\n5. Remover produtos");
    printf("\n6. Sair");

    printf("\n---------------------------------\n");
    printf("Digite a opcao desejada: ");
}

item* addItem(item *inventory)
{
    item *newNode = malloc(sizeof(item));
    if (newNode == NULL) {
        exit(1);
    }

    printf("\n\tCadastro de Novo Item\n");
    printf("Codigo: ");
    scanf("%d", &newNode->code);
    fflush(stdin);
    printf("Descricao: ");
    fgets(newNode->description, 100, stdin);
    fflush(stdin);
    printf("Quantidade: ");
    scanf("%d", &newNode->qtd);
    fflush(stdin);
    printf("Valor unitário: ");
    scanf("%f", &newNode->price);
    fflush(stdin);

    newNode->next = inventory;
    inventory = newNode;

    return inventory;
}

void consultItem(item *inventory)
{
    int itemCode = 0;
    int found = 1;
    printf("Insira o codigo do produto a ser consultado: ");
    scanf("%d", &itemCode);

    item *ptr = inventory;
    while (ptr != NULL)
    {
        if (ptr->code == itemCode)
        {
            printf("\n\tEncontrado!");
            printf("\nCodigo: %d", ptr->code);
            printf("\nDescrição: %s", ptr->description);
            printf("Quantidade: %d", ptr->qtd);
            printf("Valor unitário: %.2f\n", ptr->price);
            found = 0;
        }
        ptr = ptr->next;
    }

    if (found == 1) {
        printf("\nItem não cadastrado.");
    }
}

void generateReport(item *inventory)
{
    item *ptr = inventory;
    if (ptr == NULL)
    {
        printf("\nNenhum produto encontrado. Cadastre produtos antes de gerar relatorios.");
    } else {
        printf("\n\tGerando relatório de produtos...\n\n");
    }

    while (ptr != NULL)
    {
        printf("\nCodigo: %d", ptr->code);
        printf("\nDescrição: %s", ptr->description);
        printf("Quantidade: %d", ptr->qtd);
        printf("\nValor unitário: %.2f\n", ptr->price);

        ptr = ptr->next;
    }
}

item* removeItem(item *inventory)
{
    int itemToDelete = 0;
    printf("Insira o código do item a ser excluído: ");
    scanf("%d", &itemToDelete);

    item *currentItem = inventory;

    // verifica se o item a ser removido é o primeiro da lista
    if (currentItem != NULL && currentItem->code == itemToDelete) {
        inventory = currentItem->next;
        free(currentItem);
        return inventory;
    } 

    item *prevItem = NULL;
    // percorre a lista procurando o item a ser removido
    while (currentItem != NULL) {
        if (currentItem->code == itemToDelete) {
            prevItem->next = currentItem->next; 
            free(currentItem);  
            return inventory;
        }
        prevItem = currentItem;  
        currentItem = currentItem->next;
    }

    printf("Item não encontrado.\n");
    return inventory; 
}

item* checkStockVolume(item *inventory, item *understockedItems)
{
    int volume = 0;
    printf("\nInsira volume a ser analisado: ");
    scanf("%d", &volume);

    if (inventory == NULL)
    {
        printf("Nenhum produto cadastrado. Cadastre produtos antes de consultar volume.\n");
        return understockedItems;
    }

    item *ptr = inventory;
    while (ptr != NULL)
    {
        if (ptr->qtd <= volume) 
        {
            item *newNode = malloc(sizeof(item));  
            if (newNode == NULL) {
                exit(1); 
            }

            newNode->code = ptr->code;
            strcpy(newNode->description, ptr->description); 
            newNode->qtd = ptr->qtd;
            newNode->price = ptr->price;

            newNode->next = understockedItems;
            understockedItems = newNode;
        }
        ptr = ptr->next;
    }

    if (understockedItems == NULL) {
        printf("Nenhum produto abaixo do volume informado.\n");
    } else {
        printf("\nProdutos abaixo do volume informado:\n");
        item *printPtr = understockedItems;
        while (printPtr != NULL)
        {
            printf("\nCodigo: %d", printPtr->code);
            printf("\nDescrição: %s", printPtr->description);
            printf("\nQuantidade: %d", printPtr->qtd);
            printf("\nValor unitário: %.2f\n", printPtr->price);
            printPtr = printPtr->next;
        }
    }
    return understockedItems;
}

void freeInventory(item *inventory)
{
    item *currentItem = inventory;
    item *nextItem;

    while (currentItem != NULL) {
        nextItem = currentItem->next;
        free(currentItem);
        currentItem = nextItem;
    }
}
