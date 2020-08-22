3 - Conceitos Fundamentais

3.6 Dublês de Teste

- Termo usado para designar em geral componentes de software que são utilizados para imitar parte do comportamento de um sistema em desenvolvimento.

- Existem diferentes categorias para diferentes tipos de teste, como stubs, drivers e mocks

3.7 Stubs de Teste

- São componentes que simulam o comportamento de um software que ainda não foi desenvolvido. Fornecem saídas especificas para determinadas entradas.

- São tipicamente usados em abordagem top-down. Onde o teste está num nível acim do módulo não desenvolvido e deseja-se simular este software não desenvolvido. Ex: simular a gravação/leitura em um banco de dados.

3.8 Drivers de Teste

- São componentes de alto nivel que simulam o comportamento de algum modulo que ainda não foi desenvolvido.

- São tipicamente associados ao desenvolvimento bottom-up. Ex Selenium Driver

3.9 Mocks

- Similar ao stub, porém mais complexos pois validam a iteração do sistema que está sendo testado e o mock.

- Mock são comumente utilizados para substituir o comportamento esperando de uma instância de uma classe que ainda não foi implementada ou da qual se deseja isolar ou reproduzir um comportamento durante um teste


3.10 Cobertura de código

- Métrica utilizada para avaliar quando de determinado código está sendo testado.

Algumas medidas:
- statement coverage
- method coverage
- branch coverage
