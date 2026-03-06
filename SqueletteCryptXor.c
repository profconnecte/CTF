/* 10/02/2026
 * Alanus
 * Proposition de challenge pour Cyber-Learning : casser un chiffrement simple
 * --------------------------------------------------------
 */

// Squelette du programme CryptXor.exe
int main(int argc, char *argv[]){
  puts("---- CryptXor ----");
  // ...
  
  FILE * fc=fopen (argv[1],"rb");
  long int tfc;
  // ...

  FILE * fs=fopen (fichier_sortie,"wb");
  // ...
  
  unsigned int m=tfc/2; 
  fseek(fc, m, SEEK_SET);

  unsigned char c[]={x, y, z, ...};
  unsigned char tc;
  // ...

  unsigned char d=xx;

  for (int i=0;i<tfc;i++){
    int j=(m+i)%tfc;
    if (j==0)
      fseek(fc, 0, SEEK_SET);
    unsigned char oc=fgetc(fc);
    fputc((oc^c[i%tc])+d, fs);
  }
  //...
  puts("Chiffrement ok");
  return 0;
}
//---------------------------------------------
