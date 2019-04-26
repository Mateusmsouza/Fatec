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