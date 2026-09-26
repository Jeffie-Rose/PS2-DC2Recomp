#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertShitJiss2Ascii__FPcPc
// Address: 0x30ae80 - 0x30aef0
void ConvertShitJiss2Ascii__FPcPc_0x30ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertShitJiss2Ascii__FPcPc_0x30ae80");
#endif

    switch (ctx->pc) {
        case 0x30aea8u: goto label_30aea8;
        case 0x30aeb0u: goto label_30aeb0;
        default: break;
    }

    ctx->pc = 0x30ae80u;

    // 0x30ae80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30ae84: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x30AE84u;
    {
        const bool branch_taken_0x30ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE84u;
            // 0x30ae88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae84) {
            ctx->pc = 0x30AEE4u;
            goto label_30aee4;
        }
    }
    ctx->pc = 0x30AE8Cu;
    // 0x30ae8c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30AE8Cu;
    {
        const bool branch_taken_0x30ae8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE8Cu;
            // 0x30ae90: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae8c) {
            ctx->pc = 0x30AEA0u;
            goto label_30aea0;
        }
    }
    ctx->pc = 0x30AE94u;
    // 0x30ae94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30AE94u;
    {
        const bool branch_taken_0x30ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AE94u;
            // 0x30ae98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae94) {
            ctx->pc = 0x30AEE8u;
            goto label_30aee8;
        }
    }
    ctx->pc = 0x30AE9Cu;
    // 0x30ae9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x30ae9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30aea0:
    // 0x30aea0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30AEA0u;
    {
        const bool branch_taken_0x30aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30aea0) {
            ctx->pc = 0x30AED8u;
            goto label_30aed8;
        }
    }
    ctx->pc = 0x30AEA8u;
label_30aea8:
    // 0x30aea8: 0xc0c2b74  jal         func_30ADD0
    ctx->pc = 0x30AEA8u;
    SET_GPR_U32(ctx, 31, 0x30AEB0u);
    ctx->pc = 0x30ADD0u;
    if (runtime->hasFunction(0x30ADD0u)) {
        auto targetFn = runtime->lookupFunction(0x30ADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AEB0u; }
        if (ctx->pc != 0x30AEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        search_txt_jis__FPc_0x30add0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30AEB0u; }
        if (ctx->pc != 0x30AEB0u) { return; }
    }
    ctx->pc = 0x30AEB0u;
label_30aeb0:
    // 0x30aeb0: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x30aeb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x30aeb4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AEB4u;
    {
        const bool branch_taken_0x30aeb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aeb4) {
            ctx->pc = 0x30AED0u;
            goto label_30aed0;
        }
    }
    ctx->pc = 0x30AEBCu;
    // 0x30aebc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30aec0: 0x2463e230  addiu       $v1, $v1, -0x1DD0
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959664));
    // 0x30aec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30aec8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30aec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30aecc: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x30aeccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_30aed0:
    // 0x30aed0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x30aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30aed4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30aed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_30aed8:
    // 0x30aed8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30aed8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30aedc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x30AEDCu;
    {
        const bool branch_taken_0x30aedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aedc) {
            ctx->pc = 0x30AEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30aea8;
        }
    }
    ctx->pc = 0x30AEE4u;
label_30aee4:
    // 0x30aee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30aee8:
    // 0x30aee8: 0x3e00008  jr          $ra
    ctx->pc = 0x30AEE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AEE8u;
            // 0x30aeec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AEF0u;
}
