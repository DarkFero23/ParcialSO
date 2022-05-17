#include<stdio.h>
#include <pthread.h>

void *filosofo (void *arg);
int comida[429496];
int nombre[11][10];
int tenedores[11];
int estomagos [11];
int contador =0;
pthread_mutex_t flags;
int main (void){
  
  
  int l;
  scanf("%d",&l);
  char filosofos1[11][10]={
  {Paton"},{"Arquimedes"},{"Luis"},{"Fernando"},{"Jean"},{"Sylas"},{"Gato"},{"Heracles"},{"Iguana"},{"Jull"},{"Keikoooooooooooooooooooaaaaaaaaa}}
  
  for (int i=0;i<l;i++){
    for(int j=0; j<10;i++){
        nombres[i][j]=filosofos1[i[j];
                   }
              }
  
pthread_t filosofos[l];
int identificadores[i];
 for (int i=0;i<l;i++){
   tenedores[i]=false;
 }
 for (int i=0;i<l;i++){
  estomagos [i]=0;
 }                
																 
pthread_mutex_init(&flags, NULL);
for (int i=0;i<l;i++){
 identificadores[i]=i+1;
	pthread_create(&filosofos[i],NULL,&filosofo,&identificadores[i]);
}
for (int i=0;i<l;i++){
	pthread_join(filosofos[i],NULL);
}
																 
pthread_mutex_destroy(&flags);
return 0;
																 
		
}
																 
																 
																 
																 
void *filosofo(void*arg){

int arg2= *((int * arg);
for (int = 0;true; i++){
	if(comida==0){
		printf("La comida se acabo :c \n");
		comida = 429496;
		printf("Acabamos de llenar el bufet , sirvanse \n");
		contador++
		}
	if (tenedores [(arg2-1==false and tenedores [arg2] -- false and comida >0 and estomagos [arg2]<50){
						pthread_mutex_lock (&flags);
						tenedores[(arg2-1)]=true;
						printf=("Filosofos %s esta comiendo \n" , nombres [arg2);
						comida --;
						estomagos [arg2]++;
						tenedores [(arg2-1)] =false;
						tenedores [arg2]=false;
						pthread_mutex_unlock(&flags);
	else{
			estomagos[arg2]--;
		printf("Filosfos %s esta pensando como aprobar \n" , nombres[arg2];
					 }
		
		
		
		
	}


}
						

return NULL;






}
