#ifdef _LUA_PLUGIN


int 	proxenet_lua_initialize_vm(plugin_t*);
int	proxenet_lua_destroy_vm(plugin_t*);
int 	proxenet_lua_load_file(plugin_t*);
char* 	proxenet_lua_plugin(plugin_t*, request_t*);

#endif /* HAVE_LIBLUA5_2 */
