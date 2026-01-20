#include <unistd.h>

// // int main(int argc, char** argv) {
//     if (argc == 3) {
// 	int i;
// 	int j;
// 	unsigned char seen[256] = {0};

// 	i = 0;
// 	while (argv[1][i]) {
// 	    j = 0;
// 	    while (argv[2][j]) {
// 		if (argv[1][i] == argv[2][j]) {
// 		    if (!seen[(unsigned char)argv[1][i]]) {
// 			write(1, &argv[1][i], 1);
// 			seen[(unsigned char)argv[1][i]] = 1;
// 		    }
// 		    break;
// 		}
// 		j++;
// 	    }
// 	    i++;
// 	}
//     }
//     write(1, "\n", 1);
//     return 0;
// }

int main(int argc, char **argv)
{
	if (argc == 3) {
		int i; int j;
		unsigned char seen[256] = {0};

		i = 0;
		while (argv[1][i]) {
			j = 0;
			while (argv[2][j]) {
				if (argv[1][i] == argv[2][j] && !seen[(unsigned char)argv[1][i]]) {
					write(1, &argv[1][i], 1);
					seen[(unsigned char)argv[1][i]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
