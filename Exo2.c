#include<stdio.h>
#include<stdlib.h>

void copie(FILE *fs,FILE *fd){
int c;
while((c=fgetc(fs)!=EOF)){
	fputc(c,fd);
}

}


int main(){

FILE *source=fopen("test.txt","r");
FILE *destination=fopen("qlqc.txt","w");
copie(source,destination);
fclose(source);
fclose(destination);
return 0;

}
