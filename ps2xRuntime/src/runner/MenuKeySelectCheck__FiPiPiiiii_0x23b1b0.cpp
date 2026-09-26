#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuKeySelectCheck__FiPiPiiiii
// Address: 0x23b1b0 - 0x23b328
void MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuKeySelectCheck__FiPiPiiiii_0x23b1b0");
#endif

    switch (ctx->pc) {
        case 0x23b2f8u: goto label_23b2f8;
        default: break;
    }

    ctx->pc = 0x23b1b0u;

    // 0x23b1b0: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b1b8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x23b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x23b1bc: 0x15400010  bnez        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B1BCu;
    {
        const bool branch_taken_0x23b1bc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1BCu;
            // 0x23b1c0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1bc) {
            ctx->pc = 0x23B200u;
            goto label_23b200;
        }
    }
    ctx->pc = 0x23B1C4u;
    // 0x23b1c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b1c8: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x23b1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23b1cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B1D8u;
            goto label_23b1d8;
        }
    }
    ctx->pc = 0x23B1D4u;
    // 0x23b1d4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x23b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_23b1d8:
    // 0x23b1d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b1dc: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x23b1dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23b1e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B1E0u;
    {
        const bool branch_taken_0x23b1e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1E0u;
            // 0x23b1e4: 0x2503ffff  addiu       $v1, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1e0) {
            ctx->pc = 0x23B1ECu;
            goto label_23b1ec;
        }
    }
    ctx->pc = 0x23B1E8u;
    // 0x23b1e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23b1ec:
    // 0x23b1ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b1f0: 0x11830038  beq         $t4, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x23B1F0u;
    {
        const bool branch_taken_0x23b1f0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b1f0) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B1F8u;
    // 0x23b1f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x23B1F8u;
    {
        const bool branch_taken_0x23b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B1F8u;
            // 0x23b1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1f8) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B200u;
label_23b200:
    // 0x23b200: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x23b200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b204: 0x154b0010  bne         $t2, $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B204u;
    {
        const bool branch_taken_0x23b204 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x23B208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B204u;
            // 0x23b208: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b204) {
            ctx->pc = 0x23B248u;
            goto label_23b248;
        }
    }
    ctx->pc = 0x23B20Cu;
    // 0x23b20c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b210: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x23b210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23b214: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B214u;
    {
        const bool branch_taken_0x23b214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B214u;
            // 0x23b218: 0x2503ffff  addiu       $v1, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b214) {
            ctx->pc = 0x23B220u;
            goto label_23b220;
        }
    }
    ctx->pc = 0x23B21Cu;
    // 0x23b21c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23b220:
    // 0x23b220: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b224: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x23b224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23b228: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B228u;
    {
        const bool branch_taken_0x23b228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b228) {
            ctx->pc = 0x23B234u;
            goto label_23b234;
        }
    }
    ctx->pc = 0x23B230u;
    // 0x23b230: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x23b230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_23b234:
    // 0x23b234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b238: 0x11830026  beq         $t4, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x23B238u;
    {
        const bool branch_taken_0x23b238 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b238) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B240u;
    // 0x23b240: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23B240u;
    {
        const bool branch_taken_0x23b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B240u;
            // 0x23b244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b240) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B248u;
label_23b248:
    // 0x23b248: 0x15430010  bne         $t2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x23B248u;
    {
        const bool branch_taken_0x23b248 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B248u;
            // 0x23b24c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b248) {
            ctx->pc = 0x23B28Cu;
            goto label_23b28c;
        }
    }
    ctx->pc = 0x23B250u;
    // 0x23b250: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b254: 0x11830002  beq         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B254u;
    {
        const bool branch_taken_0x23b254 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B254u;
            // 0x23b258: 0x67082a  slt         $at, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b254) {
            ctx->pc = 0x23B260u;
            goto label_23b260;
        }
    }
    ctx->pc = 0x23B25Cu;
    // 0x23b25c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x23b25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23b260:
    // 0x23b260: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B260u;
    {
        const bool branch_taken_0x23b260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b260) {
            ctx->pc = 0x23B270u;
            goto label_23b270;
        }
    }
    ctx->pc = 0x23B268u;
    // 0x23b268: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x23b268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x23b26c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23b270:
    // 0x23b270: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b274: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x23b274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23b278: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23B278u;
    {
        const bool branch_taken_0x23b278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B278u;
            // 0x23b27c: 0x2503ffff  addiu       $v1, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b278) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B280u;
    // 0x23b280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b284: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23B284u;
    {
        const bool branch_taken_0x23b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B284u;
            // 0x23b288: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b284) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B28Cu;
label_23b28c:
    // 0x23b28c: 0x15430011  bne         $t2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23B28Cu;
    {
        const bool branch_taken_0x23b28c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b28c) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B294u;
    // 0x23b294: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b298: 0x11830002  beq         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B298u;
    {
        const bool branch_taken_0x23b298 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B298u;
            // 0x23b29c: 0x67082a  slt         $at, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b298) {
            ctx->pc = 0x23B2A4u;
            goto label_23b2a4;
        }
    }
    ctx->pc = 0x23B2A0u;
    // 0x23b2a0: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x23b2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23b2a4:
    // 0x23b2a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B2A4u;
    {
        const bool branch_taken_0x23b2a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2a4) {
            ctx->pc = 0x23B2B0u;
            goto label_23b2b0;
        }
    }
    ctx->pc = 0x23B2ACu;
    // 0x23b2ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b2b0:
    // 0x23b2b0: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x23b2b4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B2B4u;
    {
        const bool branch_taken_0x23b2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2B4u;
            // 0x23b2b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2b4) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B2BCu;
    // 0x23b2bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23b2c0:
    // 0x23b2c0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B2C0u;
    {
        const bool branch_taken_0x23b2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b2c0) {
            ctx->pc = 0x23B2D4u;
            goto label_23b2d4;
        }
    }
    ctx->pc = 0x23B2C8u;
    // 0x23b2c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b2cc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23b2d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23b2d4:
    // 0x23b2d4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x23B2D4u;
    {
        const bool branch_taken_0x23b2d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2d4) {
            ctx->pc = 0x23B320u;
            goto label_23b320;
        }
    }
    ctx->pc = 0x23B2DCu;
    // 0x23b2dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b2e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23b2e4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x23b2e8: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B2E8u;
    {
        const bool branch_taken_0x23b2e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23b2e8) {
            ctx->pc = 0x23B304u;
            goto label_23b304;
        }
    }
    ctx->pc = 0x23B2F0u;
    // 0x23b2f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B2F0u;
    {
        const bool branch_taken_0x23b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2F0u;
            // 0x23b2f4: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2f0) {
            ctx->pc = 0x23B304u;
            goto label_23b304;
        }
    }
    ctx->pc = 0x23B2F8u;
label_23b2f8:
    // 0x23b2f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23b2fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23b300: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x23b300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_23b304:
    // 0x23b304: 0x0  nop
    ctx->pc = 0x23b304u;
    // NOP
    // 0x23b308: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x23b308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23b30c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23b310: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x23b310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x23b314: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x23b314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23b318: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23B318u;
    {
        const bool branch_taken_0x23b318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b318) {
            ctx->pc = 0x23B2F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b2f8;
        }
    }
    ctx->pc = 0x23B320u;
label_23b320:
    // 0x23b320: 0x3e00008  jr          $ra
    ctx->pc = 0x23B320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B328u;
}
