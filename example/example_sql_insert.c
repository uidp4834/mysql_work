/*练习mysql数据库的数据加入*/  
#include <stdio.h>  
#include <string.h>  
#include <mysql.h>   
  
  
int main()  
{  
    MYSQL mysql;  
    MYSQL_RES *res;  
    MYSQL_ROW row;  
    char *query;  
    int flag, t;  
    mysql_init(&mysql);  
    if(!mysql_real_connect(&mysql, "localhost", "root", "Aa", "spytest", 0, NULL, 0)) {  
        printf("Failed to connect to Mysql!\n");  
        return 0;  
    }else {  
        printf("Connected to Mysql successfully!\n");  
    }  
    query = "insert into mytable values('LYK','M','1987-02-28','china')";  
    /*插入，成功则返回0*/  
    flag = mysql_real_query(&mysql, query, (unsigned int)strlen(query));  
    if(flag) {  
        printf("Insert data failure!\n");  
        return 0;  
    }else {  
        printf("Insert data success!\n");  
    }  
  
  
    mysql_close(&mysql);  
    return 0;  
}  
