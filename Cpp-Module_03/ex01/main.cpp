/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:03:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/23 21:54:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {

    ScavTrap obj("Jim");
    
    for (int i = 0; i < 49; i++)
        obj.attack("he");
    obj.guardGate();
    obj.beRepaired(11);
    return 0;
}
