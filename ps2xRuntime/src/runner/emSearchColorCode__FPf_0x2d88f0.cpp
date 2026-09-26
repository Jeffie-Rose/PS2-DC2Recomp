#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emSearchColorCode__FPf
// Address: 0x2d88f0 - 0x2d8960
void emSearchColorCode__FPf_0x2d88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emSearchColorCode__FPf_0x2d88f0");
#endif

    switch (ctx->pc) {
        case 0x2d890cu: goto label_2d890c;
        case 0x2d8914u: goto label_2d8914;
        case 0x2d891cu: goto label_2d891c;
        case 0x2d8928u: goto label_2d8928;
        default: break;
    }

    ctx->pc = 0x2d88f0u;

    // 0x2d88f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d88f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d88f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d88f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d88f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d88fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d8900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d8900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d890c:
    // 0x2d890c: 0xc07c944  jal         func_1F2510
    ctx->pc = 0x2D890Cu;
    SET_GPR_U32(ctx, 31, 0x2D8914u);
    ctx->pc = 0x2D8910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D890Cu;
            // 0x2d8910: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2510u;
    if (runtime->hasFunction(0x1F2510u)) {
        auto targetFn = runtime->lookupFunction(0x1F2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8914u; }
        if (ctx->pc != 0x2D8914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPenkiColor__FiPf_0x1f2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8914u; }
        if (ctx->pc != 0x2D8914u) { return; }
    }
    ctx->pc = 0x2D8914u;
label_2d8914:
    // 0x2d8914: 0xc0b622c  jal         func_2D88B0
    ctx->pc = 0x2D8914u;
    SET_GPR_U32(ctx, 31, 0x2D891Cu);
    ctx->pc = 0x2D8918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8914u;
            // 0x2d8918: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D88B0u;
    if (runtime->hasFunction(0x2D88B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D891Cu; }
        if (ctx->pc != 0x2D891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvColorV__FPf_0x2d88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D891Cu; }
        if (ctx->pc != 0x2D891Cu) { return; }
    }
    ctx->pc = 0x2D891Cu;
label_2d891c:
    // 0x2d891c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8920: 0xc06d7e4  jal         func_1B5F90
    ctx->pc = 0x2D8920u;
    SET_GPR_U32(ctx, 31, 0x2D8928u);
    ctx->pc = 0x2D8924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8920u;
            // 0x2d8924: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F90u;
    if (runtime->hasFunction(0x1B5F90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8928u; }
        if (ctx->pc != 0x2D8928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPartsCmpColor__FPfPf_0x1b5f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8928u; }
        if (ctx->pc != 0x2D8928u) { return; }
    }
    ctx->pc = 0x2D8928u;
label_2d8928:
    // 0x2d8928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8928u;
    {
        const bool branch_taken_0x2d8928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D892Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8928u;
            // 0x2d892c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8928) {
            ctx->pc = 0x2D8938u;
            goto label_2d8938;
        }
    }
    ctx->pc = 0x2D8930u;
    // 0x2d8930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8930u;
    {
        const bool branch_taken_0x2d8930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8930u;
            // 0x2d8934: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8930) {
            ctx->pc = 0x2D8950u;
            goto label_2d8950;
        }
    }
    ctx->pc = 0x2D8938u;
label_2d8938:
    // 0x2d8938: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d893c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2d893cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d8940: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D8940u;
    {
        const bool branch_taken_0x2d8940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8940u;
            // 0x2d8944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8940) {
            ctx->pc = 0x2D890Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d890c;
        }
    }
    ctx->pc = 0x2D8948u;
    // 0x2d8948: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d894c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d894cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8950:
    // 0x2d8950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d8950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8958: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D895Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8958u;
            // 0x2d895c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8960u;
}
