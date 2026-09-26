#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDataTypeStartListNo__9CGameDataFi
// Address: 0x195bb0 - 0x195c1c
void GetDataTypeStartListNo__9CGameDataFi_0x195bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDataTypeStartListNo__9CGameDataFi_0x195bb0");
#endif

    switch (ctx->pc) {
        case 0x195bd0u: goto label_195bd0;
        case 0x195bdcu: goto label_195bdc;
        default: break;
    }

    ctx->pc = 0x195bb0u;

    // 0x195bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x195bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bc8: 0xc0655dc  jal         func_195770
    ctx->pc = 0x195BC8u;
    SET_GPR_U32(ctx, 31, 0x195BD0u);
    ctx->pc = 0x195BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195BC8u;
            // 0x195bcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BD0u; }
        if (ctx->pc != 0x195BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195BD0u; }
        if (ctx->pc != 0x195BD0u) { return; }
    }
    ctx->pc = 0x195BD0u;
label_195bd0:
    // 0x195bd0: 0x96240022  lhu         $a0, 0x22($s1)
    ctx->pc = 0x195bd0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x195bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195BD4u;
    {
        const bool branch_taken_0x195bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BD4u;
            // 0x195bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195bd4) {
            ctx->pc = 0x195BF8u;
            goto label_195bf8;
        }
    }
    ctx->pc = 0x195BDCu;
label_195bdc:
    // 0x195bdc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x195bdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195be0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195BE0u;
    {
        const bool branch_taken_0x195be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x195be0) {
            ctx->pc = 0x195BF0u;
            goto label_195bf0;
        }
    }
    ctx->pc = 0x195BE8u;
    // 0x195be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195BE8u;
    {
        const bool branch_taken_0x195be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195BE8u;
            // 0x195bec: 0x84420002  lh          $v0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195be8) {
            ctx->pc = 0x195C08u;
            goto label_195c08;
        }
    }
    ctx->pc = 0x195BF0u;
label_195bf0:
    // 0x195bf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x195bf4: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x195bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_195bf8:
    // 0x195bf8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x195bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x195bfc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x195BFCu;
    {
        const bool branch_taken_0x195bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195bfc) {
            ctx->pc = 0x195BDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195bdc;
        }
    }
    ctx->pc = 0x195C04u;
    // 0x195c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195c08:
    // 0x195c08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c14: 0x3e00008  jr          $ra
    ctx->pc = 0x195C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195C14u;
            // 0x195c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195C1Cu;
}
