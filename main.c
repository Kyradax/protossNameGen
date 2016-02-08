#include"templar.h"

int main (int argc, char *argv[])
{
	int a;

	char *first[11] = {"Ze","Ar","Ta","Se","Al","Vo","Al","Ul","Ras", "Ta","Ky"};
	char *second[11] = {"ra","ta","ssa","len","da","a","re","za","fe","a","mo"};
	char *third[14] = {"dax","tul","nis","dar","dis","ris","zun","rak","zaj","gal","nix","dun","khas","jo"};

	char *name[3];
	srand(time(NULL));

	a = rand() % 10;
	name[0] = first[a];
	a = rand() % 11;
	name[1] = second[a];
	a = rand() % 10;
	name[2] = third[a];

	printf("%s%s%s\n",name[0],name[1],name[2]);

	return 0;
}
