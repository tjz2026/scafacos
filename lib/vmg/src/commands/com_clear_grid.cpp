/*
 *    vmg - a versatile multigrid solver
 *    Copyright (C) 2012 Institute for Numerical Simulation, University of Bonn
 *
 *  vmg is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  vmg is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file   com_clear_grid.cpp
 * @author Julian Iseringhausen <isering@ins.uni-bonn.de>
 * @date   Mon Apr 18 12:32:44 2011
 *
 * @brief  Overwrites all grid values with zero.
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "base/command.hpp"
#include "base/factory.hpp"
#include "comm/comm.hpp"
#include "grid/multigrid.hpp"
#include "mg.hpp"

using namespace VMG;

class VMGCommandClearGrid : public Command
{
public:
  Request Run(Command::argument_vector arguments)
  {
    MPE_EVENT_BEGIN()

    MG::GetFactory().Get(arguments[0])->Cast<Multigrid>()->ClearAll();

    MPE_EVENT_END()

    return Continue;
  }

  static const char* Name() {return "ClearGrid";}
  static int Arguments() {return 1;}
};

CREATE_INITIALIZER(VMGCommandClearGrid)

