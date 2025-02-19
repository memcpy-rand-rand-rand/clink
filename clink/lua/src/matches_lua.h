// Copyright (c) 2021 Christopher Antos
// License: http://opensource.org/licenses/MIT

#pragma once

#include "lua_bindable.h"

class matches;
struct lua_State;

//------------------------------------------------------------------------------
class matches_lua
    : public lua_bindable<matches_lua>
{
public:
                        matches_lua(const matches& matches);
    int                 get_prefix(lua_State* state);
    int                 get_count(lua_State* state);
    int                 get_match(lua_State* state);
    int                 get_type(lua_State* state);

private:
    const matches&      m_matches;
    str_moveable        m_prefix;
    bool                m_has_prefix = false;
};
