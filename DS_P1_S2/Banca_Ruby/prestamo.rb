module Banca
  class Prestamo
    attr_accessor :_cantidad, :_anios, :_id

    def Clone()
      return self.clone
    end

    def initialize(id, cant, years)
      @_cantidad = cant
      @_anios = years
      @_id = id
    end

    def to_s()
      puts "[PRESTAMO] Con cantidad #{@_cantidad} a #{@_anios} años."
    end
  end
end