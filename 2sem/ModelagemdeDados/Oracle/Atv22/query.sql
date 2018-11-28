-- adicionar constrants depois de criar as colunas
CREATE TABLE usr_usuario(
  usr_email VARCHAR2(100) NOT NULL, -- pk
  usr_nome_completo VARCHAR2(100) NOT NULL,
  usr_senha VARCHAR2(20) NOT NULL,
  usr_foto VARCHAR2(50), -- pode ser null

  CONSTRAINT USR_PK PRIMARY KEY (usr_email)
);

CREATE TABLE amz_amizade(
  amz_usrfk_email1 VARCHAR2(100) NOT NULL, -- pk / fk
  amz_usrfk_email2 VARCHAR2(100) NOT NULL,  -- pk / fk
  
  CONSTRAINT AMZ_PK1 PRIMARY KEY (amz_usrfk_email1),
  CONSTRAINT AMZ_PK2 UNIQUE (amz_usrfk_email2),
  CONSTRAINT AMZ_USR1 FOREIGN KEY (amz_usrfk_email1) REFERENCES usr_usuario (usr_email),
  CONSTRAINT AMZ_USR2 FOREIGN KEY (amz_usrfk_email2) REFERENCES usr_usuario (usr_email)
);

CREATE TABLE fle_filme(
  fle_nome VARCHAR2(100) NOT NULL, -- será pk
  fle_ano_lancamento NUMBER(4) NOT NULL, -- será pk
  fle_sinopse VARCHAR2(255), -- pode ser null 
  fle_fkfle_nome VARCHAR2(100), -- será fk
  fle_fkfle_lancamento NUMBER(4),

  CONSTRAINT FLE_PK1 PRIMARY KEY (fle_nome),
  CONSTRAINT FLE_PK2 UNIQUE (fle_ano_lancamento),
  
  CONSTRAINT FLE_FK1 FOREIGN KEY (fle_fkfle_nome) REFERENCES fle_filme (fle_nome),
  CONSTRAINT FLE_FK2 FOREIGN KEY (fle_fkfle_lancamento) REFERENCES fle_filme (fle_ano_lancamento)
);

CREATE TABLE ast_assiste(
  ast_nota NUMBER(2,1) NOT NULL,
  ast_usrfk_email VARCHAR2(100) NOT NULL, -- será fk
  ast_flefk_nome VARCHAR2(100) NOT NULL, -- será fk
  ast_flefk_ano_lancamento NUMBER(4) NOT NULL, -- será fk
  
  CONSTRAINT AST_PK PRIMARY KEY (ast_usrfk_email),
  CONSTRAINT AST_PK2 UNIQUE (ast_flefk_nome),
  CONSTRAINT AST_PK3 UNIQUE (ast_flefk_ano_lancamento),
  
  CONSTRAINT AST_FK FOREIGN KEY (ast_usrfk_email) REFERENCES usr_usuario (usr_email),
  CONSTRAINT AST_FK2 FOREIGN KEY (ast_flefk_nome) REFERENCES fle_filme (fle_nome),
  CONSTRAINT AST_FK3 FOREIGN KEY (ast_flefk_ano_lancamento) REFERENCES fle_filme (fle_ano_lancamento)

);

