# 🛒 Sistema de Fidelidade em C

Este projeto é um programa desenvolvido em **linguagem C** que simula um sistema simples de **clientes e descontos** baseado no histórico de compras.  
O usuário informa seus dados e o programa calcula automaticamente se há direito a um desconto especial. 🚀

---

## 🎯 O que o programa faz?

1. Solicita as informações do cliente:
   - Nome 👤  
   - E-mail ✉️  
   - Total gasto em compras anteriores 💰  

2. Aplica a **regra de fidelidade**:
   - Se o cliente já gastou **mais de R$ 500**, ele recebe **10% de desconto** na próxima compra.  
   - Caso contrário, não recebe desconto (mas é incentivado a continuar comprando 😉).  

3. Pede o valor da compra atual.  
4. Calcula o **valor final** considerando o desconto (quando aplicável).  
5. Exibe um **resumo detalhado** da transação.  

---

## 🖥️ Exemplo de uso no terminal

```bash
Informe seu nome: Laryssa
Informe seu email: lary@gmail.com
Informe o total gasto em compras anteriores: R$ 650
Informe o valor original da compra: 200

Resumo do cliente:
Total gasto: R$ 650.00
Valor original da compra: R$ 200.00
Desconto aplicado: 10%
Valor final da compra: R$ 180.00

Parabéns Laryssa! Como cliente especial, você recebeu um desconto de 10%!

**Estrutura do Código**

struct cliente
Estrutura que armazena informações do cliente (nome, e-mail e total gasto).

Entrada de dados (scanf)
O usuário fornece suas informações pelo terminal.

Condição (if)
Verifica se o cliente tem direito ao desconto de fidelidade.

Cálculo de desconto
O programa aplica a porcentagem sobre o valor da compra.

Saída formatada (printf)
Mostra ao usuário o resumo da compra com clareza.

📊 Lógica do Desconto

totalGasto > 500 → 10% OFF 🎉

totalGasto <= 500 → Sem desconto (mas agradecemos a preferência 🙏).

**🔧 Tecnologias Utilizadas**

Linguagem C

Estruturas (struct)

Entrada e saída padrão (scanf, printf)

Condicionais (if-else)
