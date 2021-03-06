#ifndef COMPAT_TERMINAL_H
#define COMPAT_TERMINAL_H

int save_term(int full_duplex);
void restore_term(void);

char *git_terminal_prompt(const char *prompt, int echo);

/* Read a single keystroke, without echoing it to the terminal */
int read_key_without_echo(struct strbuf *buf);

#endif /* COMPAT_TERMINAL_H */
