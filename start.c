#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
void update() {
	int pid;
	pid = fork();
	if(-1 == pid) {
		perror("fork");
		exit(1);
	}
	if(0 == pid) {
		execlp("sudo", "sudo", "apt", "update", NULL);
		perror("execlp");
		exit(1);
	}
	wait(NULL);
}
void upgrade() {
	int pid;
	pid = fork();
	if(-1 == pid) {
		perror("fork");
		exit(1);
	}
	if(0 == pid) {
		execlp("sudo", "sudo", "apt", "upgrade", NULL);
		perror("execlp");
		exit(1);
	}
	wait(NULL);
}
void clean() {
	int pid;
	pid = fork();
	if(-1 == pid) {
		perror("fork");
		exit(1);
	}
	if(0 == pid) {
		execlp("sudo", "sudo", "apt", "clean", NULL);
		perror("execlp");
		exit(1);
	}
	wait(NULL);
}
void autoremove() {
	int pid;
	pid = fork();
	if(-1 == pid) {
		perror("fork");
		exit(1);
	}
	if(0 == pid) {
		execlp("sudo", "sudo", "apt", "autoremove", NULL);
		perror("execlp");
		exit(1);
	}
	wait(NULL);
}
void autoclean() {
	int pid;
	pid = fork();
	if(-1 == pid) {
		perror("fork");
		exit(1);
	}
	if(0 == pid) {
		execlp("sudo", "sudo", "apt", "autoclean", NULL);
		perror("execlp");
		exit(1);
	}
	wait(NULL);
}
void start() {
	update();
	upgrade();
	clean();
	autoremove();
	autoclean();
}
int main() 
{
	start();
	return 0;
}
