 /*练习mysql数据库的连接*/  
#include <stdio.h> 
#include <mysql.h>  
  
int main()  
{  
    MYSQL mysql;  
    int t, r;  
    /*连接之前。先用mysql_init初始化MYSQL连接句柄*/  
    mysql_init(&mysql);  
    /*使用mysql_real_connect连接server,其參数依次为MYSQL句柄。serverIP地址。 
    登录mysql的username，password，要连接的数据库等*/  
    if(!mysql_real_connect(&mysql, "localhost", "root", "Aa", "spytest", 0, NULL, 0))   
        printf("Error connecting to Mysql!\n");  
    else  
        printf("Connected Mysql successful!\n");  
      
    /*关闭连接*/  
    mysql_close(&mysql);  
    return 0;  
}

