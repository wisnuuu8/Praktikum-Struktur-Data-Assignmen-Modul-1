#include <stdio.h>
#include <string.h>

struct mahasiswa
{
    char name[50];
    char addres[100];
    int age;
};

int main()
{
    struct mahasiswa mhs1, mhs2;
    strcpy(mhs1.name, "Wisnu");
    strcpy(mhs1.addres, "Purworejo");
    mhs1.age = 18;
    strcpy(mhs2.name, "Rizal");
    strcpy(mhs2.addres, "Bali");
    mhs2.age = 17;

    printf("## Mahasiswa 1 ##\n");
    printf("nama: %s\n", mhs1.name);
    printf("alamat: %s\n", mhs1.addres);
    printf("umur: %d\n", mhs1.age);
    printf("\n");
    printf("## mahasiswa 2 ##\n");
    printf("nama: %s\n", mhs2.name);
    printf("alamat: %s\n", mhs2.addres);
    printf("umur: %d\n", mhs2.age);
    return 0; 
}