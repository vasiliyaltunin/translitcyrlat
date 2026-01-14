/**
 * @file main.cpp
 * @author Василий Алтунин (skyr@altuninvv.ru)
 * @brief Файл содержит пример использования класса TranslitCyrLat:
 * @version 0.1.0
 * @date 2026-01-14
 *
 * @copyright Алтунин Василий 2025
 *
 * Выводит транслитерированную строку и предбразованые в логин ФИО в консоль
 *
 */

#include <iostream>
#include <string>

#include <clocale>

#include <fcntl.h>
#include <io.h>

#include "../../include/translitlatcyr/translitcyrlat.h"

using namespace altuninvv::string;

int main(int argc, char *argv[]) {
  
  // Обязательно устанавливаем русскую локаль
  setlocale(LC_ALL, "Russian");

  std::wcout << L"S: Яковлев Иван Петрович\n";
  std::cout << "T: " <<
            TranslitCyrLat::transliterate(L"Яковлев Иван Петрович",
                                             TRANSLIT_EMAIL)
            << "\n\n";

  std::wcout << L"S: Алтунин Василий Владимирович\n";
  std::cout << "T: "
            << TranslitCyrLat::transliterateToLogin(
                   L"Алтунин Василий Владимирович");

  return 0;
}
