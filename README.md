# ENSAino-200A

<!-- ENSA-AUDIT-README:START -->

---

## 🔍 Visao Geral Tecnica

Projeto de hardware/documentacao para expansao ENSAino, com esquematico, PCB, BOM, Gerber e arquivo de pinout.

## 🛠 Status da Auditoria

- ✅ Artefatos de hardware e pinout analisados.
- ⚠️ Nenhuma alteracao aplicada por seguranca de fabricacao.
- 📦 Gerbers usam nomes `PCU-IOT-200A V1.1`, diferentes do nome do projeto.

## ⚠️ Pontos de Atencao

- `ENSAino-200A - Pinout.ino` e documentacao de pinagem, nao sketch compilavel.
- Ha inconsistencias de comentarios em sinais como `WIEGAND_1D0/1D1` e `LED_AMARELO2`.
- Revisar metadados de `3V3` herdados de simbolo antigo.
- Formalizar processo de geracao de Gerber/BOM/PDF.

## 🚀 Proximos Passos

1. Converter pinout em `PINOUT.md` ou sketch real de teste.
2. Regenerar pacote Gerber com nome correto do produto.
3. Adicionar checklist de bring-up e fabricacao.

<!-- ENSA-AUDIT-README:END -->
