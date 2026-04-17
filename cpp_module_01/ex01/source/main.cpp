/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebarbo <alebarbo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:22:29 by alebarbo          #+#    #+#             */
/*   Updated: 2026/01/04 17:43:25 by alebarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	Zombie	*zombies = NULL;
	int		N = 5;

	zombies = zombies->zombieHorde(N, "Foo");
	delete[] zombies;
	return (0);
}