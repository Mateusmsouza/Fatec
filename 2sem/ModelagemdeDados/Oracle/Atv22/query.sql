-- Inserir 3 registros de usuário (um deles com nome Jack)
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Mateus', 'mateus_msouza@outlook.com','123456', NULL);
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Fabio', 'fabio_romeiro@outlook.com','333333', NULL);
INSERT INTO usr_usuario (usr_nome_completo, usr_email, usr_senha, usr_foto) VALUES ('Jack', 'Jack@outlook.com','jackin', NULL);

-- 6 filmes (associar 2 filmes a cada pessoa)

INSERT INTO fle_filme (fle_nome, fle_ano_lancamento, fle_sinopse) VALUES ('Jackass', 2000, 'sobosta');
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Harry Potro', 1990);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('A origem', 2000);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Os simpsons', 1990);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Avatar', 2000);
INSERT INTO fle_filme (fle_nome, fle_ano_lancamento) VALUES ('Vingadores', 2000);

INSERT INTO ast_assiste(ast_nota, ast_usrfk_email, ast_flefk_nome, ast_flefk_ano_lancamento) VALUES (4.1, 'mateus_msouza@outlook.com', 'Jackass', 2000);

-- Ao menos um usuário não deve possuir foto. 
-- Dois filmes devem possuir o mesmo nome, sendo o mais recente baseado no mais antigo. 
-- Algum usuário deve ser amigo de Jack;