#include <stdio.h>
#include <time.h>

int main() {
    const double distance = 1000.0; // Расстояние, примерно в метрах
    clock_t start, end;
    double elapsed_time;
    double max_speed;

    printf("Измерение максимальной скорости автомобиля\n");
    printf("Расстояние для измерения: %.1f м\n", distance);

    printf("Нажмите Enter, когда автомобиль будет готов начать движение.\n");
    getchar(); // Ждем нажатия Enter
    start = clock(); // Засекаем начальное время

    // Здесь можно имитировать движение автомобиля, например, путем задержки

    printf("Автомобиль проехал расстояние.\n");
    end = clock(); // Засекаем конечное время

    // Вычисляем время в секундах
    elapsed_time = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Вычисляем максимальную скорость (в м/с)
    max_speed = distance / elapsed_time;

    printf("Максимальная скорость автомобиля: %.2f м/с\n", max_speed);

    return 0;
}
