-- 1.	Listar o nome da pessoa do empréstimo de número 1.
SELECT p.PES_NOME
FROM Pessoa p
INNER JOIN EMPRESTIMO e 
ON e.pes_cod = p.pes_cod AND e.EMP_COD = 1;

-- 2.	Listar todas as editoras ordenadas por ordem alfabética
SELECT EDI_DESCRICAO 
FROM EDITORA
ORDER BY EDI_DESCRICAO;

-- 3.	Exibir os títulos dos livros que começam com a letra A.
SELECT LIV_TITULO
FROM LIVRO
WHERE LOWER(LIV_TITULO) LIKE 'a%';

-- 4.	Exibir os títulos dos livros que começam com a letra A e que tenham o ano de publicação maior que 2013.
SELECT LIV_TITULO
FROM LIVRO
WHERE LOWER(LIV_TITULO) LIKE 'a%' AND ANOPUBLICACAO > 2013;

-- 5.	Exibir a quantidade de telefones que possuem DDD igual a 12.
SELECT COUNT(*)
FROM TELEFONE
WHERE TEL_DDD = 12;

-- 6.	Listar a quantidade de empréstimo por aluno. (exiba: - pes_nro_matricula e - quantidade). 
SELECT A.PES_NRO_MATRICULA, COUNT(E.PES_COD)
FROM ALUNO A 
INNER JOIN PESSOA P ON A.PES_COD = P.PES_COD 
INNER JOIN EMPRESTIMO E ON E.PES_COD = P.PES_COD GROUP BY A.PES_NRO_MATRICULA;

-- 7.	Listar as editoras e os seus livros. (exiba: - edi_cod,edi_descricao, - liv_cod). 
SELECT E.EDI_DESCRICAO, L.LIV_TITULO
FROM EDITORA E
INNER JOIN LIVRO L ON L.EDI_COD = E.EDI_COD ORDER BY E.EDI_DESCRICAO, L.LIV_TITULO;

-- 8.	Listar os códigos dos exemplares (exe_cod), a descrição (exe_descricao) do 
-- empréstimo realizado em uma determinada data.
SELECT EX.EXE_COD, EX.EXE_DESCRICAO
FROM EXEMPLAR EX
INNER JOIN ITEM_EMPRESTIMO IT ON EX.EXE_COD = IT.EXE_COD
INNER JOIN EMPRESTIMO EMP ON EMP.EMP_COD = IT.EMP_COD;

-- 9.	Listar os livros que possuam mais de 3 exemplares.
SELECT L.LIV_TITULO
FROM LIVRO L
INNER JOIN EXEMPLAR E ON L.LIV_COD = L.LIV_COD 
GROUP BY L.LIV_TITULO HAVING COUNT(E.EXE_COD) > 3;

--10.	Listar os professores (nome e titulação) com seus respectivos telefones. OBS: Listar também os professores que não tenham telefone. 
--      Realizar duas resoluções uma com a sintaxe ANSI e outra com a sintaxe ORACLE.
SELECT PES.PES_NOME  ,PR.TITULACAO, TEL.TEL_NUMERO
FROM PESSOA PES
INNER JOIN PROFESSOR PR ON PES.PES_COD = PR.PES_COD
LEFT JOIN TELEFONE TEL ON PES.PES_COD = TEL.PES_COD;

SELECT PES.PES_NOME  ,PR.TITULACAO, TEL.TEL_NUMERO
FROM PESSOA PES, TELEFONE TEL, PROFESSOR PR
WHERE PES.PES_COD = PR.PES_COD AND PES.PES_COD = TEL.PES_COD(+);

-- 11.	Listar o livro (liv_titulo) mais antigo da biblioteca
SELECT LIV_TITULO
FROM LIVRO
WHERE ANOPUBLICACAO = (SELECT MIN(ANOPUBLICACAO) FROM LIVRO);

-- 12.	Exibir o nome da pessoa que mais emprestou livro na biblioteca.

SELECT P.PES_NOME, COUNT(E.PES_COD) num
FROM PESSOA P
INNER JOIN EMPRESTIMO E ON P.PES_COD = E.PES_COD
GROUP BY P.PES_NOME
ORDER BY num DESC;

-- 13.	Listar a quantidade de exemplares por livro.
SELECT COUNT(EX.EXE_COD) 
FROM EXEMPLAR EX
INNER JOIN LIVRO L ON L.LIV_COD = EX.LIV_COD
GROUP BY L.LIV_COD;

-- 14.	Listar os livros (liv_titulo) que começam com A e possuem ano de publicação maior que 2011.
SELECT LIV_TITULO
FROM LIVRO
WHERE LOWER(LIV_TITULO) LIKE 'a%' AND ANOPUBLICACAO > 2011;

-- 15.	Listar os livros emprestados pela pessoa de código 1 (Listar liv_titulo)
SELECT L.LIV_TITULO, EM.PES_COD, EM.EMP_COD
FROM LIVRO L
INNER JOIN EXEMPLAR EX ON EX.LIV_COD = L.LIV_COD
INNER JOIN ITEM_EMPRESTIMO IE ON IE.EXE_COD = EX.EXE_COD
INNER JOIN EMPRESTIMO EM ON EM.EMP_COD = IE.EMP_COD
INNER JOIN PESSOA P ON P.PES_COD = EM.PES_COD
WHERE P.PES_COD = 1;

-- 1 1 2
-- 1 2 4

