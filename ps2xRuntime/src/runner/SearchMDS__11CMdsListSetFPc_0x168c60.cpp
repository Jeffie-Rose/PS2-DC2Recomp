#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMDS__11CMdsListSetFPc
// Address: 0x168c60 - 0x168cd4
void SearchMDS__11CMdsListSetFPc_0x168c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMDS__11CMdsListSetFPc_0x168c60");
#endif

    switch (ctx->pc) {
        case 0x168c80u: goto label_168c80;
        case 0x168c8cu: goto label_168c8c;
        case 0x168c9cu: goto label_168c9c;
        default: break;
    }

    ctx->pc = 0x168c60u;

    // 0x168c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168c70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168c78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x168c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168c80:
    // 0x168c80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c84: 0xc05a308  jal         func_168C20
    ctx->pc = 0x168C84u;
    SET_GPR_U32(ctx, 31, 0x168C8Cu);
    ctx->pc = 0x168C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C84u;
            // 0x168c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168C20u;
    if (runtime->hasFunction(0x168C20u)) {
        auto targetFn = runtime->lookupFunction(0x168C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C8Cu; }
        if (ctx->pc != 0x168C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMdsList__11CMdsListSetFi_0x168c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C8Cu; }
        if (ctx->pc != 0x168C8Cu) { return; }
    }
    ctx->pc = 0x168C8Cu;
label_168c8c:
    // 0x168c8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168C8Cu;
    {
        const bool branch_taken_0x168c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168C8Cu;
            // 0x168c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c8c) {
            ctx->pc = 0x168CB4u;
            goto label_168cb4;
        }
    }
    ctx->pc = 0x168C94u;
    // 0x168c94: 0xc05a490  jal         func_169240
    ctx->pc = 0x168C94u;
    SET_GPR_U32(ctx, 31, 0x168C9Cu);
    ctx->pc = 0x168C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C94u;
            // 0x168c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169240u;
    if (runtime->hasFunction(0x169240u)) {
        auto targetFn = runtime->lookupFunction(0x169240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C9Cu; }
        if (ctx->pc != 0x168C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__8CMdsListFPc_0x169240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C9Cu; }
        if (ctx->pc != 0x168C9Cu) { return; }
    }
    ctx->pc = 0x168C9Cu;
label_168c9c:
    // 0x168c9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168C9Cu;
    {
        const bool branch_taken_0x168c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c9c) {
            ctx->pc = 0x168CACu;
            goto label_168cac;
        }
    }
    ctx->pc = 0x168CA4u;
    // 0x168ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168CA4u;
    {
        const bool branch_taken_0x168ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CA4u;
            // 0x168ca8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ca4) {
            ctx->pc = 0x168CC0u;
            goto label_168cc0;
        }
    }
    ctx->pc = 0x168CACu;
label_168cac:
    // 0x168cac: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x168CACu;
    {
        const bool branch_taken_0x168cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CACu;
            // 0x168cb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cac) {
            ctx->pc = 0x168C80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168c80;
        }
    }
    ctx->pc = 0x168CB4u;
label_168cb4:
    // 0x168cb4: 0x0  nop
    ctx->pc = 0x168cb4u;
    // NOP
    // 0x168cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168cc0:
    // 0x168cc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x168CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168CCCu;
            // 0x168cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168CD4u;
}
