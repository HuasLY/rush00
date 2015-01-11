/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:24:40 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 21:57:49 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include "Enemy.class.hpp"
#include "Entity.class.hpp"
#include "Player.class.hpp"
#include "Projectile.class.hpp"

Enemy	*Random(int maxX, int maxY){
	int		X;
	int		Y;
	int		HP;

	X = maxX;
	Y = (rand() % maxY) + 1;
	HP = (rand() % 2) + 1;

	Enemy	*enemyrand = new Enemy(X, Y, HP);
	return enemyrand;

}

int		main()
{
	srand(time(NULL));
	//Creation d'instance:
	Entity Parent;
	Entity ParentAtt(3, 5, 1);
	Entity Copy(Parent);

	//Player
	Player Jean;
	Player Jack(6, 7, 1, 1);
	Player CopyJean(Jean);

	//Enemy
	Enemy EnyJean;
	Enemy EnyJack(4, 7, 1, 1, "Effets spe");
	Enemy CopyEnyJean(EnyJean);


	//Projectile
	Projectile Ly(0, 3, 1);

	Enemy toto(1,1,1);

	//Func:
	Parent.Move("haut");
	Copy.Move("droit");


	Parent.Die();
	Copy.Die();

	//Func Player:
	Jean.Move("haut");
	CopyJean.Die();


	//Func Enemy:
	EnyJean.Move("bas");
	CopyEnyJean.Die();

	Random(5, 5);
	return(0);
}
