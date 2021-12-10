#ifndef CIRCLE_CYLINDER_H
#define CIRCLE_CYLINDER_H

#endif //CIRCLE_CYLINDER_H
#pragma once
#include "Circle.h"

/// <summary>
/// Производный класс цилиндра
/// </summary>
class Cylinder : public Circle
{
private:
    /// <summary>
    /// Высота цилиндра
    /// </summary>
    double height;
public:
    /// <summary>
    /// Конструктор по умолчанию
    /// </summary>
    Cylinder();

    /// <summary>
    /// Конструктор с параметрами
    /// </summary>
    Cylinder(double _x, double _y,
             double _radius, double _height);

    /// <summary>
    /// Cylinder destructor
    /// </summary>
    ~Cylinder();

    /// <summary>
    /// Переопределенный метод вычисления
    //  полной поверхности цилиндра
    /// </summary>
    /// <returns></returns>
    double get_square() override;

    /// <summary>
    /// Переопределенный метод вывода
    /// информации в виде строки
    /// </summary>
    /// <returns></returns>
    string to_string() override;

    /// <summary>
    /// Метод вычисления объема цилиндра
    /// </summary>
    /// <returns></returns>
    double get_volume();

    /// <summary>
    /// Set radius (with checking)
    /// </summary>
    void setRadius(double radius);

    /// <summary>
    /// Set height (with checking)
    /// </summary>
    void setHeight(double height);
};
