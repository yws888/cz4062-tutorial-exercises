#include <stdio.h>
#include <string.h>

int check_authentication(char *pwd) {
  int auth_flag = 0;
  char Password[] = "qwertyu";
  char buffer[8];
  strcpy(buffer, pwd);
  if (strncmp(buffer, Password, 8) == 0)
    auth_flag = 1;
  printf("flag = %d\n", auth_flag);
  printf("Password = %s\n", Password);
  printf("buffer = %s\n", buffer);

  return auth_flag;
}
int main(int argc, char* argv[]) {
  char Test[] = "12345678123456f8";
  //if(check_authentication(argv[1]))
  if(check_authentication(Test))
    printf("Access Granted\n");
  else{
    printf("Access Denied\n");
  }
  return 0; 
}