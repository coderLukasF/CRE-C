#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (strcmp(argv[1], "-r") == 0) {
    char command[256];
    snprintf(command, sizeof(command), "gcc %s -o ~/CRE-C/cache/main", argv[2]);
    system(command);
    system("~/CRE-C/cache/main");
    system("rm ~/CRE-C/cache/main");
  }
  if (strcmp(argv[1], "-c") == 0) {
    
    char filename[256];
    strncpy(filename, argv[2], sizeof(filename));
    filename[sizeof(filename)-1] = '\0';

    char *dot = strrchr(filename, '.');
    if (dot != NULL) {
      *dot = '\0';
    }

    char command[256];
    snprintf(command, sizeof(command), "gcc %s -o %s", argv[2], filename);

    system(command);
  }
  if (strcmp(argv[1], "-e") == 0) {
    char commit_command[256];
    snprintf(commit_command, sizeof(commit_command), "git commit -m \"%s\"", argv[2]);

    char push_command[256];
    snprintf(push_command, sizeof(commit_command), "git push %s %s", argv[3], argv[4]);


    system("git add .");
    system(commit_command);
    system(push_command);
  }

  return 0;
}
