
/**
 * @brief           Called whenever a client's aim gets bumped.
 *
 * @param client	Index of the client who is getting their aim bumped.
 * @return 		    Plugin_Handled to block the bump, Plugin_Continue otherwise.
 */
forward Action OnAimBump(int client);