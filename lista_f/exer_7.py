print("Programa para calcular medias dos alunos.")
n1 = float(input("Digite a nota 1: "))
n2 = float(input("Digite a nota 2: "))
n3 = float(input("Digite a nota 3: "))

media = (n1+n2+n3)/3

if (media >= 7):
  print("Aluno aprovado")
  print("Media = %.2f"% media)
elif(media >=4 and media <7):
  print("Aluno na prova final")
  print("Media = %.2f"% media)
else:
  print("aluno reprovado")   
  print("Media = %.2f"% media) 