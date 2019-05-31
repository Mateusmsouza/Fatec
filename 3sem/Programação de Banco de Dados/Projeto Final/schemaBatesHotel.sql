CREATE TABLE funcionario (
    fun_num_documento NUMBER(10) PRIMARY KEY,
    fun_data_contratacao DATE NOT NULL,
    fun_cargo CHAR(1) NOT NULL,
    fun_turno CHAR(1) CONSTRAINT turno_fun CHECK(fun_turno in ('M','T','N')),
    fun_salario NUMBER(10,2),
    fun_gestor NUMBER(10),
    CONSTRAINT funpk FOREIGN KEY (fun_gestor) REFERENCES funcionario(fun_num_documento)
);


CREATE TABLE cozinheiro (
    fun_num_documento NUMBER(10) PRIMARY KEY,
    coz_especialidade VARCHAR2(50),
    CONSTRAINT num_doc_fun_coz FOREIGN KEY (fun_num_documento) REFERENCES funcionario(fun_num_documento)
);

CREATE TABLE camareira (
    fun_num_documento NUMBER(10) PRIMARY KEY,
    cam_andares NUMBER(3),
    CONSTRAINT num_doc_fun_cam FOREIGN KEY (fun_num_documento) REFERENCES funcionario(fun_num_documento)
);

CREATE TABLE CLIENTE (
cli_nome varchar2(30) not null,
cli_cpf number(11) not null,
cli_dataNasc Date not null,
cli_restricao_alimenticia varchar2(20),
CONSTRAINT cli_pk primary key (cli_cpf)
);

create table RESERVA (
res_id number(10) not null,
res_cli_cpf number(11) not null,
res_data Date not null,
res_checkin VARCHAR2(16),
res_checkout VARCHAR2(16),
CONSTRAINT res_pk primary key (res_id)
);




ALTER TABLE RESERVA ADD
CONSTRAINT res_fk_cliente FOREIGN KEY (res_cli_cpf) REFERENCES CLIENTE(cli_cpf);

create table GUARDA(
gua_res_id number not null,
gua_qua_numero number not null,
CONSTRAINT gua_pk primary key (gua_res_id, gua_qua_numero)
);

CREATE TABLE BTS_BATES(
    BTS_CNPJ NUMBER(11),
    BTS_HORARIO_CHECKIN VARCHAR2(8),
    BTS_HORARIO_CHECKOUT VARCHAR2(8),
    BTS_ENDERECO VARCHAR(100),

    CONSTRAINT BTSPK PRIMARY KEY (BTS_CNPJ)
);

CREATE TABLE AND_ANDAR(
    AND_NUMERO NUMBER(3),
    BTS_CNPJ NUMBER(11),

    CONSTRAINT ANDPK PRIMARY KEY (AND_NUMERO),
    CONSTRAINT ANDFK FOREIGN KEY (BTS_CNPJ) REFERENCES BTS_BATES(BTS_CNPJ)

);

create table QUARTO (
qua_numero number not null,
qua_preco number not null,
qua_tipo varchar2(15) not null,
qua_andar number not null,
CONSTRAINT qua_pk primary key (qua_numero),
CONSTRAINT qua_fk_andar foreign key (qua_andar) REFERENCES AND_ANDAR(and_numero)
);

CREATE TABLE SLT_SALA_DE_TRABALHO(
    SLT_NUMERO NUMBER(3),
    SLT_SETOR NUMBER(3),
    SLTR_TIPO VARCHAR(15),
    BTS_CNPJ NUMBER(11),

    CONSTRAINT SLTPK PRIMARY KEY (SLT_NUMERO),
    CONSTRAINT SLTFK FOREIGN KEY (BTS_CNPJ) REFERENCES BTS_BATES(BTS_CNPJ)
);


-- Trigger historico 
CREATE TABLE HISTORICO_PRECO_QUARTO(
    QUA_NUMERO NUMBER NOT NULL,
    QUA_PRECO NUMBER NOT NULL,
    QUA_ANDAR NUMBER NOT NULL,
    DATAMODIFICADA DATE DEFAULT TO_DATE(TO_CHAR(sysdate, 'MM/DD/YYYY'), 'MM/DD/YYYY'),
    CONSTRAINT HISTORICOPK PRIMARY KEY (QUA_NUMERO, QUA_PRECO, QUA_ANDAR, DATAMODIFICADA)
);

CREATE OR REPLACE TRIGGER HISTORICOTRACK
BEFORE UPDATE ON QUARTO
FOR EACH ROW
BEGIN
   IF :NEW.qua_preco <> :OLD.qua_preco THEN
    INSERT INTO HISTORICO_PRECO_QUARTO (QUA_NUMERO, QUA_PRECO, QUA_ANDAR) VALUES(:NEW.qua_numero, :NEW.qua_preco, :NEW.qua_andar);
    END IF;
END;

-- fim trigger

-- selects novos

-- listar os gestores e quantidades de funcionários
-- ordenar por número de funcionários
select f1.fun_num_documento as documento_gestor, count(1) as num_funcionarios
from funcionario f1 
INNER JOIN funcionario f2
ON f1.fun_num_documento = f2.fun_gestor
GROUP BY f1.fun_num_documento
ORDER BY num_funcionarios DESC;

-- ORDERNAR OS MELHORES CLIENTES (OS QUE TEM MAIS RESERVAS)
SELECT C.CLI_NOME AS NOME_CLIENTE, COUNT(1) AS NUMERO_RESERVAS
FROM CLIENTE C
INNER JOIN RESERVA R 
ON C.CLI_CPF = R.RES_CLI_CPF
GROUP BY NOME_CLIENTE
ORDER BY NUMERO_RESERVAS

-- QUANTIA DE QUARTOS
SELECT COUNT (*) AS QUANTIA_DE_QUARTOS
FROM BTS_BATES B 
INNER JOIN 
AND_ANDAR A 
ON B.BTS_CNPJ = A.BTS_CNPJ
INNER JOIN 
QUARTO Q 
ON A.AND_NUMERO = Q.QUA_ANDAR

