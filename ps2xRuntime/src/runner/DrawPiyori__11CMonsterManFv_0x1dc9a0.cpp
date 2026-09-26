#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawPiyori__11CMonsterManFv
// Address: 0x1dc9a0 - 0x1dca34
void DrawPiyori__11CMonsterManFv_0x1dc9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawPiyori__11CMonsterManFv_0x1dc9a0");
#endif

    switch (ctx->pc) {
        case 0x1dc9c4u: goto label_1dc9c4;
        case 0x1dc9f8u: goto label_1dc9f8;
        case 0x1dca04u: goto label_1dca04;
        default: break;
    }

    ctx->pc = 0x1dc9a0u;

    // 0x1dc9a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dc9a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dc9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dc9a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc9b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dc9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc9bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dc9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc9c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc9c4:
    // 0x1dc9c4: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1dc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1dc9c8: 0x8c650484  lw          $a1, 0x484($v1)
    ctx->pc = 0x1dc9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1dc9cc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DC9CCu;
    {
        const bool branch_taken_0x1dc9cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9CCu;
            // 0x1dc9d0: 0x24720484  addiu       $s2, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9cc) {
            ctx->pc = 0x1DCA04u;
            goto label_1dca04;
        }
    }
    ctx->pc = 0x1DC9D4u;
    // 0x1dc9d4: 0x84a40730  lh          $a0, 0x730($a1)
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x1dc9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc9dc: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC9DCu;
    {
        const bool branch_taken_0x1dc9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc9dc) {
            ctx->pc = 0x1DCA04u;
            goto label_1dca04;
        }
    }
    ctx->pc = 0x1DC9E4u;
    // 0x1dc9e4: 0x8ca31330  lw          $v1, 0x1330($a1)
    ctx->pc = 0x1dc9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4912)));
    // 0x1dc9e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC9E8u;
    {
        const bool branch_taken_0x1dc9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9E8u;
            // 0x1dc9ec: 0x24a41270  addiu       $a0, $a1, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc9e8) {
            ctx->pc = 0x1DCA04u;
            goto label_1dca04;
        }
    }
    ctx->pc = 0x1DC9F0u;
    // 0x1dc9f0: 0xc072640  jal         func_1C9900
    ctx->pc = 0x1DC9F0u;
    SET_GPR_U32(ctx, 31, 0x1DC9F8u);
    ctx->pc = 0x1C9900u;
    if (runtime->hasFunction(0x1C9900u)) {
        auto targetFn = runtime->lookupFunction(0x1C9900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9F8u; }
        if (ctx->pc != 0x1DC9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CPiyoriFv_0x1c9900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC9F8u; }
        if (ctx->pc != 0x1DC9F8u) { return; }
    }
    ctx->pc = 0x1DC9F8u;
label_1dc9f8:
    // 0x1dc9f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc9fc: 0xc072740  jal         func_1C9D00
    ctx->pc = 0x1DC9FCu;
    SET_GPR_U32(ctx, 31, 0x1DCA04u);
    ctx->pc = 0x1DCA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC9FCu;
            // 0x1dca00: 0x24441290  addiu       $a0, $v0, 0x1290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9D00u;
    if (runtime->hasFunction(0x1C9D00u)) {
        auto targetFn = runtime->lookupFunction(0x1C9D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA04u; }
        if (ctx->pc != 0x1DCA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CGiftMarkFv_0x1c9d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCA04u; }
        if (ctx->pc != 0x1DCA04u) { return; }
    }
    ctx->pc = 0x1DCA04u;
label_1dca04:
    // 0x1dca04: 0x0  nop
    ctx->pc = 0x1dca04u;
    // NOP
    // 0x1dca08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dca08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dca0c: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1dca0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dca10: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DCA10u;
    {
        const bool branch_taken_0x1dca10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA10u;
            // 0x1dca14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca10) {
            ctx->pc = 0x1DC9C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc9c4;
        }
    }
    ctx->pc = 0x1DCA18u;
    // 0x1dca18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dca1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dca1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dca20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dca20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dca24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dca24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dca28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dca28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA2Cu;
            // 0x1dca30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA34u;
}
