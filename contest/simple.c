#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 60

struct node {
   char value[200];
   char type[200];
   int key;

};

struct node* hashArray[MAX];
struct node* emptyNode;
struct node* item;

int hashCode(int key) {
    key+=1;
   return key % MAX;
}

struct node *search(int key)
{
   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex];

      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= MAX;
   }

   return NULL;
}

void insert(char value[],char type[],int key) {

   struct node *item = (struct node*) malloc(sizeof(struct node));

   strcpy(item->value , value);
   strcpy(item->type , type);
   item->key = key;

   printf("\nEnter the value and type of the Node:");
   scanf("%s%s",&value,&type);
   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= MAX;
   }

   hashArray[hashIndex] = item;
}

struct node* delete(struct node* item) {
   int key = item->key;
   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key) {
         struct node* temp = hashArray[hashIndex];

         //assign a dummy item at deleted position
         hashArray[hashIndex] = emptyNode;
         return temp;
      }

      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= MAX;
   }

   return NULL;
}

struct node* update(struct node* item,char value,char type)
{
   strcpy(item->value , value);
   strcpy(item->type , type);
   int key = item->key;
   printf("Enter the key to update:");
   scanf("%d",&key);


   //get the hash
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {

      if(hashArray[hashIndex]->key == key) {
         struct node* temp = hashArray[hashIndex];

         //assign a dummy item at deleted position
         hashArray[hashIndex] = emptyNode;
      }
   }
   printf("\nEnter the value and type of the Node:");
   scanf("%s%s",&value,&type);
   //get the hash

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;

      //wrap around the table
      hashIndex %= MAX;
   }

   hashArray[hashIndex] = item;
}

void display() {
   int i = 0;

   for(i = 0; i<MAX; i++) {

      if(hashArray[i] != NULL)
         printf(" (%d,%s,%s)",hashArray[i]->key,hashArray[i]->value,hashArray[i]->type);
      else
         printf("NULL");
   }

   printf("\n");
}

int main() {

   emptyNode = (struct node*) malloc(sizeof(struct node));
   strcpy(emptyNode->value , "0");
   strcpy(emptyNode->type , "0");
   emptyNode->key = -1;

   int ch;
    char c='Y';

    while(c=='Y' || c=='y')
    {
        printf("1.Add the node\n");
        printf("2.Delete the node\n");
        printf("3.Search the node\n");
        printf("4.Update the linked list\n");
        printf("5.Show linked list\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        int key;
        char value,type;
        switch(ch)
        {
        case 1:
            {
           // strcpy(item->value , value);
            //strcpy(item->type , type);
            //item->key = key;
            scanf("%d %s %s",key,value,type);
            insert(value,type,key);
            break;
            }
        case 2:
            {


            delete(item);
            printf("Element deleted\n");
            break;
            }
        case 3:
            {

            item = search(key);

            if(item != NULL) {
             printf("Element found: %s %s\n", item->value,item->type );
            } else {
            printf("Element not found\n");
            }
            break;
            }
        case 4:
            {

            update(item,value,type);
            break;
            }
        case 5:
            {

            display();
            break;
            }

        default:
            {
            printf("Invalid Choice\n");
            break;
            }
        }
        printf("If you want to continue(Y/N)\n");
        scanf("%c",&c);
    }
    return 0;
}

