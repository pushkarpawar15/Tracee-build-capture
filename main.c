#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main() {
    pid_t pid = fork(); // or use clone() with appropriate args
    if (pid == 0) {
        // child process
        execl("/bin/echo", "echo", "Hello from child", NULL);
    } else {
        // parent process
        wait(NULL);
    }
    return 0;
}
