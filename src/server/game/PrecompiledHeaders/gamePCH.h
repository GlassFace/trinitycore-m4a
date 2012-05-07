//add here most rarely modified headers to speed up debug build compilation

#include <cstddef>
#include <cstdint>
#include <memory>
#include <algorithm>
#include <utility>
#include <functional>
#include <array>
#include <limits>
#include <sstream>
#include <boost/none.hpp>
#include <boost/optional/optional.hpp>
#include <boost/thread/locks.hpp>
#include <G3D/g3dmath.h>
#include <G3D/Ray.h>
#include <G3D/Vector3.h>
#include "WorldSocket.h"        // must be first to make ACE happy with ACE includes in it

#include "Common.h"

#include "MapManager.h"
#include "Log.h"
#include "ObjectAccessor.h"
#include "ObjectDefines.h"
#include "Opcodes.h"
#include "SharedDefines.h"
#include "ObjectMgr.h"
