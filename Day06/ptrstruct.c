#include <stdio.h>

struct stud{
 int id;
 char name[20];

};


void display(struct stud *s){
 printf("%d\n",s->id);
 printf("%s\n",s->name);
}

int main(){
  struct stud s={1,"Aarthi"};
  display(&s);

}
