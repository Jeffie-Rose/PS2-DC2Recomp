#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PushPrimRepeat__FP11mgCDrawPrimPfPii
// Address: 0x21fdb0 - 0x21fe54
void PushPrimRepeat__FP11mgCDrawPrimPfPii_0x21fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushPrimRepeat__FP11mgCDrawPrimPfPii_0x21fdb0");
#endif

    switch (ctx->pc) {
        case 0x21fdf0u: goto label_21fdf0;
        case 0x21fe04u: goto label_21fe04;
        case 0x21fe1cu: goto label_21fe1c;
        default: break;
    }

    ctx->pc = 0x21fdb0u;

    // 0x21fdb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21fdb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21fdb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21fdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21fdbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21fdc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21fdc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21fdc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21fdcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21fdccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fdd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21fdd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fddc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x21fddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fde0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x21fde0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21fde4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x21FDE4u;
    {
        const bool branch_taken_0x21fde4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDE4u;
            // 0x21fde8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde4) {
            ctx->pc = 0x21FE2Cu;
            goto label_21fe2c;
        }
    }
    ctx->pc = 0x21FDECu;
    // 0x21fdec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21fdecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fdf0:
    // 0x21fdf0: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x21fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x21fdf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fdf8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x21fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21fdfc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x21FDFCu;
    SET_GPR_U32(ctx, 31, 0x21FE04u);
    ctx->pc = 0x21FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FDFCu;
            // 0x21fe00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE04u; }
        if (ctx->pc != 0x21FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE04u; }
        if (ctx->pc != 0x21FE04u) { return; }
    }
    ctx->pc = 0x21FE04u;
label_21fe04:
    // 0x21fe04: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x21fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x21fe08: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x21fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21fe0c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x21fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21fe10: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x21fe10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21fe14: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x21FE14u;
    SET_GPR_U32(ctx, 31, 0x21FE1Cu);
    ctx->pc = 0x21FE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE14u;
            // 0x21fe18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE1Cu; }
        if (ctx->pc != 0x21FE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE1Cu; }
        if (ctx->pc != 0x21FE1Cu) { return; }
    }
    ctx->pc = 0x21FE1Cu;
label_21fe1c:
    // 0x21fe1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21fe1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x21fe20: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x21fe20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21fe24: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x21FE24u;
    {
        const bool branch_taken_0x21fe24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE24u;
            // 0x21fe28: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe24) {
            ctx->pc = 0x21FDF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21fdf0;
        }
    }
    ctx->pc = 0x21FE2Cu;
label_21fe2c:
    // 0x21fe2c: 0x0  nop
    ctx->pc = 0x21fe2cu;
    // NOP
    // 0x21fe30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21fe30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21fe34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21fe34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21fe38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21fe38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21fe3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21fe3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fe40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21fe40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fe44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21fe44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fe48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21fe48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FE4Cu;
            // 0x21fe50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FE54u;
}
