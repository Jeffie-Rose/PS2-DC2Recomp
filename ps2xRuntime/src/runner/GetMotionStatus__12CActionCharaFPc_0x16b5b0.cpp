#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMotionStatus__12CActionCharaFPc
// Address: 0x16b5b0 - 0x16b630
void GetMotionStatus__12CActionCharaFPc_0x16b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMotionStatus__12CActionCharaFPc_0x16b5b0");
#endif

    switch (ctx->pc) {
        case 0x16b5e0u: goto label_16b5e0;
        case 0x16b5e8u: goto label_16b5e8;
        default: break;
    }

    ctx->pc = 0x16b5b0u;

    // 0x16b5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b5c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b5c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16b5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5cc: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x16B5CCu;
    {
        const bool branch_taken_0x16b5cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5CCu;
            // 0x16b5d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5cc) {
            ctx->pc = 0x16B60Cu;
            goto label_16b60c;
        }
    }
    ctx->pc = 0x16B5D4u;
    // 0x16b5d4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B5D4u;
    {
        const bool branch_taken_0x16b5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5D4u;
            // 0x16b5d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5d4) {
            ctx->pc = 0x16B618u;
            goto label_16b618;
        }
    }
    ctx->pc = 0x16B5DCu;
    // 0x16b5dc: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16b5e0:
    // 0x16b5e0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16B5E0u;
    SET_GPR_U32(ctx, 31, 0x16B5E8u);
    ctx->pc = 0x16B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5E0u;
            // 0x16b5e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5E8u; }
        if (ctx->pc != 0x16B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5E8u; }
        if (ctx->pc != 0x16B5E8u) { return; }
    }
    ctx->pc = 0x16B5E8u;
label_16b5e8:
    // 0x16b5e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B5E8u;
    {
        const bool branch_taken_0x16b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b5e8) {
            ctx->pc = 0x16B5F8u;
            goto label_16b5f8;
        }
    }
    ctx->pc = 0x16B5F0u;
    // 0x16b5f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16B5F0u;
    {
        const bool branch_taken_0x16b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5F0u;
            // 0x16b5f4: 0x8e020384  lw          $v0, 0x384($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5f0) {
            ctx->pc = 0x16B618u;
            goto label_16b618;
        }
    }
    ctx->pc = 0x16B5F8u;
label_16b5f8:
    // 0x16b5f8: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b5fc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B5FCu;
    {
        const bool branch_taken_0x16b5fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5FCu;
            // 0x16b600: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5fc) {
            ctx->pc = 0x16B5E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b5e0;
        }
    }
    ctx->pc = 0x16B604u;
    // 0x16b604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B604u;
    {
        const bool branch_taken_0x16b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b604) {
            ctx->pc = 0x16B614u;
            goto label_16b614;
        }
    }
    ctx->pc = 0x16B60Cu;
label_16b60c:
    // 0x16b60c: 0x8c910384  lw          $s1, 0x384($a0)
    ctx->pc = 0x16b60cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x16b610: 0x0  nop
    ctx->pc = 0x16b610u;
    // NOP
label_16b614:
    // 0x16b614: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16b614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b618:
    // 0x16b618: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b61c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b628: 0x3e00008  jr          $ra
    ctx->pc = 0x16B628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B628u;
            // 0x16b62c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B630u;
}
