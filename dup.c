//复制文件描述符
//dup自动寻找最小的文件描述符
//dup2可以指定文件描述符，如果该文件描述符已打开。则会关闭原文件
#include<unistd.h>