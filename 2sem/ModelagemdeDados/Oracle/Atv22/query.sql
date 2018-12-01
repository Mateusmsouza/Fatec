-- Inserir 3 registros de usuário (um deles com nome Jack)
-- Ao menos um usuário não deve possuir foto. 
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Mateus', 'mateus_msouza@outlook.com','123456', NULL);
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Fabio', 'fabio_romeiro@outlook.com','333333', NULL);
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Jack', 'Jack@outlook.com','jackin', '/foto/user3.jpg');

-- 6 filmes (associar 2 filmes a cada pessoa)
-- Dois filmes devem possuir o mesmo nome, sendo o mais recente baseado no mais antigo. 

INSERT INTO fle_filme (fle_nome, fle_ano_lancamento, fle_sinopse) VALUES ('Jackass', 2000, 'sobosta');
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento, fle_fkfle_nome, fle_fkfle_lancamento) VALUES ('Harry Potro', 1990, 'Jackass', 2000);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('A origem', 2000);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Os simpsons', 1990);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Avatar', 2000);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento, fle_fkfle_nome, fle_fkfle_lancamento) VALUES ('Vingadores', 2000, 'Avatar',2000);

INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'mateus_msouza@outlook.com', 'Jackass', 2000);
INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'mateus_msouza@outlook.com', 'Harry Potro', 1990);
INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'fabio_romeiro@outlook.com', 'A origem', 2000);
INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'fabio_romeiro@outlook.com', 'Os simpsons', 1990);
INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'Jack@outlook.com', 'Avatar', 2000);
INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) 
VALUES (4.1, 'Jack@outlook.com', 'Vingadores', 2000);

INSERT INTO amz_amizade(amz_usrfk_email1, amz_usrfk_email2) VALUES ('mateus_msouza@outlook.com', 'Jack@outlook.com');

UPDATE fle_filme SET fle_sinopse = 'sinopse alterada' WHERE fle_sinopse = 'soubosta';
DELETE FROM fle_sinopse WHERE fle_nome = 'A origem';
SELECT * FROM usr_usuario WHERE usr_foto = NULL;
SELECT * FROM amz_amizade WHERE amz_usrfk_email2 = 'Jack@outlook.com' OR amz_usrfk_email1 = 'Jack@outlook.com';
