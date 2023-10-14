#include <stdio.h>

int main () {
    int h_i, h_f, m_i, m_f, d_h, d_m, d_t;
    int t_m_i, t_m_f;
    scanf("%d %d %d %d", &h_i, &m_i, &h_f, &m_f);

    t_m_i = (h_i * 60) + m_i;
    t_m_f = (h_f * 60) + m_f;
    d_t = t_m_f - t_m_i;

    if (d_t <= 0)
    {
        d_t += 24 * 60;
    }
    d_h = d_t / 60;
    d_m = d_t % 60;


    if (h_i == h_f && m_i == m_f)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (d_m >= 1 && d_h <= 24)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d_h, d_m);
    }
    


    return 0;
}