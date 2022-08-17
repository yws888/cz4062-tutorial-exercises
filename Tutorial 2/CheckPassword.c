char CheckPassword() {
  char good = 'N';
  char Password[2];
  gets(Password);
  return good;
}
int main(int argc, char* argv[]) {
printf("Enter your password:"); 
if(CheckPassword() == 'Y')
    printf("Your random number is %d\n", rand()%100); 
else{
    printf("You dont have the permission to get a random number");
    exit(-1); 
}
return 0; 
}