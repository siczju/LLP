package br.edu.ifpr.academico.modelo;

import java.time.LocalDate;
import java.util.Objects;

public class Avaliacao {
   private LocalDate data;
   private float nota;
   
   public Avaliacao() {}
   public Avaliacao(LocalDate data, float nota) {
      this.data = data;
      this.nota = nota;
   }
   
   public LocalDate getData() {return data;}
   public void setData(LocalDate data) {this.data = data;}
   public float getNota() {return nota;}
   public void setNota(float nota) {this.nota = nota;}

   public String toString() {
      return "Data: " + data + ", Nota: " + nota;
   }

   @Override
   public int hashCode() {return Objects.hash(data, nota);}
   @Override
   public boolean equals(Object obj) {
      if (this == obj) return true;
      if (obj == null) return false;
      if (getClass() != obj.getClass())return false;
      Avaliacao other = (Avaliacao) obj;
      return Objects.equals(data, other.data) && Double.doubleToLongBits(nota) == Double.doubleToLongBits(other.nota);
   }  
}