#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMagicSwordCounterMax__16CBattleCharaInfoFv
// Address: 0x19fc80 - 0x19fd00
void GetMagicSwordCounterMax__16CBattleCharaInfoFv_0x19fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMagicSwordCounterMax__16CBattleCharaInfoFv_0x19fc80");
#endif

    ctx->pc = 0x19fc80u;

    // 0x19fc80: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19fc84: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC84u;
            // 0x19fc88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FC94u;
            goto label_19fc94;
        }
    }
    ctx->pc = 0x19FC8Cu;
    // 0x19fc8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19FC8Cu;
    {
        const bool branch_taken_0x19fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc8c) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FC94u;
label_19fc94:
    // 0x19fc94: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x19fc94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19fc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fc9c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FC9Cu;
    {
        const bool branch_taken_0x19fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC9Cu;
            // 0x19fca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc9c) {
            ctx->pc = 0x19FCACu;
            goto label_19fcac;
        }
    }
    ctx->pc = 0x19FCA4u;
    // 0x19fca4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19FCA4u;
    {
        const bool branch_taken_0x19fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fca4) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FCACu;
label_19fcac:
    // 0x19fcac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FCACu;
    {
        const bool branch_taken_0x19fcac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCACu;
            // 0x19fcb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcac) {
            ctx->pc = 0x19FCBCu;
            goto label_19fcbc;
        }
    }
    ctx->pc = 0x19FCB4u;
    // 0x19fcb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19FCB4u;
    {
        const bool branch_taken_0x19fcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fcb4) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FCBCu;
label_19fcbc:
    // 0x19fcbc: 0x84a20024  lh          $v0, 0x24($a1)
    ctx->pc = 0x19fcbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x19fcc0: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x19fcc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19fcc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FCC4u;
    {
        const bool branch_taken_0x19fcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCC4u;
            // 0x19fcc8: 0x2443ffe0  addiu       $v1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc4) {
            ctx->pc = 0x19FCD4u;
            goto label_19fcd4;
        }
    }
    ctx->pc = 0x19FCCCu;
    // 0x19fccc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19FCCCu;
    {
        const bool branch_taken_0x19fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCCCu;
            // 0x19fcd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fccc) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FCD4u;
label_19fcd4:
    // 0x19fcd4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FCD4u;
    {
        const bool branch_taken_0x19fcd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCD4u;
            // 0x19fcd8: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcd4) {
            ctx->pc = 0x19FCE4u;
            goto label_19fce4;
        }
    }
    ctx->pc = 0x19FCDCu;
    // 0x19fcdc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x19fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x19fce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x19fce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_19fce4:
    // 0x19fce4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x19fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x19fce8: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x19fce8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fcec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19FCECu;
    {
        const bool branch_taken_0x19fcec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fcec) {
            ctx->pc = 0x19FCF8u;
            goto label_19fcf8;
        }
    }
    ctx->pc = 0x19FCF4u;
    // 0x19fcf4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_19fcf8:
    // 0x19fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FD00u;
}
