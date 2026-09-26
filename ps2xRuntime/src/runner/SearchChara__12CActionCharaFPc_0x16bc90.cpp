#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchChara__12CActionCharaFPc
// Address: 0x16bc90 - 0x16bcf0
void SearchChara__12CActionCharaFPc_0x16bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchChara__12CActionCharaFPc_0x16bc90");
#endif

    switch (ctx->pc) {
        case 0x16bcb0u: goto label_16bcb0;
        case 0x16bcb8u: goto label_16bcb8;
        default: break;
    }

    ctx->pc = 0x16bc90u;

    // 0x16bc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bc94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bc98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bc9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bca0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bca4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16BCA4u;
    {
        const bool branch_taken_0x16bca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCA4u;
            // 0x16bca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bca4) {
            ctx->pc = 0x16BCD4u;
            goto label_16bcd4;
        }
    }
    ctx->pc = 0x16BCACu;
    // 0x16bcac: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16bcb0:
    // 0x16bcb0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16BCB0u;
    SET_GPR_U32(ctx, 31, 0x16BCB8u);
    ctx->pc = 0x16BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCB0u;
            // 0x16bcb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB8u; }
        if (ctx->pc != 0x16BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB8u; }
        if (ctx->pc != 0x16BCB8u) { return; }
    }
    ctx->pc = 0x16BCB8u;
label_16bcb8:
    // 0x16bcb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BCB8u;
    {
        const bool branch_taken_0x16bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCB8u;
            // 0x16bcbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcb8) {
            ctx->pc = 0x16BCC8u;
            goto label_16bcc8;
        }
    }
    ctx->pc = 0x16BCC0u;
    // 0x16bcc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BCC0u;
    {
        const bool branch_taken_0x16bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCC0u;
            // 0x16bcc4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bcc0) {
            ctx->pc = 0x16BCE0u;
            goto label_16bce0;
        }
    }
    ctx->pc = 0x16BCC8u;
label_16bcc8:
    // 0x16bcc8: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16bcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16bccc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16BCCCu;
    {
        const bool branch_taken_0x16bccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCCCu;
            // 0x16bcd0: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bccc) {
            ctx->pc = 0x16BCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bcb0;
        }
    }
    ctx->pc = 0x16BCD4u;
label_16bcd4:
    // 0x16bcd4: 0x0  nop
    ctx->pc = 0x16bcd4u;
    // NOP
    // 0x16bcd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16bcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16bcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16bce0:
    // 0x16bce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCE8u;
            // 0x16bcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BCF0u;
}
