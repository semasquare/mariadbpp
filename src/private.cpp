//
//  M A R I A D B + +
//
//	Author   : Sylvain Rochette Langlois
//	License  : Boost Software License (http://www.boost.org/users/license.html)
//

#include "private.hpp"
#include <mysql/mysql.h>

namespace mariadb
{
#ifdef DEBUG
	bool g_log_error = true;
#else
	bool g_log_error = false;
#endif

	void set_log_error(bool log_error)
	{
		g_log_error = log_error;
	}
}
