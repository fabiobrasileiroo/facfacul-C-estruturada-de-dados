class Pessoa:
  def __init__(self, nome: str, idade: int):
    self.nome = nome
    self.idade = idade
  def falar(self):
    print(f'OLa {self.nome} sua idade é {self.idade}')

pessoa = Pessoa("Matheus",19)
pessoa.falar()