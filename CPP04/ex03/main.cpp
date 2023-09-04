/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delvira- <delvira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:09:56 by delvira-          #+#    #+#             */
/*   Updated: 2023/09/04 15:53:49 by delvira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{

IMateriaSource* src = new MateriaSource(); // CREACION MATERIA SOURCE

// src APRENDE LAS MATERIAS ICE Y CURE
src->learnMateria(new Ice());
src->learnMateria(new Cure());

// CREACION DE UN NUEVO CHARACTER
ICharacter* me = new Character("me");

// CREACION DE UNA NUEVA INSTANCIA DE MATERIA
AMateria* tmp;

// SE ASIGNA LA MATERIA GUARDADA EN SRC A LA VARIABLE AMATERIA tmp
// A CONTINUACION SE EQUIPA EN EL ARRAY DE MATERIAS DEL PERSONAJE CREADO
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);

// SE CREA UN NUEVO PERSONAJE PARA SER EL TARGET DE USE
ICharacter* bob = new Character("bob");

// EL PERSONAJE UTILIZA LAS DOS MATERIAS CONTRA BOB

me->use(0, *bob);
me->use(1, *bob);

// SE BORRA LA MEMORIA RESERVADA
delete bob;
delete me;
delete src;
return 0;
}