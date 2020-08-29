# Criando um container Oracle + SQLDeveloper

Primeiro é necessário criar o container
 	
     $ docker login
     ......
     $ docker run -d -it --name [NOME] -p 1521:1521  store/oracle/database-enterprise:12.2.0.1

Criar o usuário para acessar pelo SQLDeveloper

    $ docker exec -it [ID/NAME CONTAINER] bash -c "source /home/oracle/.bashrc; sqlplus /nolog"
   
   Executar os comandos abaixo no SQLplus:
> connect sys as sysdba;
> alter session set "_ORACLE_SCRIPT"=true; 
> create user fatec identified by fatec; 
> GRANT ALL PRIVILEGES TO fatec;

Instale o SQL Developer e conecte usando a porta exposta (1521), usuário criado e servicename: 
>ORCLCDB.localdomain




