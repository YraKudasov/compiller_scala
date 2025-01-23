 val evenNumbers = for {
      number <- numbers        // Генератор: итерируемся по списку numbers
      if number % 2 == 0       // Условие: берем только четные числа
    } yield number             // Возвращаем обработанные элементы в новый список