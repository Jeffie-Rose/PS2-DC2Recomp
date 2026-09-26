#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TranslateInventUserData__FP15CInventUserDataP15CInventUserData
// Address: 0x1ff1b0 - 0x1ff270
void TranslateInventUserData__FP15CInventUserDataP15CInventUserData_0x1ff1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TranslateInventUserData__FP15CInventUserDataP15CInventUserData_0x1ff1b0");
#endif

    switch (ctx->pc) {
        case 0x1ff1d4u: goto label_1ff1d4;
        default: break;
    }

    ctx->pc = 0x1ff1b0u;

    // 0x1ff1b0: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FF1B0u;
    {
        const bool branch_taken_0x1ff1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1b0) {
            ctx->pc = 0x1FF268u;
            goto label_1ff268;
        }
    }
    ctx->pc = 0x1FF1B8u;
    // 0x1ff1b8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF1B8u;
    {
        const bool branch_taken_0x1ff1b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF1B8u;
            // 0x1ff1bc: 0x248606d8  addiu       $a2, $a0, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1b8) {
            ctx->pc = 0x1FF1CCu;
            goto label_1ff1cc;
        }
    }
    ctx->pc = 0x1FF1C0u;
    // 0x1ff1c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FF1C0u;
    {
        const bool branch_taken_0x1ff1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1c0) {
            ctx->pc = 0x1FF268u;
            goto label_1ff268;
        }
    }
    ctx->pc = 0x1FF1C8u;
    // 0x1ff1c8: 0x248606d8  addiu       $a2, $a0, 0x6D8
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1752));
label_1ff1cc:
    // 0x1ff1cc: 0x24a506d8  addiu       $a1, $a1, 0x6D8
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    // 0x1ff1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff1d4:
    // 0x1ff1d4: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x1ff1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ff1d8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ff1dc: 0x28e30080  slti        $v1, $a3, 0x80
    ctx->pc = 0x1ff1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ff1e0: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x1ff1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff1e4: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1ff1e8: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x1ff1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff1ec: 0x84c4000c  lh          $a0, 0xC($a2)
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ff1f0: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x1ff1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff1f4: 0x94c4000e  lhu         $a0, 0xE($a2)
    ctx->pc = 0x1ff1f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1ff1f8: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x1ff1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff1fc: 0x84c40018  lh          $a0, 0x18($a2)
    ctx->pc = 0x1ff1fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1ff200: 0xa4a40008  sh          $a0, 0x8($a1)
    ctx->pc = 0x1ff200u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff204: 0x94c4001a  lhu         $a0, 0x1A($a2)
    ctx->pc = 0x1ff204u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x1ff208: 0xa4a4000a  sh          $a0, 0xA($a1)
    ctx->pc = 0x1ff208u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff20c: 0x84c40024  lh          $a0, 0x24($a2)
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1ff210: 0xa4a4000c  sh          $a0, 0xC($a1)
    ctx->pc = 0x1ff210u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff214: 0x94c40026  lhu         $a0, 0x26($a2)
    ctx->pc = 0x1ff214u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
    // 0x1ff218: 0xa4a4000e  sh          $a0, 0xE($a1)
    ctx->pc = 0x1ff218u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff21c: 0x84c40030  lh          $a0, 0x30($a2)
    ctx->pc = 0x1ff21cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1ff220: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x1ff220u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff224: 0x94c40032  lhu         $a0, 0x32($a2)
    ctx->pc = 0x1ff224u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 50)));
    // 0x1ff228: 0xa4a40012  sh          $a0, 0x12($a1)
    ctx->pc = 0x1ff228u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff22c: 0x84c4003c  lh          $a0, 0x3C($a2)
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1ff230: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x1ff230u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff234: 0x94c4003e  lhu         $a0, 0x3E($a2)
    ctx->pc = 0x1ff234u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 62)));
    // 0x1ff238: 0xa4a40016  sh          $a0, 0x16($a1)
    ctx->pc = 0x1ff238u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff23c: 0x84c40048  lh          $a0, 0x48($a2)
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1ff240: 0xa4a40018  sh          $a0, 0x18($a1)
    ctx->pc = 0x1ff240u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff244: 0x94c4004a  lhu         $a0, 0x4A($a2)
    ctx->pc = 0x1ff244u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 74)));
    // 0x1ff248: 0xa4a4001a  sh          $a0, 0x1A($a1)
    ctx->pc = 0x1ff248u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff24c: 0x84c40054  lh          $a0, 0x54($a2)
    ctx->pc = 0x1ff24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x1ff250: 0xa4a4001c  sh          $a0, 0x1C($a1)
    ctx->pc = 0x1ff250u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff254: 0x94c40056  lhu         $a0, 0x56($a2)
    ctx->pc = 0x1ff254u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
    // 0x1ff258: 0xa4a4001e  sh          $a0, 0x1E($a1)
    ctx->pc = 0x1ff258u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ff25c: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x1ff25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x1ff260: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF260u;
            // 0x1ff264: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF1D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff1d4;
        }
    }
    ctx->pc = 0x1FF268u;
label_1ff268:
    // 0x1ff268: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF270u;
}
