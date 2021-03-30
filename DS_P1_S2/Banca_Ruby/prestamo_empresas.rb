module Banca
  class Prestamo
  end

  class PrestamoEmpresas < Prestamo
    attr_accessor :_interes

    # @ReturnType Banca.Prestamo

    def Clone()
      return self.clone
    end


    def to_s()
      puts "[P. EMPRESA] Interes #{@_interes} con cantidad #{@_cantidad} a #{@_anios} años."
    end

    def initialize(id, cant, years, interes)
      super(id, cant, years)
      @_interes = interes
    end
  end
end