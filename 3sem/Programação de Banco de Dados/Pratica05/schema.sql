-- Fatec SJC
-- Mateus Machado de Souza
-- Fábio Lucas Romeiro

-- 1
CREATE TABLE ESTADO(
  est_cod NUMBER(4),
  est_cidade NUMBER(4),

  CONSTRAINT ESPK PRIMARY KEY(est_cod)
);



CREATE TABLE CIDADE(
  cid_cod NUMBER(4),
  est_cod NUMBER(4),
  cid_nome VARCHAR2(30),

  CONSTRAINT CDPK PRIMARY KEY (cid_cod, est_cod),
  CONSTRAINT CDFK FOREIGN KEY (est_cod) REFERENCES ESTADO(est_cod)
);



CREATE TABLE DEPARTAMENTO(
  dep_cod NUMBER(4),
  dep_descricao VARCHAR2(20),


  CONSTRAINT DPPK PRIMARY KEY(dep_cod)
);



CREATE TABLE CARGO(
  car_cod NUMBER(4),
  car_descricao VARCHAR2(20),

  CONSTRAINT CRPK PRIMARY KEY(car_cod)
);



CREATE TABLE FUNCIONARIO(
  fun_cod  NUMBER(4),
  fun_logradouro VARCHAR2(30),
  fun_nome VARCHAR2(30),
  fun_salario NUMBER(8,2),
  car_cod NUMBER(4),
  fun_cep NUMBER(4),
  fun_nro NUMBER(4),
  cid_cod NUMBER(4),
  est_cod NUMBER(4),
  es_cod NUMBER(4),

  CONSTRAINT FNPK PRIMARY KEY (fun_cod),
  CONSTRAINT FNFKa FOREIGN KEY (car_cod) REFERENCES CARGO(car_cod),
  CONSTRAINT FNFK2 FOREIGN KEY (cid_cod, est_cod) REFERENCES CIDADE(cid_cod, est_cod)
);
INSERT INTO ESTADO 
VALUES (1,2);

INSERT INTO CIDADE
VALUES(1,1,'Jacareí');

INSERT INTO DEPARTAMENTO
VALUES(1, 'RH');

INSERT INTO CARGO
VALUES(1, 'PROGRAMADOR');

INSERT INTO FUNCIONARIO
VALUES(1,'top', 'MATEUS', 2000,1,1232,666,1,1,1);

-- 2
-- Crie a View Funcionário_View com os campos :fun_cod, fun_nome ,fun_logradoro, cid_nome,
-- est_estado, carg_descricao, dep_descricao. Apenas será possível a leitura dos dados cadastrais
-- pela view ​ Funcionario_View​ .

create view Funcionario_View as SELECT f.fun_cod, f.fun_nome, f.fun_logradouro, c.cid_nome, e.est_cidade FROM FUNCIONARIO f INNER JOIN CIDADE  c on f.cid_cod = c.cid_cod 
INNER JOIN ESTADO e on c.est_cod = e.est_cod with read only

-- 3 
-- Consulte os dados cadastrais pela View ​ (Funcionario_View) .
SELECT * from Funcionario_View;

-- 4 
-- Consulte os dados dos funcionários pela tabela Funcionário.
SELECT f.fun_cod, f.fun_nome, f.fun_logradouro, c.cid_nome, e.est_cidade 
FROM FUNCIONARIO f 
INNER JOIN CIDADE  c on f.cid_cod = c.cid_cod 
INNER JOIN ESTADO e on c.est_cod = e.est_cod;

--5. 

INSERT INTO Funcionario VALUES(5,'Rua Jose Cobra, 233 - SJC', 'Paulo Luiz', 5000.00,2,12237821,24,5,2);
SELECT * FROM Funcionario_View;

--6.

ALTER TABLE Funcionario ADD fun_obs VARCHAR2(255);
CREATE OR REPLACE VIEW Funcionario_View 
AS SELECT f.fun_cod, f.fun_nome ,f.fun_logradoro,  c.cid_nome, e.est_estado, c.carg_descricao, d.dep_descricao
FROM Funcionario f 
NATURAL JOIN Cidade c 
NATURAL JOIN Estado e 
INNER JOIN Departamento d ON
d.dep_cod = f.dep_cod;

--7.

SELECT view_name,text
FROM user_views
WHERE view_name='funcionario_view';

--8.

-- Resposta: C